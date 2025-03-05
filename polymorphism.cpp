#include<iostream>
using namespace std;
class Animal
{
public :
    void virtual speak()
    {
        cout <<"Animal can speak"<<endl;
    }


};
class dog : public Animal
{
public :

    void speak()
    {
        cout <<"Dogs  can bark"<<endl;
    }
};
class cat : public Animal
{
public :

    void speak()
    {
        cout <<"cat  can meaw"<<endl;
    }
};
int main()
{
    Animal *ptr;


    dog Dog;
   // Dog.speak();
    ptr=&Dog;
    ptr-> speak();

    cat Cat;
    //Cat.speak();
    ptr=&Cat;
    ptr->speak();
    return 0;
}
