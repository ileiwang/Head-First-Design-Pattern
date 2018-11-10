#include <iostream>
#include <vector>
#include "Iterator.h"
#include "MenuItem.h"
using namespace std;
class PancakeHouseMenuIterator :public Iterator {
	vector<MenuItem> items;
	int position = 0;
public:
    PancakeHouseMenuIterator(vector<MenuItem> i) {
		items = i;
	}
	 MenuItem next() {
		MenuItem menuItem = items.at(position);
		position = position + 1;
		return menuItem;
	}

	 bool hasNext() {
		if (position >= items.size()) {
			return false;
		} else {
			return true;
		}
	}
};


