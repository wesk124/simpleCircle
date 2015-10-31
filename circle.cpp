#include <iostream>
#include "circle.h"
using namespace std;

const float PI = 3.14159;


Circle::Circle(float r)
{
    
	radius = &r;
}

float Circle::circumference()
{
    float temp_radius;
    temp_radius = *radius;
	return (2 * PI * temp_radius);
}


float Circle::area()
{
    float temp_radius;
    temp_radius = *radius;
    return (PI*temp_radius*temp_radius);
    
}
