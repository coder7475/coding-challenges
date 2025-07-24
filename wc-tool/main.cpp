#include "wc.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc < 2) {
    cerr << "Usage: " << argv[0] << "<filename>\n";
  }

  string filename = argv[1];

  WCResult result = countFromFile(filename);

  cout << "Lines: " << result.lines << "\n";
  cout << "Words: " << result.words << "\n";
  cout << "Characters: " << result.characters << "\n";

  return 0;
}
