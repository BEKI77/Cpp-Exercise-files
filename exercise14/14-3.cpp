/*
Exercise 14-3: Write a class where each instance of the class can access a stack-not one stack
per instance, but one stack period. Any instance of the class can lock the stack for its own
exclusive use and unlock it later. Define member functions to perform the lock and unlock
functions.
As an added attraction, make the unlock function check to see that the current instance of the
class was the same instance that locked the stack in the first place.
*/

#include <iostream>
// this the stack class in which the lock and unlock functions are applied
class stack{
    private:
    int count;
    int items[60];
    int value;
    public:
    stack(void){
        count=0;
    }
    void push(int item){
        
        items[count]=item;
        count ++;
    }
    int pop(void){ 
        if(count>=0){
             count --;
             value=items[count];
        }
        else 
        std::cerr<<"can't go beyond this\n";
        return value;
    }
};

// This is the function that is going to hold the lock and unlock functions it also can access the "test" stack by push and pop methodes
class accstack{
    private:
    static stack test;
    bool flag;
    // other members of the class
    //
    public:
    accstack(){
        flag=false;    
    }
    void push(int item){
        if(flag==true)
        std::cerr<<"The stack is locked\n";
        else
         test.push(item);
       
    }
    int pop(void){
        if(flag==true){
        std::cerr<<"The stack is locked\n";
        return -1;
        }
        else
        return test.pop();     
    }
// when the lock function is declared the flag is flag will be true
    void lock(void){
       flag=true;
    }
    void unlock(void){
        flag=false;
    }
};
// declaring the static member function
stack accstack::test;

int main(){
     accstack test1;
     std::cout<<"first section\n";
     test1.push(30);
     std::cout<<test1.pop()<<std::endl; // this line should print out "30"

     std::cout<<"second section\n";
     test1.lock();
     test1.push(40); // this line should print out error message 
     std::cout<<test1.pop()<<std::endl; // 

     std::cout<<"third section\n";
     test1.unlock();
     test1.push(5);
     std::cout<<test1.pop()<<std::endl; //this line should print out "5"
    
    return 0;
}
 