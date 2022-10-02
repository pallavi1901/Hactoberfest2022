#include<iostream>
using namespace std;

class student
{
    private: 
           
           int rno, m1, m2, m3, total;
           float per;

    public: 
           student()
           {
               cout<<"default constructor: "<<endl;
           }

           student(int roll, int mark1, int mark2, int mark3)
           {
               rno = roll;
               m1 = mark1;
               m2 = mark2;
               m3 = mark3;
           }

           void print()
           {
               cout<<"roll no: "<<rno<<endl;
               cout<<"marks1: "<<m1<<endl;
               cout<<"marks2: "<<m2<<endl;
               cout<<"marks3: "<<m3<<endl;
           }
};
int main()
{
    student obj;
    student obj1(23, 56, 89, 90);
    obj1.print();
    return 0;
}