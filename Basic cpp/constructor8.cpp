#include<iostream>
using namespace std;

class today
{
    int d, m, y;

    public:
          
          today()
          {
              cout<<"default constructor"<<endl;
          }
          today(int date, int month, int year)
          {
              d = date;
              m = month;
              y = year;
          }
          ~today()                                      // destructor is used here
          {
              cout<<"destructor is used"<<endl;
          }

          void setter()
          {
              cout<<"enter today's date, month, year:  "<<endl;
              cin>>d>>m>>y;
          }

          void getter()
          {
              cout<<"today's date: "<<d<<" "<<m<<" "<<y<<endl;
          }

};

int main()
{
    today a, a1(19, 05 ,2001);
    a.setter();
    a.getter();
    a1.getter();
    return 0;
}