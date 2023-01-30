#include <iostream>
using namespace std;
int main ()
{
    int row , j, num_row;
    num_row = 8;
    // i was asked for a program that will print out a chekerboard 8 x 8 grid
    cout<< "This program printes out a chekerboard 8 by 8 grid \n";
    cout<<"             ---------------------------\n";
    /* so what i used was a for loop to create row and colomn 
    j = colomn  
    The reason that i divided the row is that in chekerboard the blacks and whites flip side for two consecuative rows so i wanted to print out
    two different rows in one loop */
    for (row=1; row<=num_row/2; row++)
    {
        for( j=1; j<=num_row; j++)
        {
            if(j %2 != 0){
                cout<<"| black |";
                }
            else if( j % 2 == 0)
            {cout<<"| white |";}
        }
         cout<<"\n\n\n";
        for(j=1; j<=num_row; j++){
            if(j %2 != 0){
                cout<<"| white |";}
            else if(j % 2 == 0){
                cout<<"| black |";
            }    
        }
        cout<<"\n\n\n";
    }
    return 0;
}