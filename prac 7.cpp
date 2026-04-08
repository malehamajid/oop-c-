#include<iostream>
using namespace std;
class employee{
	public:
		string name;
		int salary,YOF;
		void display(string n, int s, int y){
			name=n;
			salary=s;
			YOF=y;
			cout<<"Enter employee name= ";
			cin>>name;
			cout<<"Enter employee salary= ";
			cin>>salary;
			cout<<"Enter employee years_of_service= ";
			cin>>YOF;
			cout<<"Employee name is= "<<name<<endl;
			cout<<"Employee salary is= "<<salary<<endl;
			cout<<"Employee years_of_service is= "<<YOF<<endl;
		}
		float calculateBonus() {
        if (YOF >= 5)
            return salary * 0.10;
        else
            return salary * 0.05;
    }
};
    void bonus(employee e, employee m){
    	float bonus1 = e.calculateBonus();
    float bonus2 = m.calculateBonus();

    if (bonus1 > bonus2) {
        cout << e.name << " got salary with bonus = " << (e.salary + bonus1) << endl;
    } else {
        cout << m.name << " got salary with bonus = " << (m.salary + bonus2) << endl;
    }
		
	}
	int main(){
		employee e1,e2;
		cout<<"-----1st employee record"<<endl;
		e1.display("maleha",4500,3);
		cout<<"-----1st employee record"<<endl;
		e2.display("eman",5000,4);
		bonus(e1,e2);
	}
