#include<iostream>
#include<math.h>
using namespace std;


int reverse_digits(int num) {
    if (num < 10) {
        return num;
    } else {
        return (num % 10) * pow(10, std::to_string(num).length() - 1) + reverse_digits(num / 10);
    }
}

int main() {
    int num;
   cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed digits: " << reverse_digits(num) << endl;
    return 0;
}