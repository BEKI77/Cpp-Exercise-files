/*
Exercise 13-2: Write a "checkbook" class. You put a list of numbers into this class and get a total out.
Member functions:
void check::add_item(int amount); // Add a new entry to the checkbook
int check::total(void); // Return the total of all items
*/
#include<iostream>
class checkbook
{
private:
    int count;
    int amount[15];
public:
checkbook() {count=0;}

// puts an item in the list
void put(int a_mount);

// printes out the total amount of the list
int total(void);

};

void checkbook::put(int a_mount)
{
    amount[count]=a_mount;
    count ++;   
}

// 
int checkbook::total(void)
{
    int tot=0;
    for(int i=0; i<count; i++)
    {
        tot+=amount[i];
    }
return tot;
}

int main()
{
    checkbook cbook1;
    cbook1.put(10);
    // This should print out 10
    std::cout<<"The total : "<<cbook1.total()<<std::endl;
    cbook1.put(11);
    // And this should print out 21
    std::cout<<"The total : "<<cbook1.total()<<std::endl;

 return 0;   
}