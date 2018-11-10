#include <iostream>
#include "Iterator.h"
#include "MenuItem.h"
using namespace std;
class ArrayIterator :public Iterator {
	MenuItem* items;
	int position = 0;
public:
    ArrayIterator(MenuItem* i) {
		items = i;
	}
	 MenuItem next() {
		MenuItem menuItem = items[position];
		position = position + 1;
		return menuItem;
	}
	 bool hasNext() {
		if (position >= 10) {
			return false;
		} else {
			return true;
		}
	}
};
