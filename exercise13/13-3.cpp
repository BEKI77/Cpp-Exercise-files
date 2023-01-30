#include <iostream>
const int queue_sixe=90;
class queue{
     private: 
     int count,i=0;
     int value[queue_sixe];
     public:
     queue(){
        count=0;
        
     }
     void put(int item);
     int get(void);
};

void queue::put(int item){
    value[count]=item;
    count++;
}
int queue::get(){
    count --;
    i++;
     return value[i-1];
     
}

main(){
    queue test1;
   for(int i=0;i<12;i++){
    test1.put(i);
   }
   for(int i=0; i<12;i++){
    std::cout<<test1.get()<<std::endl;
   }
}