#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string line;

    cout << "Enter line: ";
    getline(cin, line);

    regex word(R"([A-Za-z]+)");
    sregex_iterator it(line.begin(), line.end(), word);
    sregex_iterator end;

    int wordCount = distance(it, end);

    cout << "There are " << wordCount << " words in this line."<< endl;

    return 0;
}
