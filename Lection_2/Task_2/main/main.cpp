#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int numbers[size];

    for (int index = 0; index < size; index++) {
        cin >> numbers[index];
    }

    int max = numbers[0];
    for (int index = 1; index < size; index++) {
        if (numbers[index] > max) {
            max = numbers[index];
        }
    }

    for (int row = max; row > 0; row--) {
        for (int col = 0; col < size; col++) {
            if (numbers[col] >= row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
