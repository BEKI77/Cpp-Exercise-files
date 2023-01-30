/*
Exercise 13-4: Define a class that will hold the set of integers from 0 to 31. An element can be
set with the set member function and cleared with the clear member function. It is not an
error to set an element that's already set or clear an element that's already clear. The function
test is used to tell whether an element is set.

Member functions:
void small_set::set(int item); // Set an element in the set
void small_set::clear(int item); // Clear an element in the set
int small_set::test(int item); // See whether an element is set

Sample usage:
small_set a_set;
a_set.set(3); // Set contains [3]
a_set.set(5); // Set contains [3,5]
a_set.set(5); // Legal (set contains [3,5])
cout << a_set.test(3) << '\n'; // Prints "1"
cout << a_set.test(0) << '\n'; // Prints "0"
a_set.clear(5); // Set contains [3]
*/

#include <iostream>
const int set_value=31;
class small_set
{
  private:
    int count;
    int value[set_value];
  public:
  small_set(){count=0;}
  void set(int item);
  void clear(int item);
  int test(int item);
};
/*
This function is used to set the value and also it checkes whether the given item is already set or not.
*/
void small_set::set(int item)
{
  bool check=0;
  if(item<31&&item>0){
     for(int i=0; i<=count; i++){
      if(value[i]==item){
        check=1;
        break;}
     }
     
     if(check) { std::cout<<item<<" is already set\n"; }
     else{
      value[count]=item;
      count++;
     }
  }
}
/*
THis functon clears the passed item from the set.
*/
void small_set::clear(int item){
  for(int i=0;i<set_value;i++){
    if(value[i]==item)
    value[i]=0;
  }
  
}

/*This function is used to check if the given item is set or not....*/

int small_set::test(int item){
  int checker=0;
    for(int i=0; i<set_value;i++)
      {
        if(value[i]==item){
          checker=1;
          break;
        }
      }
    return checker;
}

main(){

   small_set a_set;
  
a_set.set(3); // Set contains [3]
a_set.set(5); // Set contains [3,5]
a_set.set(5); // Legal (set contains [3,5])
std::cout<< a_set.test(3) << '\n'; // Prints "1"
std::cout<< a_set.test(4) << '\n'; // Prints "0"
std::cout<< a_set.test(0) << '\n'; // Prints "0"
a_set.clear(5); // Set contains [3]



}








