#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter any number: "<<endl;
    cin>>n;

    int sum = 0;
    int rem;
    int temp = n;

    while(n>0)
    {
        rem = n%10;
        sum = sum+ rem*rem*rem;
        n = n/10;
    }
    cout<<"sum: "<<sum<<endl;

    if(temp == sum)
    {
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }

    return 0;
}