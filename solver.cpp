#include<iostream>
#include"solver.hpp"
#include <cmath>
#include <exception>

#include <complex>

using namespace std;
using namespace std::complex_literals;

using solver::RealVariable, solver::ComplexVariable ,solver::solve ;

  
RealVariable solver:: operator+(const RealVariable& r,const RealVariable& rr){
     RealVariable c;
     c.a=r.a+rr.a;
     c.b=r.b+rr.b;
     c.c=r.c+rr.c;
     
    
    return c;
    
    
}


RealVariable solver:: operator-( const RealVariable& r, const RealVariable& rr)
{
 RealVariable c;
     c.a=r.a-rr.a;
     c.b=r.b-rr.b;
     c.c=r.c-rr.c;
     
    return c;
}



RealVariable  solver::operator*(const RealVariable& r,const RealVariable& rr){
   if((r.a!=0&&rr.a!=0)||(r.a!=0&&rr.b!=0)||(r.b!=0&&rr.a!=0))
   throw runtime_error ("not allowed more than the power of 2");
   
    double a,b,c;
    
   
   a=r.b*rr.b;
  b=r.b*rr.c+r.c*rr.b;
  c=r.c*rr.c;
  if(r.a!=0)
  a=a+r.a;
  else
  a=a+r.b;
  
  RealVariable x;;
  x.a=a;
  x.b=b;
  x.c=c;
  
   return x;
    
    
   
}


RealVariable solver:: operator==(const RealVariable& r,const RealVariable& rr){
       
   
    return r-rr;
}

RealVariable  solver::operator/( const RealVariable& r,const RealVariable& rr)
{
    
   RealVariable c;
   c.a=r.a/rr.c;
   c.b=r.b/rr.c;
   c.c=r.c/rr.c;
   
 return c;
}


RealVariable solver::operator^(const RealVariable& r,const int d)
{
    RealVariable x;
    if(d<0&&d>2)
     throw runtime_error ("not allowed more than the power of 2");
     
     if(d==0)
     {
     x.a=0;
     x.b=0;
     x.c=1;
     }
     if(d==2&&r.a!=0)
     {
     throw runtime_error ("not allowed more than the power of 2");
     }
     if(d==2)
     {
         x.a=pow(r.b,2);
         
         x.b=2*r.b*r.c;
       x.c=pow(r.c,2);
     }
     else
     {
         x.a=r.a;
         x.b=r.b;
         x.c=r.c;
     }
     return x;
}
   

 double solver::solve (const RealVariable& r)
 { double x;
     if(r.a!=0)
     {
      x=(-(r.b)+sqrt(pow(r.b,2)-(4*r.a*r.c)))/2*r.a;
     }
     else
     x=r.c/-(r.b);
     if(isnan(x))
          throw runtime_error ("no solution");

 
  
     return x;
 }


 ComplexVariable solver::operator +(const ComplexVariable& r, const ComplexVariable& rr)
 {
     return r;
 }
          ComplexVariable solver::operator -(const ComplexVariable& r, const ComplexVariable& rr){
              return r;
          }
          
           ComplexVariable solver::operator *(const ComplexVariable& r, const ComplexVariable& rr)
           {
               return r;
           }
           ComplexVariable solver::operator /(const ComplexVariable& r, const ComplexVariable& rr)
           {
               return r;
           }
           ComplexVariable solver::operator ^(const ComplexVariable& r, const ComplexVariable& rr)
           {
               return r;
           }
           ComplexVariable solver::operator ==(const ComplexVariable& r, const ComplexVariable& rr)
           {
               return r;
           }
           complex <double> solver::solve(const ComplexVariable& r)
           {
               complex<double> c= 3i;
               return c;
           }

