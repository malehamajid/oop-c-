#include<iostream>
using namespace std;
class triangle{
	public:
	float a,b,c;
	void display(float x, float y , float z){
		a=x;
		b=y;
		c=z;
	cout<<" value of a= "<<a<<endl;
	cout<<" value of b= "<<b<<endl;
	cout<<" value of c= "<<c<<endl;
	
	}
}; 
void calculatePerimeter(triangle t){
	float p;
	p=t.a+t.b+t.c;
	cout<<"perimeter of triangle= "<<p<<endl;
}
int main(){
	triangle t1;
	t1.display(12,13,14);
	calculatePerimeter(t1);
	return 0;
}
