#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch;
    string vowel = "AaEeIiOoUu";
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if (vowel.find(ch) != string::npos){
        printf("The entered character is a vowel");
    }
    else{
        printf("the entered character is a consonant");
    }
return 0;
}
//simple if else conditional to test for vowels in a string 
