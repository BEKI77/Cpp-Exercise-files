#include <iostream>

 using namespace std;

 int main()
  {
    int start,end;
    cout<<"Enter the first number "<<endl;
    cin>>start;
    cout<<"Enter the secound number "<<endl;
    cin>>end;
    
    int sum=0 , dif =0 ,prod=0;
    for(int i=start; i<=end; i++){
        sum+=i;
        prod*=i;
        if ( i==start){
            dif=start;
        }
        else{
            dif-=i;
        }
        
    } 
 cout<<"The sum of the range of numbers is "<<sum<<endl<<"The differenc of the range of numbers is "<<dif<<endl<<"The product is "<<prod<<endl;
 

    return 0;
}