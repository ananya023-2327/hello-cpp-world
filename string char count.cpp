#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    char targetChar;
    int count = 0;
    cout << "Enter a string: ";
    getline(cin, text);
    cout << "Enter the character to count: ";
    cin >> targetChar;
    for (char c : text) {
        if (c == targetChar) {
            count++;
        }
    }
    cout << "The character '" << targetChar << "' appears " << count << " times in the string." << endl;
    return 0;
}
