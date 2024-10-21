// == and != has less priority than relational operators as >, <, <=, >=

#include<iostream>
using namespace std;
int main(){
    int x;
    x = 5>8 ? 10: 1!=2<5 ? 20: 30; 
    /*Here 5 is samller than 8 therefore the code will go to the other
      ternary operator and execute it and there it will execute the 
      relational operator (2<5) as it has the higher priority and the 
      answer for it will be 1 and hence the relational operator of 
      (1 != 1) will become false and return 0
    */ 
   cout<<x;
}