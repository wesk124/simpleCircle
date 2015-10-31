#include <iostream>

using namespace std;

class Circle
{
public:
    Circle(float r);
    float circumference();
    float area();
private:
    float* radius;

};
