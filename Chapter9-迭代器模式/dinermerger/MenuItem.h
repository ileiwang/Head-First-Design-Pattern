#ifndef MENU_ITEM_H
#define MENU_ITEM_H
#include <iostream>
using namespace std;
class MenuItem {
	string name;
	string description;
	bool vegetarian;
	double price;
public:
    MenuItem(string n,string d,bool v,double p)
	{
		name = n;
		description = d;
		vegetarian = v;
		price = p;
	}
	MenuItem(){}
	 string getName() {
		return name;
	}
	 string getDescription() {
		return description;
	}
	 double getPrice() {
		return price;
	}
	 bool isVegetarian() {
		return vegetarian;
	}
	 string toString() {
		string s = "";
		s.append(name);
		s.append(", $");
		//s.append((string)price);
        s.append("\n   ");
        s.append(description);
        return s;
	}
};
#endif // MENU_ITEM_H
