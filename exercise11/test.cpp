#include<iostream>
bool evennum(int value){
    return ((value & 1)==0);
    // in here i used the bitwise operator to know if the number is odd or even
    // every even number in binary has 0 at the end so if compare it to 00001 it will be false
}

int main(){
    int value;
    std::cout<<"enter a number\n";
    std::cin>>value;
    if(evennum(value))
    std::cout<<"number "<<value<<" is even";
    else 
    std::cout<<"number "<<value<<" is odd";
    return 0;
}