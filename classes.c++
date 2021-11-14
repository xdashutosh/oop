#include<bits/stdc++.h>
using namespace std;

//class ...classes are just blueprint and protocols of oop
class employee{
    string name;
    string codelang;
    bool dsa;
};


int main()
{
    //objects --- member of class
    employee ashutosh;
    ashutosh.name="ashutosh chaudhary";
    ashutosh.codelang="javascript";
    ashutosh.dsa=true;

    //but these properties of class is inaccessable due to class have private properties and cant be access out of the class..
    //for that purpose we have to study further about access modifiers...  

return 0;
}