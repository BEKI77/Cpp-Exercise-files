#include<iostream>
/*
This is the data structure to handel the flight information for each flight......
*/
struct airline_reservation
{
    int flight_num;
    std::string originating_airportcode; 
    std::string destination_airportcode; 
    std::string departure_time;
    std::string arrival_time;
};

int main(){
   int totnum_flight=20;
   std::string airport1,airport2;
   /*
   the flight information for each flight....
   */
 struct airline_reservation reservation[totnum_flight] ={
    {3269,"CLE","BOS","20:10:11","20:10:11"},
    {4189,"BOS","CLE","20:10:11","20:10:11"},
    {603,"JFK","ORD","20:10:11","20:10:11"},
    {900,"CLE","MDE","20:10:11","20:10:11"},
    {1337,"BOS","ORD","20:10:11","20:10:11"},
    {9027,"CLE","SJC","20:10:11","20:10:11"},
    {6167,"CLE","MSP","20:10:11","20:10:11"}
   };
std::cout<<"Enter the two airport codes to find the flights between them: \n"<<"Enter the first airport code: ";
//the user enters the first airpot code in string..
std::getline(std::cin,airport1);
std::cout<<"Enter the second airport: ";
//the user enters the second airport code in string....
std::getline(std::cin,airport2);
// debaging line    std::cout<<airport1<<"  "<<airport2 <<'\n';
for(int i=0; i<totnum_flight;i++){
    // 
    if(reservation[i].originating_airportcode==airport1 || reservation[i].originating_airportcode==airport2){
        if(reservation[i].destination_airportcode==airport1||reservation[i].destination_airportcode==airport2)
         std::cout<<reservation[i].flight_num<<std::endl;
       }
       }

return 0;
}
