#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "example.txt";
    string line;
    ofstream outFile(filename, ios::out);
    if (outFile.is_open()) {
        outFile << "Hello, C++ File I/O!" << endl;
        outFile << "This is a second line." << endl;
        outFile << "Numbers: 123 456 789" << endl;
        outFile.close();
        cout << "Successfully wrote to " << filename << endl;
    } else {
        cerr << "Error: Could not open file " << filename << " for writing." << endl;
        return 1;
    }
    ifstream inFile(filename, ios::in);
    if (inFile.is_open()) {
        cout << "\nReading from " << filename << ":" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
        cout << "Successfully read from " << filename << endl;
    } else {
        cerr << "Error: Could not open file " << filename << " for reading." << endl;
        return 1;
    }
    return 0;
}
