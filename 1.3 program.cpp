#include<iostream>
using namespace std;
class check {
	private:
	int n;
	public:
		void in(){
		cout<<"enter any number:\n";
		cin >> n;
		}
		void out(){
			if(n%2==0){
			cout<< "even";}
			else
			cout<<"odd";
		}
};
int main(){
	check obj;
	obj.in();
	obj.out();
}

