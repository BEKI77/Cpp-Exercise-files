#include <iostream>
#include <vector>
//properties:
// 1.fast insert/remove at the begining and the end
// 2.slow insert/remove in the middle
// 3.slow search:

main(){
    std::vector<int> original{1,2};
    std::vector<int> copy=original;
    std::vector<int>& ref=original;

 original.push_back(3);
 copy.push_back(4);
 ref.push_back(5);
for(std::vector<int>::iterator itr=original.begin();itr!=original.end();++itr){
       std::cout<<*itr<<" ";
}
 std::cout<<std::endl;
for(std::vector<int>::iterator itr=copy.begin();itr!=copy.end();++itr)
{ 
 std::cout<<*itr<<" ";
}
std::cout<<std::endl;
for(std::vector<int>::iterator itr=ref.begin();itr!=ref.end();++itr){
    std::cout<<*itr<<" ";
}

}