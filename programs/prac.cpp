#include <iostream>
using namespace std;
int grade;
main()
{
   cout<<"Enter the grade \n";
   cin>>grade;
   if(grade<=60)
   cout<<"F\n";
   else if (grade >= 61 && grade <= 70){
    if ( grade>=61 && grade<= 63)
    cout<<"D-\n";
    else if(grade >= 68 && grade <=70)
    cout<<"D+";       
   else
    cout<<"D\n";
   }
   
   else if (grade >= 71 && grade <=80){
     if( grade >=71 && grade<= 73)
     cout<<"C-\n";
     else if(grade >= 78 && grade <= 80)
     cout<<"C+";
     else
     cout<<"C\n";
   }
   
   else if (grade >= 81 && grade <= 90){
    if(grade >= 81 && grade <= 83)
    cout<<"B-";
    else if (grade>= 88 && grade <= 90)
    cout<<"B+";
    else
    cout<<"B\n";
   }
   
   else if (grade >= 91 && grade <= 100){
    if (grade>=91 && grade <= 93)
    cout<<"A-";
    else if (grade>=98 && grade <=100)
    cout<<"A+";
    else
    cout<<"A\n";
  }
else
cout<<"You have entered a wrong value";   

    return 0;


}