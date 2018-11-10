#include <iostream>
#include <vector>
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Waitress.h"
using namespace std;
int main()
{
    PancakeHouseMenu* pancakeHouseMenu = new PancakeHouseMenu();
    DinerMenu* dinerMenu = new DinerMenu();
    Waitress* waitress = new Waitress(pancakeHouseMenu, dinerMenu);
    waitress->printMenu();
    return 0;
}


