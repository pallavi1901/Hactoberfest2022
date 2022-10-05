#include<iostream>
using namespace std;

class number
{
    int n;

    public:
           
           number()
           {
               cout<<"constructor is used"<<endl;
           }
           number(int n)
           {
                this->n = n;
              
           }

           ~number()
           {
               cout<<"destructor is used"<<endl;
           }
           
           void input();
           void display();          
};
void number::input()
{
    cout<<"enter the number upto which you want fibonacci's series: "<<endl;
    cin>>n;
}
void number :: display()
{
    if(n==1)
    {
        cout<<"0\n";
    }
    else if(n==2)
    {
        cout<<"0 1\n";
    }

else
    {
        int a = 0;
        int b = 1;
        cout<<a<<" "<<b<<" ";
        
        int curr_f = 0;

        for(int i=3; i<=n; i++)
        {
            curr_f = a+b;
            cout<<curr_f<<" ";
            a = b;
            b = curr_f;
        }
    }
}
int main()
{
    number obj;
    number obj1(10);
    obj1.display();
    obj.input();
    obj.display();
    
    return 0;
}
