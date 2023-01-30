/*Exercise 14-1: Two classes share a file. Other areas of the program need to know when this
file is busy. Create a function that returns 1 when the file is being used by either of these two
classes.*/
#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
//First we need to create two classes that share a commen file "integer".
class class1{
    private:
    static int count;
    // private members
    public:
    //public members
    std::ifstream file;
    void checker(){ //This checkes wheater the file exists or is being used or not..
        if(file)
        count++;
     }
    static int used();
    friend class class2;
};
int class1::used(){
    if (count>0)
    return 1;
    else
    return 0;
}
int class1::count=0;
class class2{
  private:
  //private members
  public:
  //public memebers
};

main(){
    {
        class1 one;
        one.file.open("./beki.txt",std::ios_base::in|std::ios_base::out);
        if(one.file.is_open()){
            cout<<"open success"<<endl;
        }
        else{
            cout<<"open faild"<<endl;
        }
        cout<<class1::used()<<endl;
    }
    cout<<class1::used();
   
}

