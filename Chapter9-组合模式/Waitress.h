#include <iostream>
#include "MenuComponent.h"
using namespace std;
class Waitress {
	MenuComponent* allMenus;
public:
    Waitress(MenuComponent* allmenus) {allMenus = allmenus;}
	 void printMenu() {allMenus->print();}
};
