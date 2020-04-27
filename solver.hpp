#pragma once
#include<iostream>
#include <complex>
#include <cmath>
using namespace std;
using namespace std::complex_literals;

namespace solver{
    
   
    class RealVariable
    {
     public:
        double a,b,c;
       
         RealVariable(double a) : a(0),b(0),c(a){}
         RealVariable():a(0),b(1),c(0){}
         
       
    
  

    };
RealVariable operator+(const RealVariable& r,const RealVariable& rr);
  





RealVariable operator-(const RealVariable& r,const RealVariable& rr);
   



RealVariable operator*(const RealVariable& r,const RealVariable& rr);
   
    
   



RealVariable operator==(const RealVariable& r,const RealVariable& rr);
   
RealVariable operator/( const RealVariable &r,const RealVariable&);



RealVariable operator^(const RealVariable& ,const int );

   
           class ComplexVariable{
                
    
        public:
        double a,b,c;
        complex<double> comp;
         ComplexVariable() : a(0),b(1),c(0),comp(0){}
         ComplexVariable(double a):a(0),b(0),c(a),comp(0){}
         ComplexVariable(complex <double> comp):a(0),b(0),c(0),comp(comp){}
         
         
       
    
  

    
           };
           
           ComplexVariable operator +(const ComplexVariable&, const ComplexVariable&);
          ComplexVariable operator -(const ComplexVariable&, const ComplexVariable&);
           ComplexVariable operator *(const ComplexVariable&, const ComplexVariable&);
           ComplexVariable operator /(const ComplexVariable&, const ComplexVariable&);
           ComplexVariable operator ^(const ComplexVariable&, const ComplexVariable&);
           ComplexVariable operator ==(const ComplexVariable&, const ComplexVariable&);

     
                   double solve (const RealVariable&);
                   complex <double> solve(const ComplexVariable&);

          

}