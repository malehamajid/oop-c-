/*
4. Program: Simple Bank Account Class
Statement: Define a class BankAccount with account holder’s name and balance. Show account details using a method.
*/

#include <iostream>
using namespace std;
class BankAccount ;
void displayDetails(BankAccount&b );
 
class BankAccount {
public:
    string holderName;
    double balance;
    friend void displayDetails();
};
 void displayDetails(BankAccount&b ){
        cout << "Account Holder: " << b.holderName << endl;
        cout << "Balance: $" << b.balance << endl;
    }
int main() {
    BankAccount acc1;
    acc1.holderName = "John Doe";
    acc1.balance = 1500.75;

    displayDetails(acc1);
    return 0;
}

