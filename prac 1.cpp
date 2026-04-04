#include<iostream>
using namespace std;
class circle{
	public:
	float radius;
	void display(float r){
		radius=r;
	}
};
 void area(circle c){
 	int area= (3.140000)*(c.radius*c.radius);
 	cout<<"radius is="<<c.radius<<endl;
 	cout<<"the area of circle is= "<<area;
 }
 int main(){
 	circle c1;
 	c1.display(56.5);
 	area(c1);
 	return 0;
 }
