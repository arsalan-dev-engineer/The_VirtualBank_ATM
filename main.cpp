# include <iostream>
# include <string>
using namespace std;

// menu function
void menu(){
    // menu
    cout << endl << "------ VirtualBank ATM -----------------------------------" << endl << endl;
    
    cout << "Welcome to your VirtualBank ATM" << endl;
    cout << "\t1. Show Total Balance" << endl;
    cout << "\t2. Deposit Money" << endl;
    cout << "\t3. Withdraw Money" << endl;
    cout << "\t4. Exit ATM" << endl;

    cout << endl << "------ VirtualBank ATM -----------------------------------" << endl << endl;
}

// main function
int main(){
    double balance = 0;
    int choice;
    do {
    // call menu function
    menu();
    cout << "Enter your choice: ";
    // user can choose an option shown in menu function
    cin >> choice;
    // command clears console
    system("cls");
    
    // switch will allow user to select the following case
    switch(choice){
        case 1:
            // case 1 shows total balance
            cout << "Total Balance:" << " $ " << balance << endl;
            break;

        case 2:
            // case 2 lets user put money into account
            cout << "Deposit Amount: $ ";
            double deposit_ttl;
            cin >> deposit_ttl;
            balance += deposit_ttl;
            break;

        case 3:
            // case 3 lets user take money out of account
            cout << "Withdray Amount: $ ";
            float withdraw_ttl;
            cin >> withdraw_ttl;
            // condition
            if (withdraw_ttl <= balance){
                balance -= withdraw_ttl;
            } else {
                cout << "Unable to complete Withdraw" << endl;
            break;
            }
        }
    // if 4 selected, system will exit
    } while (choice != 4);
        cout << "Exiting ATM, Goodbye!" << endl << endl;
}
