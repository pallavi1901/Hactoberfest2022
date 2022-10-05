#include<iostream>
#define Max 100
using namespace std;

class student
{                                               //array object
    int rno, total, per;
    char name[20];
    int m1, m2, m3;

    public:
         void input();
         void print();

};
void student::input()
{
    cout<<"enter roll call, name, marks1, marks2, marks3: "<<endl;
    cin>>rno>>name>>m1>>m2>>m3;
}
void student::print()
{
    cout<<"roll no: "<<rno<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"marks1: "<<m1<<endl;
    cout<<"marks2: "<<m2<<endl;
    cout<<"marks3: "<<m3<<endl;

    total = m1+m2+m3;
    per = total/3;

    cout<<"total: "<<total<<endl;
    cout<<"percentage: "<<per<<endl;
}
int main()
{
    int i, n;

    cout<<"enter how many students info you want to print: "<<endl;
    cin>>n;
    
    
}
