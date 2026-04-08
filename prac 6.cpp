#include <iostream>
using namespace std;

class Book {
public:
    string title, author;

    Book(string t, string a) {
        title = t;
        author = a;
    }

    Book(Book &b) {
        title = b.title;
        author = b.author;
    }

    void display() {
        cout << "Title: " << title<<endl;
		cout << "Author: " << author << endl;
    }
};

int main() {
    Book b1("1984", "George Orwell");
    Book b2("Dune", "Frank Herbert");

    Book o1(b1); 
    Book o2(b2);  

    cout << "---Copied Books---" << endl;
    o1.display();
    o2.display();

    return 0;
}

