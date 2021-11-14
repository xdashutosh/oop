#include<bits/stdc++.h>
using namespace std;


class employee{



public:
    string name;
    string codelang;
    bool dsa;


void intro()
{
    cout<<"hey this is \n"<<name<< " \n and i write code in \n"<<codelang<< "\n and I got \n"<<dsa<< "in dsa(1 means i know dsa 0 means i dont)"<<endl;
}
//constructor-values a contrcutor would assign to object in main
employee(string naam,string code,bool dsa_ka_bta ){
name=naam;
codelang=code;
dsa=dsa_ka_bta;
}


};

//we had to repeat code in main for each employe to overcome this we make contructor 
//even their is a default constructor which assgn values to our objects..

/* rules to make a constructor
1.it does not return anything like functions do
2.its name is same as class name
3.it must be public so that objects can be identified in main..
but at some circumstances we make that private aslo..

note: constructor defines accessiblity of properties of a class
*/


int main()
{
   //after making this we again follow dry rule in main that we just paas values to the properties using contrcutor


    employee ashutosh=employee("ashutosh chaudhary","javascript",true);
ashutosh.intro();

cout<<"name of ashutosh is "<<ashutosh.name<<endl;
cout<<"language for coding  "<<ashutosh.codelang<<endl;
cout<<"DSA known "<<ashutosh.dsa<<endl;
  
  employee arjit=employee("arjit malik","python",true);

    cout<<"name of arjit is "<<arjit.name<<endl;
cout<<"language for coding  "<<arjit.codelang<<endl;
cout<<"DSA known "<<arjit.dsa<<endl;
  
  
  
return 0;
}