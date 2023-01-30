#include <iostream>

struct mailing_list{
    std::string name; //firstname,lastname
    std::string address1;
    std::string address2;
    std::string city;
    std::string state;
    long int zip_code;
};
main(){
    int i,mail_num;
    
    std::cout<<"This program is designed to handle the data structure of a mailing list\n"<<"Enter the total number of mails: \n";
   std::cin>>mail_num;    

   struct mailing_list list[mail_num];
   for(i=0;i<mail_num;i++){
    std::cout<<"Enter name: ";
    std::getline(std::cin,list[i].name);// the reason i write this line twice is because evertime it runs the first time it jumpes the getline commande
    //there might be another reason to this i'm going to find out...
    std::getline(std::cin,list[i].name);
    std::cout<<"Enter address1: ";
    std::getline(std::cin,list[i].address1);
    std::cout<<"Enter address2: ";
    std::getline(std::cin,list[i].address2);
    std::cout<<"Enter city: ";
    std::getline(std::cin,list[i].city);
    std::cout<<"Enter state: ";
    std::getline(std::cin,list[i].state);
    std::cout<<"Enter zipcode: ";
    std::cin>>list[i].zip_code;
    std::cout<<"--------------------------------\n";
    }
   

for(i=0;i<mail_num;i++){
std::cout<<"Name: "<<list[i].name<<std::endl;
std::cout<<"Address1: "<<list[i].address1<<std::endl;
std::cout<<"Address2: "<<list[i].address2<<std::endl;
std::cout<<"City: "<<list[i].city<<std::endl;
std::cout<<"State: "<<list[i].state<<std::endl;
std::cout<<"zipcode: "<<list[i].zip_code<<std::endl;
std::cout<<"----------------------------\n";}
   }



