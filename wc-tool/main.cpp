#include "wc.hpp"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  string filePath, flag = "";
  bool hasFile = false;

  // check for file
  if (argc > 1) {
    string firstArg = argv[1];

    if (firstArg[0] == '-') {
      flag = firstArg;
      if (argc > 2) {
        hasFile = true;
        filePath = argv[2];
      }
    } else {
      hasFile = true;
      filePath = firstArg;
    }
  }

  WCResult result;

  if (hasFile)
    result = countFromFile(filePath);
  else {
    ostringstream oss;
    oss << cin.rdbuf(); // read from stdin
    string inputText = oss.str();
    result = countFromString(inputText);
  }

  if (flag == "-l")
    cout << result.lines << " " << filePath << "\n";
  else if (flag == "-w")
    cout << result.words << " " << filePath << "\n";
  else if (flag == "-c")
    cout << result.bytes << " " << filePath << "\n";
  else if (flag == "-m")
    cout << result.characters << " " << filePath << "\n";
  else if (flag == "")
    cout << "  " << result.lines << "  " << result.words << " " << result.bytes
         << " " << filePath << "\n";
  else {
    cerr << "Unknown flag: " << flag << "\n";
    return 1;
  }

  return 0;
}
