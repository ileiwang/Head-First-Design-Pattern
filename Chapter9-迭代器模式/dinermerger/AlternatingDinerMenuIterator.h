#include <iostream>
#include <vector>
#include "Iterator.h"
#include "MenuItem.h"
using namespace std;
class AlternatingDinerMenuIterator :public Iterator {
	MenuItem* items
	int position = 0;
public:
    AlternatingDinerMenuIterator(MenuItem* i) {
		items = i;
	}
	 MenuItem next() {
		MenuItem menuItem = items[position];
		position = position + 2;
		return menuItem;
	}
	 bool hasNext() {
		if (position >= 10) {
			return false;
		} else {
			return true;
		}
	}
    string toString() {
		return "Alternating Diner Menu Iterator";
	}
};



