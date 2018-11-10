#include <stdio.h>
#include <iostream>
#include "CaffeineBeverageWithHook.h"
using namespace std;
class TeaWithHook:public CaffeineBeverageWithHook
{
public:
    void brew(){
        cout<<"Steeping the tea"<<endl;
    }
    void addCondiments(){
        cout<<"Adding Lemon"<<endl;
    }
    bool customerWantsCondiments()
    {
		string answer = getUserInput();
		if (answer[0]=='y') {
			return true;
		} else {
			return false;
		}
    }
    string getUserInput() {
		string answer;
		cout<<"Would you like milk and sugar with your coffee (y/n)? "<<endl;
        cin>>answer;
		return answer;
	}
};


