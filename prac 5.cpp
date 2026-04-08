#include<iostream>
using namespace std;
class movie{
	public:
		string title,genre;
		float rating;
		movie(){
			cout<<"enter the title of movie= ";
			cin>>title;
			cout<<"enter genre of movie= ";
			cin>>genre;
			cout<<"enter the rating of movie= ";
			cin>>rating;
			cout<<"-----original"<<endl;
			cout<<"Title of movie is= "<<title<<endl;
			cout<<"genre of movie is= "<<genre<<endl;
			cout<<"rating of movie is= "<<rating<<endl;
		}
		movie(movie &m){
			title=m.title;
			genre=m.genre;
			rating=m.rating;
			cout<<"-----copied"<<endl;
			cout<<"Title of movie is= "<<title<<endl;
			cout<<"genre of movie is= "<<genre<<endl;
			cout<<"rating of movie is= "<<rating<<endl;
		}
};
int main(){
	movie m1;
	movie m2(m1);
}
