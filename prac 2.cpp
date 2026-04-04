#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int marks;
		void display(string n , int m){
		 name=n;
		 marks=m;
		 cout<<"Enter your name= "<<endl;
		 cin>>name;
		 cout<<"Enter marks= "<<endl;
		 cin>>marks;
		 cout<<"Name= "<<name<<endl;
		 cout<<"marks= "<<marks<<endl;
		}
		
};
void stu(student s, student t){
	if(s.marks>t.marks){
		cout<<"-----highest marks"<<endl;
		cout<<s.name<<" has "<<s.marks<<" marks";
	}
	else{
		cout<<t.name<<" has "<<t.marks<<" marks";
	}
}
int main(){
	student s1,t1;
	s1.display("ahmad",80);
	cout<<"------2nd student record"<<endl;
	t1.display("ali",77);
	stu(s1,t1);
}
