/*
5. Program: Class for Book Information
Statement: Create a class Book with members for title and author. Create multiple objects to store and show data.
*/
#include <iostream>
using namespace std;
class Book ;
void display(Book&b);
 
class Book {
public:
    string title;
    string author;

   friend void display(Book&b);
};
 void display(Book&b){
        cout << "Title: " << b.title << ", Author: " << b.author << endl;
    }
int main() {
    Book b1, b2;
    b1.title = "1984";
    b1.author = "George Orwell";

    b2.title = "To Kill a Mockingbird";
    b2.author = "Harper Lee";

    display(b1);
    display(b2);
    return 0;
}

