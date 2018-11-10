#include <iostream>
#include "MenuComponent.h"
#include "Menu.h"
#include "Waitress.h"
#include "MenuItem.h"
using namespace std;
int main()
{
    MenuComponent *pancakeHouseMenu =new Menu("PANCAKE HOUSE MENU", "Breakfast");
    MenuComponent *dinerMenu =new Menu("DINER MENU", "Lunch");
    MenuComponent *cafeMenu =new Menu("CAFE MENU", "Dinner");
    MenuComponent *dessertMenu =new Menu("DESSERT MENU", "Dessert of course!");
    MenuComponent *coffeeMenu = new Menu("COFFEE MENU", "Stuff to go with your afternoon coffee");
    MenuComponent *allMenus = new Menu("ALL MENUS", "All menus combined");
    allMenus->add(pancakeHouseMenu);
    allMenus->add(dinerMenu);
    allMenus->add(cafeMenu);
    pancakeHouseMenu->add(new MenuItem("K&B's Pancake Breakfast","Pancakes with scrambled eggs, and toast",true,2.99));
    pancakeHouseMenu->add(new MenuItem("Regular Pancake Breakfast","Pancakes with fried eggs, sausage",false,2.99));
    dinerMenu->add(new MenuItem("Vegetarian BLT","(Fakin') Bacon with lettuce & tomato on whole wheat",true,2.99));
    dinerMenu->add(new MenuItem("BLT","Bacon with lettuce & tomato on whole wheat",false,2.99));
    dinerMenu->add(dessertMenu);
    dessertMenu->add(new MenuItem("Apple Pie","Apple pie with a flakey crust, topped with vanilla icecream",true,1.59));
    cafeMenu->add(new MenuItem("Veggie Burger and Air Fries","Veggie burger on a whole wheat bun, lettuce, tomato, and fries",true,3.99));
    cafeMenu->add(coffeeMenu);
    coffeeMenu->add(new MenuItem("Coffee Cake","Crumbly cake topped with cinnamon and walnuts",true,1.59));
    Waitress *waitress = new Waitress(allMenus);
    waitress->printMenu();
    return 0;
}
