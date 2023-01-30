#include <iostream>
main(){
    int tot_num,amount[tot_num];
   
    std::cout<<"Enter the total number items in the list \n";
    std::cin>>tot_num;
    std::cout<<"Enter a list of numbers in the console \n";
  for(int i=0; i<tot_num; i++){
       
        std::cin>>amount[i];
        if(amount[i]==0)
        break;
     tot_num++;   
  }
for(int i=0; i<tot_num;i++){
    std::cout<<i<<" mapped to "<<amount[i]<<std::endl;
}
      
    }

