#include<bits/stdc++.h>
using namespace std;

//classes with access modifiers
/*
1.private:- properties of class under private modifier is not accessable out of that class..

2.public:- vice-versa of private class

3.protected:-some advanced protocols we will deal later.
  
  note-classes by default are private
*/

// in classes an object can have a behaviour defined using a function..so we can use a function as a class property

class employee{



public:
    string name;
    string codelang;
    bool dsa;

    //lets supose object`s behaviour is to give introduction.. thus a function defd within that class can use properties directly as a variable

void intro()
{
    cout<<"hey this is \n"<<name<< " \n and i write code in \n"<<codelang<< "\n and I got \n"<<dsa<< "in dsa(1 means i know dsa 0 means i dont)"<<endl;
}

};


int main()
{
   
    employee ashutosh;
    ashutosh.name="ashutosh chaudhary";
    ashutosh.codelang="javascript";
    ashutosh.dsa=true;
ashutosh.intro();

cout<<"name of ashutosh is "<<ashutosh.name<<endl;
cout<<"language for coding  "<<ashutosh.codelang<<endl;
cout<<"DSA known "<<ashutosh.dsa<<endl;
  
  employee arjit;
  arjit.name="arjit malik";
   arjit.codelang="python";
    arjit.dsa=true;

    cout<<"name of arjit is "<<arjit.name<<endl;
cout<<"language for coding  "<<arjit.codelang<<endl;
cout<<"DSA known "<<arjit.dsa<<endl;
  
  
  
return 0;
}