#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    const int numUsers = 11;
    string names[numUsers];
    float balances[numUsers];

    for (int userCount = 0; userCount < numUsers; ++userCount) {
        names[userCount] = "User" + to_string(userCount + 1);
        balances[userCount] = 11 + userCount * 10;
    }

    int account;
    int action;
    float number;

    cout << "Select your bank account (1-" << numUsers << "): ";
    cin >> account;

    if (account < 1 || account > numUsers) {
        cout << "Invalid account number!" << endl;
        return 1;
        }

    int index = account - 1;
    cout << "You are logged into " << names[index] << "'s account." << endl;

    while (true) {
        cout << "\nWhat do you want to do?" << endl;
        cout << "1. Withdraw money" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Check account balance" << endl;
        cout << "4. Total money in all accounts" << endl;
        cout << "5. Exit" << endl;
        cin >> action;

        if (action == 1) {
            cout << "How much money do you want to withdraw? ";
            cin >> number;

            if (number > balances[index])
                cout << "Insufficient funds!" << endl;

            else {
                balances[index] -= number;
                cout << "New balance: " << fixed << setprecision(2) << balances[index] << endl;
            }
        }

        else if (action == 2) {
            cout << "How much money do you want to deposit? ";
            cin >> number;
            balances[index] += number;
            cout << "New balance: " << fixed << setprecision(2) << balances[index] << endl;
        }

        else if (action == 3) {
            cout << "Your account balance: " << fixed << setprecision(2) << balances[index] << endl;
        }

        else if (action == 4) {
            float total = 0;
            for (int i = 0; i < numUsers; ++i)
                total += balances[i];
            cout << "Total money in all accounts: " << fixed << setprecision(2) << total << endl;
        }

        else if (action == 5) {
            cout << "Exit" << endl;
            break;
        }

        else {
            cout << "Invalid action, try again!" << endl;
        }
    }

    return 0;
}
