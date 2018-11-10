#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
class Menu :public MenuComponent {
	vector<MenuComponent*> menuComponents;
	string name;
	string description;
public:
    Menu(string n, string d) {name = n;description = d;}
    void add(MenuComponent* menuComponent) {menuComponents.push_back(menuComponent);}
    string getName() {return name;}
    string getDescription() {return description;}
    bool isVegetarian() {return true;}
    double getPrice() {return 3.14;}
    void print() {
		cout<<"\n"<<getName();
		cout<<", "<<getDescription()<<endl;
		cout<<"---------------------"<<endl;
        for(vector<MenuComponent*>::iterator iter=menuComponents.begin();iter != menuComponents.end(); ++iter){
            MenuComponent* menuc = *iter;
            menuc->print();
        }
	}
};
