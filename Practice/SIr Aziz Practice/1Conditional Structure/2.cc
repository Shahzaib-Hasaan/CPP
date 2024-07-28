// check number is divisible by 5 and 11 or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if (n % 5 == 0)
    {
        cout<<n<<" is divisible by 5"<<endl;
    }
    else
    {
        cout<<n<<" is notdivisible by 5"<<endl;
    }
    if (n % 11 == 0)
    {
        cout<<n<<" is divisible by 11"<<endl;   
    }
    else
    {
        cout<<n<<" is not divisible by 11"<<endl;
    }
    
    
    
    return 0;
}