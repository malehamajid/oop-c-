#include<iostream>
using namespace std;
class product{
	public:
		int ID,price;
		string name;
		product(int id, int Price, string n){
			ID=id;
			price=Price;
			name=n;
			cout<<"Enter your ID= ";
			cin>>ID;
			cout<<"Enter your name= ";
			cin>>name;
			cout<<"Enter the price= ";
			cin>>price;
			cout<<"-----original product"<<endl;
			cout<<"ID is= "<<ID<<endl;
			cout<<"name is= "<<name<<endl;
			cout<<"Price is= "<<price<<endl;
		}
		product(product &p){
        	ID=p.ID;
        	price=p.price;
        	name=p.name;
        	cout<<"-----copied product"<<endl;
        	cout<<"ID is= "<<ID<<endl;
			cout<<"name is= "<<name<<endl;
			cout<<"Price is= "<<price<<endl;
		}
};
        
		int main(){
			product p1(45,2000,"maleha");
			product p2(p1);
			return 0;
		}
