#include<bits/stdc++.h>
using namespace std;

class contract{

virtual void askforpromo()=0;

};



class employee:contract{

   
protected:
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

//child class  inherited classes are private by default so we make them public to access public properties aslo but if we want both then protected
class developer:  public employee{
public:
string devtype;

void mycode(){
    cout<<"i am "<<getName()<< " and i am a "<<devtype<<endl;
}

//we have to make a constructor for child class too with all properties parent class have + own property
//to identify that values we paas in child constructor are other than parent constructor--
//--we make :parent constructor(values of parent constructor we paased)
developer(string naam,string code,bool dsa_ka_bta ,string devlopment):employee(naam,code,dsa_ka_bta){
devtype=devlopment;
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
developer sagar=developer("sagar rana","python",true,"AI developer");
sagar.mycode();

sagar.intro();
 sagar.askforpromo(); 
return 0;
}