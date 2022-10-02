#include<iostream>
#define max 100
using namespace std;

class company
{
    private: 
           char cname[15];
           char add[50];

    public: 
           void input()
           {
               cout<<"enter company name and address: "<<endl;
               cin>>cname>>add;
           }

           void output()
           {
               cout<<"company name: "<<cname<<endl;
               cout<<"address: "<<add<<endl;
           }
};
class department
{
    private:
           int Dno;
           char Dname[15];

    public:

        void getdata()
        {
            cout<<"enter data: "<<endl;
            cin>>Dno>>Dname;
        }
        void putdata()
        {
            cout<<"dept no: "<<Dno<<endl;
            cout<<"dept name: "<<Dname<<endl;
        }
};
class employee:public company, public department
{
         public:

         int eno;
         char ename[10];

         void get()
         {  
             input();
             getdata();
             cout<<"enter info: "<<endl;
             cin>>eno>>ename;
         }

         void put()
         {  output();
            putdata();
             cout<<"employee number: "<<eno<<endl;
             cout<<"employee name: "<<ename<<endl;
         }
};

int main()
{
// {    int ch;
//      cout<<"enter how many objects you want: "<<endl;
//      cin>>ch;

//     employee obj[max];
//     for(int i=1; i<=ch; i++)
//     {
//         obj[i].input();
//         obj[i].output();
//         obj[i].getdata();
//         obj[i].putdata();
//         obj[i].get();
//         obj[i].put();    
//     }
    employee obj;
    obj.get();
    obj.put();   
    return 0;
}