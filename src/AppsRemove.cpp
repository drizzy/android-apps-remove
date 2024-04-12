#include "AppsRemove.h"
#include "utils/miscelanea.h"

// Function to uninstall the specified package
void uninstallPackage(const std::string& packageName) {

  std::string command = "adb shell pm uninstall --user 0 " + packageName;

  int result = system(command.c_str());

  clearScreen();

  if (result == 0) {
    std::cout << packageName << " uninstalled correctly!" << std::endl;
  } else {
    std::cout << "Error uninstalling the application" << std::endl;
  }
}