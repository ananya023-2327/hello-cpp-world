//program to understand bit manipulation, here, bitmasking (crypography and networking applications)
//set means turn switch to high, reset means turn switch to low
//this can be thought of as turning a specific digit on and off without interupting the rest of the digits in i
//i can be any binary number. bit_set takes input from the user as to which bit in the binary representation of i, here 20, is to be turned on
//similarly for bit_reset, except it 'turns off' the bit in question from i.

#include <iostream>
using namespace std;

int main() {
  int i = 20;
    int set,reset,bit_reset,bit_set;
    cout<<"bit_set:";
    cin>>bit_set;
    cout<<"bit_reset:";
    cin>>bit_reset;
    
    set= i|(1<<bit_set);
    cout<<set<<endl;
    reset = i&(~(1<<bit_reset));
    cout<<reset<<endl;
    
    cout<<"\nthe set number is\n"<<set;
    cout<<"\nthe reset number is\n"<<reset;
    return 0;
    
    
}
