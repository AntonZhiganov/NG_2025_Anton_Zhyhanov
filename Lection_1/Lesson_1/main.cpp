#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float num1;
    float num2;
    int action;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Calculator" << endl;
    cout << "Select action: " << endl;
    cout << "1-(+), 2-(-), 3-(*), 4-(/), 5-(degree), 6-(square root)" << endl;
    cin >> action;

    if (action == 1){
        cout << num1 + num2  << endl;
    }

    if (action == 2){
        cout << num1 - num2  << endl;
    }

    if (action == 3){
        cout << num1 * num2  << endl;
    }

    if (action == 4){
        cout << num1 / num2  << endl;
    }

    if (action == 5){
        cout << num1 * num1  << endl;
    }

    if (action == 6){
        cout << sqrt(num1)  << endl;
    }

    cout << "You have chosen the wrong action." << endl;

    return 0;
}
