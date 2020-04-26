#pragma once
#include<iostream>
#include <complex>
#include <cmath>
using namespace std;
namespace solver{
    class RealVariable
    {
     public:
       double arr[3];
         
         RealVariable(){ arr[0]=0; arr[1]=0; arr[2]=0;}
       
    
  

    };
       RealVariable operator+(const RealVariable&,const double);
       RealVariable operator+(const double,const RealVariable&);
       RealVariable operator+(const RealVariable&,const RealVariable&);


       RealVariable operator-(const double,const RealVariable&);
       RealVariable operator-(const RealVariable&,const double);
       RealVariable operator-(const RealVariable&,const RealVariable&);

       RealVariable operator*(const RealVariable&,const double);
       RealVariable operator*(const double,const RealVariable&);
       RealVariable operator*(const RealVariable&,const RealVariable&);

       RealVariable operator/(const RealVariable&,const double);



         RealVariable operator==(const RealVariable&,const RealVariable&);
         RealVariable operator==(const RealVariable&,const double);
         RealVariable operator==(const double, const RealVariable&);

         
         
        RealVariable operator^(const RealVariable&,const double);
  
   
           class ComplexVariable{};
                   double solve (const RealVariable&);

}