/*
Exercise 13-1: Write a parity class. This class allows the program to put any number of items
into it and returns TRUE if an even number of items is put in and FALSE if an odd number is
used.
Member functions:
void parity::put(void); // Count another element
int parity::test(void); // Return TRUE(1) if an even number of puts have been done. Return FALSE(O)
*/


#include <iostream>
class parity
{
    private:
       int count;
    public:
    parity()
    {
        count=0;
    }
    void put(void);
    int test(void);
};

inline void parity::put(void)
{
        count++;
}
inline int parity::test(void)
{
    if(count % 2==0)
    return 1;
    else
    return 0;
}
int main()
{
   int num_item;

   parity a_parity; 

   a_parity.put();
   std::cout<<"This should print out '0' \n"<<a_parity.test()<<std::endl;
   a_parity.put();
   a_parity.put();
   a_parity.put();
   std::cout<<"This should print out '1' \n"<<a_parity.test();

return 0;
}