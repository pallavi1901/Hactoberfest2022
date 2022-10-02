#include<iostream>
using namespace std;

class company
{
    public:
           char cname[15],  add[50];

    public:
           void c_getdata()
           {
               cout<<"enter company name and address: "<<endl;
               cin>>cname>>add;
           }
           void c_putdata()
           {
               cout<<"company name: "<<cname<<endl;
               cout<<"address: "<<add<<endl;
           }
};
class department:public company
{
    public: 
          int dno;
          char dname[15];

          void d_input()
          { 
              company:c_getdata();
              cout<<"department number and name: "<<endl;
              cin>>dno>>dname;
          }
          void d_output()
          {
              company:c_putdata();
              cout<<"department no: "<<dno<<endl;
              cout<<"department name: "<<dname<<endl;
          }

};
class employee: public department
{
       public:

       int eno, salary, bonus;
       char ename[20];

       void input()
       {
           cout<<"enter employee number, name, salary, bonus: "<<endl;
           cin>>eno>>ename>>salary>>bonus;
       }
       void print()
       {
           cout<<"employee no: "<<eno<<endl;
           cout<<"name: "<<ename<<endl;
           cout<<"salary: "<<salary<<endl;
           cout<<"bonus: "<<bonus<<endl;
       }
};
int main()
{
    employee obj;
    obj.d_input();
    obj.d_output();
    obj.input();
    obj.print();
    return 0;
}