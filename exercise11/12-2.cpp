#include<iostream>
/*
This is the data structure that can handel the date.......
*/
struct date_time{
int year;
int month;
int day;
int hour;
int minute;
};
/*
This is the fuction that i used to turn every year, month, day and houre into minute
*/
int minute_conv(char a, int numdate){
    int min_val=0;
    switch(a){
        case 'y':
        min_val=525600*numdate;
        break;
        case 'm':
        min_val=43800*numdate;
        break;
        case 'd':
        min_val=1440*numdate;
        break;
        case 'h':
        min_val=60*numdate;
          }
          return min_val;
}
/*
The main fuction for the program.....
*/
int main(){
    int num=2;
    struct date_time date[num];
    for(int i=0; i<num;i++){
    std::cout<<"Enter a date \n";
    std::cout<<"Year: ";
    std::cin>>date[i].year;
    std::cout<<"Month: ";
    std::cin>>date[i].month;
    std::cout<<"Day: ";
    std::cin>>date[i].day; 
    std::cout<<"Hour(24hr format): ";
    std::cin>>date[i].hour;
   std::cout<<"Minute: ";
    std::cin>>date[i].minute; 
    std::cout<<"------------------ \n";
    }
    int difference(date_time date[]);
    std::cout<<"The difference between the two dates in minute : "<<difference(date)<<"min"<<std::endl<<"The difference in hour: "<<float(difference(date)/60)<<"hr";

}
/*
This is the function to calculate the difference between the two dates.........
*/
int difference(date_time date[]){
     int fdate_min,sdate_min,diff_inmin;
     fdate_min=minute_conv('y',date[0].year)+minute_conv('m',date[0].month)+minute_conv('d',date[0].day)+minute_conv('h',date[0].hour)+date[0].minute;
     sdate_min=minute_conv('y',date[1].year)+minute_conv('m',date[1].month)+minute_conv('d',date[1].day)+minute_conv('h',date[1].hour)+date[1].minute;
   diff_inmin= sdate_min - fdate_min;
return diff_inmin;   
}