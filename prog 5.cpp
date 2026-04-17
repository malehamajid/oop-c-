/*
5. Program: Class for Book Information
Statement: Create a class Book with members for title and author. Create multiple objects to store and show data.
*/
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;

   void display();
};
 void Book::display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
int main() {
    Book b1, b2;
    b1.title = "1984";
    b1.author = "George Orwell";

    b2.title = "To Kill a Mockingbird";
    b2.author = "Harper Lee";

    b1.display();
    b2.display();
    return 0;
}

