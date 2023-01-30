# include <iostream>
using  namespace std;
int main(){
    int current_num,old_num,nextnum;
    current_num = 1;
    old_num = 1;
    cout<<old_num<<endl<<current_num<<endl;
    while(current_num < 100)
    {
    
    nextnum = current_num+old_num ; 
    
    cout<<nextnum<<endl;

    old_num=current_num;
    
    current_num=nextnum;
    }
    return 0;
}
