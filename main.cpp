# include <iostream>
# include <string>
using namespace std;


void menu(){
    cout << endl << "------ VirtualBank ATM -----------------------------------" << endl << endl;
    
    cout << "Welcome to your VirtualBank ATM" << endl;
    cout << "\t1. Show Total Balance" << endl;
    cout << "\t2. Deposit Money" << endl;
    cout << "\t3. Withdraw Money" << endl;
    cout << "\t4. Exit ATM" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << endl << "------ VirtualBank ATM -----------------------------------" << endl << endl;
}

int main(){
    menu();
}
