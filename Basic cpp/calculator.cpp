#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int n;
    while(n>0)
    {
    cout<<"1. Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5.Remainder"<<endl;
    

    
    cout<<"enter your choice: "<<endl;
    cin>>n;


    
          switch(n)
         {
          case 1: cout<<a+b<<endl;
                 break;
          case 2: cout<<a-b<<endl;
                 break;
          case 3: cout<<a*b<<endl;
                 break;
          case 4: cout<<a/b<<endl;
                 break;
          case 5: cout<<a%b<<endl;
                 break;
          default:
                 cout<<"This operation doesn't exist"<<endl;
                 break;
           }
    }
    return 0;
}