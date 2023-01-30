#include <iostream>
#define SQR(x) ((x * x))
// we could also write this macr as SQR(x) ((x)*(x))
// this is the more efficent way....
main()
{
int counter; // Counter for the loop
for(counter = 0; counter < 5; ++counter){
std::cout<< "x " << counter + 1 <<" x squared " << SQR((counter ++)) << '\n';}

return (0);
}