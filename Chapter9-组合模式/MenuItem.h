#include <iostream>
using namespace std;
class MenuItem :public MenuComponent {
	string name;
	string description;
	bool vegetarian;
	double price;
public:
    MenuItem(string Name,string Description,bool Vegetarian,double Price){
		name = Name;
		description = Description;
		vegetarian = Vegetarian;
		price = Price;
	}
    void add(MenuComponent* menuComponent) {}
    string getName() {return name;}
	string getDescription() {return description;}
	double getPrice() {return price;}
    bool isVegetarian() {return vegetarian;}
    void print() {
        cout<<"  "<<getName();
		if (isVegetarian()) {cout<<"(v)";}
		cout<<", "<<getPrice()<<endl;
		cout<<"     -- "<<getDescription()<<endl;
	}
};
