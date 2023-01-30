#include <iostream>
using namespace std;
int fact(int number){
    if(number==0){
        return 1;
    }
    else{
        return (number*fact(number-1) );
    }
}
int main(){
    int number;
    cout<<"Enter a number to find it's factorial \n";
    cin>>number;
    cout<<"The factorial of "<<number<< " is "<<fact(number);
    return 0;
}