#include<iostream>
using namespace std;
class person {
	private:
	int age;
	public:
		void in(){
		cout<<"enter your age =";
		cin >> age;
		}
		void out(){
			cout<<"the age entered is ="<<age;
		}
};
int main(){
	person obj;
	obj.in();
	obj.out();
}

