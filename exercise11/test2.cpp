#include <iostream>
// for each shape there is a different structure
struct circle{
    int radius;
};
struct triangle{
    int base;
    int hight;
};
struct rectangle{
    int width;
    int length;
};
// i gave a conest value for each shape but i don't know why i did that ?
const int shape_circle=0;
const int shape_triangle=1;
const int shape_rectangle=2;
// now the generic shape has two fields it's kind and a generic shape..

struct shape{
    int kind;
    // for the generic shape i created a union which it's type called shape_union cause at instance there can only be one shape....
    union shape_union{
        //the circle type has it's own variable called circle_data
        circle circle_data;
        //the triangle type has it's own variable called triangle_data
        triangle triangle_data;
        //the rectangle type has it's own variable called rectangle_data
        rectangle rectangle_data;
    }data;
};

main(){
    // in the main function the generic shape type has a variable a_shape
shape a_shape;
//which has fields kind and data
// data is also a variable which is assigned to the type (union shape_union) in which it has union fields 
// just take a moment and see it through.....
a_shape.kind = shape_circle;
a_shape.data.circle_data.radius=5;


std::cout<<"the radius of the circle is = "<<a_shape.data.circle_data.radius;
}
