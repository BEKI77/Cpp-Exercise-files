#include <iostream>
#include <cmath>
using namespace std;
float result,value;
char oper_char;
main(){
    result=0;
    while(1){
       cout<<"Enter the operator and the number: \n";
        cin>>oper_char;
        cin>>value;
        if(oper_char=='Q'||oper_char=='q' )
        break;
        else if (oper_char =='H' || oper_char == 'h'){
             cout<< " Allowed operations in this calculater are the following:\n";
             cout<< " '+'   addition \n"<<" '-'   subtraction \n "<<"'*'   multiplication \n"<<"  /   devision  \n ";
             break;}
       
        switch (oper_char) {
        case '+':   
           result += value;
           break;

        case '-':
           result -= value;
           break;

        case '*':
           result *= value;
           break;

        case '/':
            if (value==0){
            cout<< "ERROR value entered"<<value<<'\n';
            cout<< "operation ignored";}
             else
              result  /=  value;
             break;
           }
     cout<<"Result = "<<result<<'\n';       
      }
    return 0;
}