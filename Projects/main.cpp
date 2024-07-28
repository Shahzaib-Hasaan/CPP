//
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    cout<<name;
return 0;
}