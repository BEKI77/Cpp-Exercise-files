#include<iostream>
#define is_digit(x) if(x>= 0){std::cout<<"true it is!!\n";} else std::cout<<"false it's not!!\n";
#define is_hex(x) if
int main(){
    int x,h=0*x;
    std::cout<<"enter the number\n";
    std::cin>>x;
    std::cout<<x<<" is a decimal number? \n ";
    is_digit(x);
    std::cout<<x<<" is a hex";

    return 0;
}