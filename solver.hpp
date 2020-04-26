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
       
RealVariable operator+(const double num, const RealVariable &r);


RealVariable operator+( const RealVariable &r,const double num);

RealVariable operator+(const RealVariable& r,const RealVariable& rr);
  



RealVariable operator-(const double num, const RealVariable &r);


RealVariable operator-( const RealVariable &r,const double num);

RealVariable operator-(const RealVariable& r,const RealVariable& rr);
   

RealVariable operator*(const double num, const RealVariable &r);


RealVariable operator*( const RealVariable &r,const double num);

RealVariable operator*(const RealVariable& r,const RealVariable& rr);
   
    
   

RealVariable operator==(const int num, const RealVariable &r);


RealVariable operator==( const RealVariable &r,const int num);

RealVariable operator==(const RealVariable& r,const RealVariable& rr);
   
RealVariable operator/( const RealVariable &r,const int num);



RealVariable operator^(const RealVariable& ,const double );

   
           class ComplexVariable{};
     
                   double solve (const RealVariable&);
           

}