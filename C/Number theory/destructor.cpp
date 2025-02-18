#include <bits/stdc++.h>  
using namespace std;  
class Company  //parent class
{  
public:  
       string Cname; 
       int estd;
};  

class Square //parent class
{
public:
    string product;
};

class Employee:public Square,public Company
{
public:
    string ename;
};

int main(void)   
{  
    //no need
    #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdin);
    #endif
    //no need

    Employee e1; //creating an object of Employee 
    e1.Cname="ABC";
    e1.estd=2024;
    e1.ename = "xyz";
    cout<<"Company Name:"<<e1.Cname<<"\nESTD:"<<e1.estd<<"\nEmployee Name:"<<e1.ename<<endl;  
    Employee e2; //creating an object of Employee  
    return 0;  
}  