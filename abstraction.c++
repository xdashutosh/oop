#include<bits/stdc++.h>
using namespace std;

// abstracted class for a contract to employees....but it is hidden from employees
class contract{

// to make a deal we make a virtual function which should be satisfied--or virtualfun can be called set of rules we added in contract.. 
virtual void askforpromo()=0;

};


// applied abstracted class to this class which will be hidden from employee 

class employee:contract{

   
private:
 string name;
    string codelang;
    bool dsa;

public:

void setName(string naam)
 { 

        
     name = naam; }
     
     
 string getName()
 { return name;}



void intro()
{
    cout<<"hey this is \n"<<name<< " \n and i write code in \n"<<codelang<< "\n and I got \n"<<dsa<< "in dsa(1 means i know dsa 0 means i dont)"<<endl;
}
employee(string naam,string code,bool dsa_ka_bta ){
name=naam;
codelang=code;
dsa=dsa_ka_bta;
}



// logic for abstracted class rules --for promotion
//lets supose this logic is very complex..
//if we did not provide this implimentation of that contract abstracted class our program wont be run..
void askforpromo(){
if (dsa==1)
{
    cout<<name<<"will get promoted"<<endl;
}
else{
    cout<<"no promotion for you!"<<endl;
}

}



};



int main()
{

    employee ashutosh=employee("ashutosh chaudhary","javascript",false);
cout<<ashutosh.getName()<<endl;
ashutosh.intro();



  employee arjit=employee("arjit malik","python",true);


cout<<arjit.getName()<<endl;
  arjit.intro();

  ashutosh.askforpromo();
  arjit.askforpromo();
  
return 0;
}