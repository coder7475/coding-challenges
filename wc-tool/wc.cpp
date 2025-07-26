#include "wc.hpp"
#include <algorithm>
#include <codecvt>
#include <fstream>
#include <iostream>
#include <locale>
#include <sstream>
#include <string>

using namespace std;

WCResult countFromFile(const string &filename) {
  WCResult result;

  // open file in binary mode
  ifstream file(filename, ios::binary);

  if (!file.is_open()) {
    cerr << "Error: Could not open file" << filename << "\n";
    return result;
  }

  // read file content is string
  ostringstream oss;
  oss << file.rdbuf();
  string content = oss.str();

  result.bytes = content.size(); // count the bytes
  // count the lines
  result.lines = count(content.begin(), content.end(), '\n');

  // count words
  istringstream iss(content);
  string word;

  while (iss >> word) {
    result.words++;
  }

  // count characters
  // Count characters (multi-byte aware)
  wstring_convert<codecvt_utf8_utf16<wchar_t>> converter;
  try {
    wstring wide = converter.from_bytes(content);
    result.characters = wide.length(); // -m counts multibyte chars
  } catch (...) {
    cerr << "Warning: Character conversion failed. Falling back to byte "
            "count.\n";
    result.characters = result.bytes;
  }

  file.close();

  return result;
}
