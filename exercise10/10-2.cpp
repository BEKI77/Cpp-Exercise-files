#include<iostream>
#define CHECK(x) if(x % 10==0){std::cout<<"true";} else{std::cout<<"false";} 
int main(){
    std::cout<<"enter a number";
    int x;
    std::cin>>x;
    std::cout<<x<<" is divisible by 10 \n";
    CHECK(x);
    

return 0;
}