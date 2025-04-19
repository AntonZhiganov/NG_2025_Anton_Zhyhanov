#include <iostream>
using namespace std;

int main() {
    float anton = 9556, ivan = 2231, andrei = 2788, roma = 5443.3, rostik = 32.4, vika = 332.6, max = 277, alex = 3332.1, boris = 3322.9, mascha = 332;
    int account;
    int action;
    float number;
    float sum;
    float allMoney = anton + ivan + andrei + roma + rostik + vika + max + alex + boris + mascha;
    cout << "Select your bank account" << endl;
    cout << "1.Anton, 2.Ivan, 3.Andrei , 4.Roma, 5.Rostik , 6.Vika, 7.Max, 8.Alex, 9.Boris, 10.Mascha: " << endl;
    cin >> account;

    if(account == 1) {
        cout << "You are logged into Anton's account" << endl;
        sum = anton;
    }

    if(account == 2){
        cout << "You are logged into Ivan's account" << endl;
        sum = ivan;
    }

    if(account == 3) {
        cout << "You are logged into Andrei's account" << endl;
        sum = andrei;
    }

    if(account == 4){
        cout << "You are logged into Roma's account" << endl;
        sum = roma;
    }

    if(account == 5){
        cout << "You are logged into Rostik account" << endl;
        sum = rostik;
    }

    if(account == 6){
        cout << "You are logged into Vika's account" << endl;
        sum = vika;
    }

    if(account == 7){
        cout << "You are logged into Max's account" << endl;
        sum = max;
    }

    if(account == 8){
        cout << "You are logged into Alex's account" << endl;
        sum = alex;
    }
    if(account == 9){
        cout << "You are logged into Boris's account" << endl;
        sum = boris;
    }

    if(account == 10){
        cout << "You are logged into Mascha's account" << endl;
        sum = mascha;
    }

    if(account >= 11 || account <= 0) {
        cout << "Write a number from 1 to 10";
        return 1;
    }

    while (true) {
        cout << "What do you want to do?" << endl;
        cout << "1.withdraw money" << endl;
        cout << "2.put money" << endl;
        cout << "3.amount of money in the account" << endl;
        cout << "4.The amount of money in all accounts" << endl;
        cout << "5.Exit" << endl;
        cin >> action;

        if(action == 1){
            cout << "how much money do you want to withdraw?" << endl;
            cin >> number;
            if(number > sum)
                cout << "insufficient funds!" << endl;
            else {
                sum = sum - number;
                allMoney = allMoney - number;
                cout << sum << endl;
            }
        }

        if(action == 2){
            cout << "how much money do you want to put into the account?" << endl;
            cin >> number;
            sum = sum + number;
            allMoney = allMoney + number;
            cout << sum << endl;
        }

        if(action == 3){
            cout << "on your account: " << endl;
            cout << sum << endl;
        }

        if(action == 4){
            cout << "On all bank accounts in total: " << endl;
            cout << allMoney << endl;
        }

        if(action == 5){
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        else {
            cout << "Invalid action, try again!" << endl;
        }
    }

    return 0;
}
