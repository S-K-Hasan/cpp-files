#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
  public:

    void calculate_area_and_perimeter(int a, int b, int c)
    {
        int perimeter =a+b+c;
        double s =(a+b+c)/2.0;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of the triangle     : "<< area<< " square units" <<endl;
        cout<<"Perimeter of the triangle: "<<perimeter<< " units" <<endl;
    }
};

int main()
{

    Triangle t1;
    t1.calculate_area_and_perimeter(3,4,5);

    return 0;
}

