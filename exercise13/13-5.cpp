/*
|==========================================================================================================|     
|Exercise 13-5: I have a simple method of learning foreign vocabulary words. I write the                   |                                                                                   
|words down on a list of flash cards. I then go through the stack of flashcards one at a time.             |
|If I get a word right, that card is discarded. If I get it wrong, the card goes to the back of the stack. |                                                                                                    
|Write a class to implement this system.                                                                   |                                   
|Member functions:                                                                                         |             
|struct single_card {                                                                                      |                
|char question[40]; // English version of the word                                                         |                                             
|char answer[40]; // Other language version of the word                                                    |                                                  
|};                                                                                                        |  
|// Constructor -- takes a list of cards to                                                                | 
|// initialize the flash card stack                                                                        |                              
|void flash_card::flash_card(single_card list[]);                                                          |                                            
|// Get the next card                                                                                      |                
|const single_card &flash_card::get_card(void);                                                            |                                          
|//The student got the current card right                                                                  |                                    
|void flash_card::right(void);                                                                             |                         
|// The student got the current card wrong                                                                 |
|void flash_card::wrong(void);                                                                             |
|//Returns 1 -- done / 0 -- more to do                                                                     | 
|int done(void);                                                                                           |  
|==========================================================================================================|
*/
#include <iostream>
using std::string;
int totnumof_flashcard=6;
 struct single_card{
         string eng_word;  // to store the vocabiliary word....
         string syn_word;  // to store the synonyem word... 
       };

class flashcard
{
   private:
       int count;
       single_card Thecard[6];
   public:
    flashcard(single_card list[6]);
    ~flashcard()
    {
      std::cout<<"END!";
    }
     const single_card get_card();
     void right();
     void wrong();
     int done();     
};
// Below the constructor of the flashcard is initialized.
flashcard::flashcard(single_card list[6])
{
    for(int i=0; i<totnumof_flashcard; i++)
        {
        Thecard[i]=list[i];
        }
   count=0;
}
//get_card gives the value of "Thecard" to the "holder" in the main fuction...
const single_card flashcard::get_card()
{ 
  return Thecard[count];  
}
// if the answer is right then the card is going to be discarded.
void flashcard::right()
{
  std::cout<<"Your answer is correct!! \n";

  for(int i=count;i<totnumof_flashcard-1;i++)
  {
    Thecard[i]=Thecard[i+1];
  }
  count--; // sorry for this messey code i was frustrated by the fuction that's why i didn't write a better code here
  count++; // for Thecard to store the next number in the right place the position need to be exactly the same. And again i'm really sorry. 
  totnumof_flashcard--;
  
}
// the wrong fuction is simple it just addes the count or the position to be stored in the "Thecard".
void flashcard::wrong()
{
  std::cout<<"Your answer is incorrect!!\n"; 
   count++;
}
// the done fuction is used to tell the user that wheather he all the answerd right and or what questions he did not answer right..

int flashcard::done()
{
  if(totnumof_flashcard!=0)
  {
  for(int i=0; i<totnumof_flashcard; i++)
  {
     std::cout<<"The cards that you didn't answer\n";
     std::cout<<Thecard[i].eng_word<<" is "<<Thecard[i].syn_word<<std::endl;
  }
  return 0;
  }

  else
  {
    std::cout<<"well done!!\n";
  return 1;
  }
}

main()
{
   string word; // word is used to hold the users answer.
   struct single_card holder[6];  //The holder is created to hold the value of "Thecard" to compare the with the "word".
   struct single_card beki[6]=  //This is the data structure for the "flashcard" class.
    {
       {"stipulate","require"},
       {"fetish","obsession"},
       {"ouvre","plans"},
       {"secular","nonreligious"},
       {"esteem","knowledge"},
       {"beki","beki"}
    };

  flashcard test1(beki); //In here we created the object "test1" of the class type "flashcard" .

// std::cout<<holder[0].eng_word<<holder[1].eng_word;

for(int i=0;i<6;i++)
{
  holder[i]=test1.get_card(); //I assigned each value of the card to the "holder" in each iteration

  std::cout<<"The "<<i<<" card is "<<holder[i].eng_word<<"\nEnter the synonyem word: \n"<<std::endl;

  std::getline(std::cin,word);   // here we accept the users input to compare with the holder value in each iteration.

   if(word==holder[i].syn_word)  //if the users answer is correct the right function is called if not the wrong function is called.
      test1.right();
   else
     test1.wrong();
  
 std::cout<<"\n--------------------------\n";

}
  
 std::cout<<test1.done();  // In here we call the test fuction to check weather the user answered all the questions right or wrong....

 }
