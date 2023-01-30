#include<iostream>
#define SWAP void swap(int y, int x)\
{\
y= y+x;\
x=y-x;\
y=y-x;\
std::cout<<"The swaped value of y = "<<y<<std::endl<<"The swaped value of x = "<<x;\
return;\
}
#define call(y,x) swap(y,x);
SWAP
int main(){
    int y,x;
    std::cout<<"Enter the value of y\n";
    std::cin>>y;
    std::cout<<"Enter the value of x\n";
    std::cin>>x;
    call(y,x)
    return 0;
}