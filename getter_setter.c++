#include<bits/stdc++.h>
using namespace std;


class employee{

    //data encapsulated  using private class
private:
 string name;
    string codelang;
    bool dsa;

public:
//to make some of my data accessible outside we will make getter and setter 

//set is used to assign values to the properties of class
void setName(string naam)
 { 

        
     name = naam; }
     
     
 //get is used to get or print the values we setted..
 string getName()
 { return name;}

//hence the value we assign to naam in setter will set value of name property and then getter will help to get that ..

//intro can be accessed as it is under public class
void intro()
{
    cout<<"hey this is \n"<<name<< " \n and i write code in \n"<<codelang<< "\n and I got \n"<<dsa<< "in dsa(1 means i know dsa 0 means i dont)"<<endl;
}
//constructor is under public hence we can assign value to it but cant be access outside the class
employee(string naam,string code,bool dsa_ka_bta ){
name=naam;
codelang=code;
dsa=dsa_ka_bta;
}


};



int main()
{
//the value we passed in constructor are setted default to setter method..

    employee ashutosh=employee("ashutosh chaudhary","javascript",true);
cout<<ashutosh.getName()<<endl;
ashutosh.intro();



  employee arjit=employee("arjit malik","python",true);

// arjit.setName("arjit singh");  

cout<<arjit.getName()<<endl;
  arjit.intro();
  
//as we paas a value to setter the old value maybe using constrcutor ..updates.   
return 0;
}