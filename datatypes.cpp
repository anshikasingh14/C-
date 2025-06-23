

#include<iomanip>
#include <iostream>

using namespace std;

int main()
{
    double a =3.912348239293;
    
    double ex1=325e+2;
    
    float b=3.912348239293f;
    
    float ex2=325e+2f;
    //Displaying output with fixed
   cout<<"Double Type Number 1="<<fixed<<a<<endl;
   cout<<"Double Type Number 2="<<fixed<<ex1<<endl;
   cout<<"Float Type Number 1="<<fixed <<b<<endl;
   cout<<"Float Type Number 2="<<fixed<<ex2<<endl;
   
   //Displaying output with scientific
    cout<<"Double Type Number 1="<<fixed<<a<<endl;
   cout<<"Double Type Number 2="<<fixed<<ex1<<endl;
   cout<<"Float Type Number 1="<<fixed <<b<<endl;
   cout<<"Float Type Number 2="<<fixed<<ex2<<endl;
   return 0;
    
}

/*
Output
Double Type Number 1=3.912348
Double Type Number 2=32500.000000
Float Type Number 1=3.912348
Float Type Number 2=32500.000000
Double Type Number 1=3.912348
Double Type Number 2=32500.000000
Float Type Number 1=3.912348
Float Type Number 2=32500.000000
*/