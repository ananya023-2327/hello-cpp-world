#include <iostream>
using namespace std;

int main() {
    float age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age; 
        } 
        else if (age < 0) { 
            throw age; 
        } 
        else {
            cout << "Accepted" << endl;
            
        }
    }
    catch (float age) {
        if (age < 0) {
            cout << "\nInvalid age"<<endl;
        } 
        else {
            cout << "\nYou are below 18" << endl; 
        }
    }

    return 0;
}

// the above program is a simple demonstration of try catch and throw statements
// try statement is use to enclose any conditionals that might throw an error
// throw statement is used to define a custom error
//catch statement is used to handle error generated in the try code block
    
