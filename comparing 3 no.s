#include<iostream>
using namespace std;
int main (){
    int a, b,c;
    cout<<"Enter values for the 3 integers"<<endl;
    cin>>a>>b>>c;
    if(a>b& a>c){
        printf("%d is the greatest number", a);
    }
    else if (b>a & b>c){
        printf("%d is the greatest number", b);
    }
    else{
        printf("%d is the greatest number", c);
    }
    return 0;
}