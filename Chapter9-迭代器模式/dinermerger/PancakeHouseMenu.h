#ifndef PANCAKE_HOUSE_MENU_H
#define PANCAKE_HOUSE_MENU_H
#include <iostream>
#include "MenuItem.h"
#include "Menu.h"
#include "Iterator.h"
#include "PancakeHouseMenuIterator.h"
using namespace std;
class PancakeHouseMenu:public Menu {
	vector<MenuItem> menuItems;
public:
    PancakeHouseMenu() {
		addItem("K&B's Pancake Breakfast",
			"Pancakes with scrambled eggs, and toast",
			true,
			2.99);
		addItem("Regular Pancake Breakfast",
			"Pancakes with fried eggs, sausage",
			false,
			2.99);
		addItem("Blueberry Pancakes",
			"Pancakes made with fresh blueberries",
			true,
			3.49);
		addItem("Waffles",
			"Waffles, with your choice of blueberries or strawberries",
			true,
			3.59);
	}
	 void addItem(string name, string description,
	                    bool vegetarian, double price)
	{
		MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);
		menuItems.push_back(*menuItem);
	}

	 vector<MenuItem> getMenuItems() {
		return menuItems;
	}

	 Iterator* createIterator() {
		return new PancakeHouseMenuIterator(menuItems);
	}

	 string toString() {
		return "Objectville Pancake House Menu";
	}
};
#endif // PANCAKE_HOUSE_MENU_H
