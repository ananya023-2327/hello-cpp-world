
// performing logic gate operarions/ bitwise operations on input given by user

#include <iostream>
#include <bitset>
using namespace std;
int main() {
    const int p= 5, q=7;
    int AND, OR, XOR, NOT, LS, RS, binary;
    
    AND = p&q;
    OR = p|q;
    XOR = p^q;
    NOT = ~p;
    LS = q<<2;
    RS = q>>2;
    binary = bitset<8>(p);
    
  cout<<"int 5 in binary is: \n"<<binary;
  cout<<"AND operation: \n"<<AND;
  cout<<"\nOR operation: \n"<<OR;
  cout<<"\nXOR operation: \n"<<XOR;
  cout<<"\nNOT operation: \n"<<NOT;
  cout<<"\n Left Shift by 2: \n"<<LS;
  cout<<"\n Right Shift by 2: \n"<<RS;

    return 0;
}
