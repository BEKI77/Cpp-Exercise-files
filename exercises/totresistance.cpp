#include <iostream>
using namespace std;
/* I was asked for a program that could calculate the total resistance for parallel circute */
int main(){
    
    float i ,num_resistors, tot_resistance, R,RR;
    // num_resistors is the total number of resisters that are found the circute
    // tot_resistance is the total resistance
    // R means the resistance of each resistor
    // RR is the value of the total resistance befor it is reciprocated
    cout<<"Enter the total number of resistors:"<<endl;
    cin>>num_resistors;
    RR = 0;
    for( i=0;i<num_resistors;i++){
cout<<"Enter the value of each resistor"<<endl;
       cin>>R;
if(i == num_resistors){
cout<<"The total number of resistors is reached";
break;
}
else if(R == 'q' || R == 'Q'){
       break;}
else
RR += (1/R);
         }
         tot_resistance = 1/RR;
        
    cout<<"the total resistance = "<<tot_resistance;
    return 0;
}