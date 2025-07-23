#include "wc.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

WCResult countFromFile(const string &filename) {
  WCResult result;

  ifstream file(filename);

  if (!file.is_open()) {
    cerr << "Error: Could not open file" << filename << "\n";
    return result;
  }

  string line;

  while (getline(file, line)) {
    // count lines
    result.lines++;
    // count characters
    result.characters += line.size() + 1;

    // Count words
    istringstream ss(line);
    string word;

    while (ss >> word) {
      result.words++;
    }
  }

  file.close();

  return result;
}
