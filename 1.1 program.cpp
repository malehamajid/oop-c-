#include "iostream"
using namespace std;
class student {
	private:
	int roll_no;
	public:
		void in(){
		cout<<"enter the roll no:\n";
		cin >> roll_no;
		}
		void out(){
			cout<<"the roll no entered is:"<<roll_no;
		}
};
int main(){
	student obj;
	obj.in();
	obj.out();
}

