#include "Menu.h"
#include "AppsRemove.h"
#include "utils/miscelanea.h"

void Menu(){

  int opc;
  std::string packageName;

  do {
    
    std::cout << "\t ::REMOVE ANDROID APPS:: \n";
    std::cout << "[1] REMOVE" << std::endl;
    std::cout << "[0] GO OUT" << std::endl;
    std::cout << "OPTION: ";
        
    while (!(std::cin >> opc) || (opc != 0 && opc != 1)) {
      std::cout << "Invalid input. Please enter 0 or 1: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
        
    if (opc == 1) {
      std::cout << "Name of the package to uninstall: ";
      std::cin >> packageName;
      clearScreen();
      uninstallPackage(toLower(packageName));
    }

  } while (opc != 0);

}