//******************************************************************************
//
//******************************************************************************
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string temp_unit1,temp_unit2;
    float converted_temp;
    short temp;
    cout<<"Enter temperature: ";
    cin>>temp;
    cout<<"Convert From(Celsius,Farenheit,Kelvin,Rankine): ";
    cin>>temp_unit1;
    transform(temp_unit1.begin(), temp_unit1.end(), temp_unit1.begin(), ::tolower);
    cout<<"Convert To(Celsius,Farenheit,Kelvin,Rankine): ";
    cin>>temp_unit2;
    transform(temp_unit1.begin(), temp_unit1.end(), temp_unit1.begin(), ::tolower);
    if (temp_unit1 == "Celsius"  && temp_unit2 == "Farenheit")
    {
        converted_temp = (temp * 1.8) + 32;
        cout<<converted_temp;
    }

    return 0;
}