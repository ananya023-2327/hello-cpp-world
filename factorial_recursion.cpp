#include<iostream>
using namespace std;
int fact (int x){
    if (x<=1){
        return 1;
    }
    else return x*fact(x-1);
}
int main(){
    int x;
    cout<<"Enter a positive integer: ";
    cin>>x;
    cout<<"the factorial is: ";
    fact(x);
}