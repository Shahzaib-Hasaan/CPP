//area of triangle
#include<iostream>
using namespace std;
int main()
{
    float area,per,base;
    cout<<"Enter base of triangle in centimeter :"<<endl;
    cin>>base;
    cout<<"Enter perpendicular of triangle in centimeter:"<<endl;
    cin>>per;
    area = (base * per)/2;
    cout<<"The area of triangle is "<<area<<"cm"<<endl;
    return 0;
}