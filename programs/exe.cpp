#include <iostream>
using namespace std;
int total; // Running total of all numbers so far
int item; // next item to add to the list
int minus_items; // number of negative items
/* This is a program writen to add or substract the total of the dive consucative numbers... */
main ()
{
total = 0;
minus_items = 0;
while (1) {
cout<< "Enter # to add"<< " or 0 to stop:\n";

cin >> item;    

if (item == 0)
break;

if (item < 0) {
++minus_items;
continue;
}

total += item;

cout << "Total: " << total << '\n';

}
cout << "Final total " << total << '\n';
cout << "with" << minus_items << " negative items omitted\n";
return (0);
}