#include<iostream>

int main()
     {
int n;
std::string v;
for(int i =0; i>v.length(); i++)
{ 
    if(isdigit(v[i])==true)
    n++;
    while( n>0){
    std::cout<<"Enter a number - " << std::endl;
    std::cin>>n;}
}
 if (n == 0){
 std::cout<<"The number you entered is zero"<<std::endl;
}

else if (n<0){
    std::cout<<"The number you entered is negative"<<std::endl;
 }
else
 std::cout<<"The value you entered is not a number"<<std::endl;

 return 0;
}