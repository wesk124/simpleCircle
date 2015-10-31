#include "circle.h"
using namespace std;
int main()
{
    float radius;
    float circumference;
    float area;


    cout << "Please enter the radius: " << endl;
    cin >> radius;
    
    Circle pool(radius); //Call constructor
    




    circumference = pool.circumference();
    area = pool.area();



    /* Print out all values of this circle */
    cout <<"The circumferece of this circle is : " << circumference << endl;
    cout << "The area of this circle is: "<< area << endl;
 }
