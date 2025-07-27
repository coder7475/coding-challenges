#ifndef WC_HPP
#define WC_HPP

#include <string>

struct WCResult {
  int lines = 0;
  int words = 0;
  int characters = 0;
  int bytes = 0;
};

// Function signature of main logic of wc-tool
WCResult countFromFile(const std::string &filename);

// Function signature to read from string
WCResult countFromString(const std::string &content);

#endif
