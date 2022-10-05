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

         
};

int main()
{
    employee obj;
    obj.get();
    obj.put();   
    return 0;
}
