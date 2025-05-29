#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char line[1000];

    cout << "Enter line: ";
    cin.getline(line, 1000);

    int wordCount = 0;
    bool inWord = false;

    for (int cHar = 0; line[cHar] != '\0'; ++cHar) {
        if (isalpha(line[cHar])) {
            if (!inWord) {
                inWord = true;
                ++wordCount;
            }
        } else {
            inWord = false;
        }
    }

    cout << "There are " << wordCount << " words in this line." << endl;

    return 0;
}
