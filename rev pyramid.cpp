#include<iostream>
using namespace std;
int main() {
    int i, j;
    for (i = 5; i > 0; i--) {
        for (j = 0; j < i; j++) {
            cout << "%d", &i;
        }
        cout << endl;
    }
}
//to print a reverse number pyramid using nested for loops
