#pragma once
#include<iostream>
#include <complex>

using namespace std;
namespace solver{
    class RealVariable
    {
     public:
       double arr[3];
         
         RealVariable(double x=0,double y=1, double z=0): arr[0](x),arr[1](y),arr[2](z){}
       

        
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
   class ComplexVariable
   {
       
   };
    class solve
    {
     
        solve();
        double solve (const RealVariable);
        std::complex<double> solve (const ComplexVariable);

        
    };
}
