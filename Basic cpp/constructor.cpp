#include<iostream>
using namespace std;

class circle
{
    public:
          int r;

          circle()
          {
              cout<<"circle constructor: "<<endl;
              r=2;
          }

          circle(int radius)
          {
              r = radius;

          }

          void input()
          {
              cout<<"enter any radius: "<<endl;
              cin>>r;
          }

          void display()
          {
              int area = 3.14*r*r;
              cout<<"area: "<<area<<endl;
          }
};
int main()
{
    circle obj;
    circle obj1(20);
    obj1.display();
    obj.input();
    obj.display();
    return 0;
}