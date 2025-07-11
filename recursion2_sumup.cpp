#include<iostream>
using namespace std;
int sumup (int n){
    if (n<=1){
        return 1;
    }
    else {
        return n+sumup(n-1);
    }
}
int main (){
    int n, ans;
    cout<<"enter a number: ";
    cin>>n;
    ans = sumup(n);
    cout<<"the sum of all numbers from 1 to entered number is: "<< ans;
}