#include<iostream>
using namespace std;
class ABC {
	private:
	int x;
	public:
		void in(){
		cout<<"enter the value of x:\n";
		cin >> x;
		}
		void out(){
			cout<<"the value entered is:"<<x;
		}
};
int main(){
	ABC obj;
	obj.in();
	obj.out();
}

