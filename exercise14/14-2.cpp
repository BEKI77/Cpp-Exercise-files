/* You are asked to write a booking program for the veterinarian: Dr. Able Smith,
PHD (Pigs, Horses, Dogs). Define a class type for each animal. Each class should keep track
of the number of animals that have been defined using that class in a private static variable.
Define a function that returns the total number of animals (all three types combined).
*/

#include <iostream>
using std::cout;
using std::endl;
// creating a class type for Dog
class DOG{
    private:
    static int count;
    public:
    DOG(){
count++;
    }
    static int checker(){
       return count;
    }
};
int DOG::count=0;
// creating a class type for pig
class PIG{
    private:
    static int count;
    public:
    PIG(){
count++;
    }
    static int checker(){
       return count;
    }
};
int PIG::count=0;
//creating a class type of HORSES
class HORSES{
    private:
    static int count;
    public:
    HORSES(){
count++;
    }
    static int checker(){
       return count;
    }
};
int HORSES::count=0;

// the main func
main(){
    DOG A;
    DOG B;
    PIG C;
    PIG D;
    HORSES E;
    HORSES F;

    int tot_numof_animals= A.checker()+C.checker()+E.checker();

    cout<<"The total number of animals = "<<tot_numof_animals;
}