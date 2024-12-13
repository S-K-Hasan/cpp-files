#include<bits/stdc++.h>
using namespace std;
class student{
 public:
     string name;
     bool isPresent= false ;
     void markPresent() {
        isPresent = true;
    }
     void getData(){
      cout<<"Enter name:";
      cin>>name;
     }

    void displayDetails(){
      cout<<"Name       : "<<name<<endl;
      cout<<"Attendence : "<<(isPresent?"Present":"Absent")<<endl;
    }
};

int main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getData();
    }
    s[4].markPresent();
    s[1].markPresent();

    for (int i = 0; i < 5; i++) {
        if (s[i].isPresent) {
            s[i].displayDetails();
        }
    }

}
