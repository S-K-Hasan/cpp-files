#include <iostream>
#include <cmath>
using namespace std;
class Triangle{
   public:
    int a,b,c;
    Triangle(int side1,int side2,int side3)
     {
        a=side1;
        b=side2;
        c=side3;
    }
    int perimeter()
    {
        return a+b+c;
    }
    double area()
    {
        double s =(a + b + c) / 2.0;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
};

int main()
 {
    Triangle t1(3,4,5);
    cout << "Area of the triangle     : "<< t1.area()<<" square units"<<endl;
    cout << "Perimeter of the triangle: "<<t1.perimeter()<<" units"<<endl;

    return 0;
}
