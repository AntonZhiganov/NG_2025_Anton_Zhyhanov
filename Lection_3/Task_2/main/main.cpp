#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char ch) {
    string vowels = "aeiouy";
    return vowels.find(ch) != string::npos;
}

bool isLetter(char ch) {
    return isalpha(ch);
}

int main() {
    string text;

    cout << "Enter Text" << endl;
    getline(cin, text);

    int vowelCount = 0;
    int consonantCount = 0;

    for (char ch : text) {
        ch = tolower(ch);

        if (isLetter(ch)) {
            if (isVowel(ch))
                vowelCount++;
            else
                consonantCount++;
        }
    }

    int totalLetters = vowelCount + consonantCount;

    cout << "Total letters: " << totalLetters << endl;
    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;

    if (consonantCount > 0) {
        double ratio = static_cast<double>(vowelCount) / consonantCount * 100.0;
        cout << "Ratio of vowels to non-vowels: " << ratio << "%" << endl;
    } else if (vowelCount > 0) {
        cout << "The text contains only vowels." << endl;
    } else {
        cout << "Letters not found in text" << endl;
    }

    return 0;
}
