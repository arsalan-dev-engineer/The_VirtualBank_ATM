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

    cout << endl << "------ VirtualBank ATM -----------------------------------" << endl << endl;
}

int main(){
    double balance = 0;
    int choice;
    do {
    menu();
    cout << "Enter your choice: ";
    // choice/options to navigate
    cin >> choice;
    // command clears console
    system("cls");
    
    switch(choice){
        case 1:
            cout << "Total Balance:" << " $ " << balance << endl;
            break;

        case 2:
            cout << "Deposit Amount: $ ";
            double deposit_ttl;
            cin >> deposit_ttl;
            balance += deposit_ttl;
            break;

        case 3:
            cout << "Withdray Amount: $ ";
            float withdraw_ttl;
            cin >> withdraw_ttl;
            if (withdraw_ttl <= balance){
                balance -= withdraw_ttl;
            } else {
                cout << "Unable to complete Withdraw" << endl;
            break;
            }
        }
    } while (choice != 4);
        cout << "Exiting ATM, Goodbye!" << endl << endl;
}
