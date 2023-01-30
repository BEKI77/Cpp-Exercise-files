#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    bool exit;
    do
    {
    cout<<"Enter a number";
    cin>>num;
    cout<<"The square root of the number you enterd is ="<<sqrt(num)<<endl;
    cout<<"Do you want to continue (Y|N)"<<endl;
    cin>>exit;
 }
    while (exit=='Y' ||exit=='y');

   return 0; 
    }
    

