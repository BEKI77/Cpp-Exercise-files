#include <iostream>
#define func(y,x) swap(y,x);
#define SWAP void swap(int y,int x)\
{\
int z;\
z=y;\
y=x;\
x=z;\
std::cout<<"The swaped value of y = "<<y<<std::endl<<"The swaped value of x = "<<x<<std::endl;\
\
}

SWAP
int main(){
   
    int x,y;
    std::cout<<"Enter y\n";
    std::cin>>y;
    std::cout<<"Enter x\n";
    std::cin>>x;
    func(y,x);

    
    return 0;
}