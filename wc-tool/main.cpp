#include "wc.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc < 2) {
    cerr << "Usage: ./ccwc [options] <file>\n";
    cerr << "Options:\n  -l    Show line count\n  -w    Show word count\n  -c    Show character count\n";
    return 1;
}

  string filePath, flag = "";

  if (argc == 2) {
    filePath = argv[1];
  } else if (argc == 3) {
    flag = argv[1];
    filePath = argv[2];
  } else {
    cerr << "Too many arguments\n";
    return 1;
  }

  // read the file
  WCResult result = countFromFile(filePath);

  if (flag == "-l")
    cout << result.lines << " " << filePath << "\n";
  else if (flag == "-w")  
    cout << result.words << " " << filePath << "\n";
  else if (flag == "-c")
    cout << result.characters << " " << filePath << "\n";
  else if (flag == "") 
    cout << result.lines << " " << result.words << " " << result.characters << " " << filePath << "\n";
  else {
    cerr << "Unknown flag: " << flag << "\n";
    return 1;
  }
    
  return 0;
}
