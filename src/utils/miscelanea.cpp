#include "utils/miscelanea.h"

void clearScreen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

std::string toLower(const std::string& str) {

  std::string result;

  result.reserve(str.size());

  std::transform(str.begin(), str.end(), std::back_inserter(result),
  [](unsigned char c){ return std::tolower(c); });
  
  return result;
}
