#ifndef DINNER_MENU_H
#define DINNER_MENU_H
#include <iostream>
#include "MenuItem.h"
#include "Menu.h"
#include "Iterator.h"
#include "DinerMenuIterator.h"
using namespace std;
class DinerMenu:public Menu {
	int MAX_ITEMS = 6;
	int numberOfItems = 0;
    MenuItem* menuItems;
public:
    DinerMenu() {
		menuItems = new MenuItem[MAX_ITEMS];
		addItem("Vegetarian BLT",
			"(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
		addItem("BLT",
			"Bacon with lettuce & tomato on whole wheat", false, 2.99);
		addItem("Soup of the day",
			"Soup of the day, with a side of potato salad", false, 3.29);
		addItem("Hotdog",
			"A hot dog, with saurkraut, relish, onions, topped with cheese",
			false, 3.05);
		addItem("Steamed Veggies and Brown Rice",
			"Steamed vegetables over brown rice", true, 3.99);
		addItem("Pasta",
			"Spaghetti with Marinara Sauce, and a slice of sourdough bread",
			true, 3.89);
	}
	 void addItem(string name, string description,
	                     bool vegetarian, double price)
	{
		MenuItem* menuItem = new MenuItem(name, description, vegetarian, price);
		if (numberOfItems >= MAX_ITEMS) {
			cout<<"Sorry, menu is full!  Can't add item to menu"<<endl;
		} else {
			menuItems[numberOfItems] = *menuItem;
			numberOfItems = numberOfItems + 1;
		}
	}
	 MenuItem* getMenuItems() {
		return menuItems;
	}
	 Iterator* createIterator() {
		return new DinerMenuIterator(menuItems);
	}
};
#endif // DINNER_MENU_H
