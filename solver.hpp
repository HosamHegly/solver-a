#pragma once
#include<iostream>
#include <complex>

using namespace std;
namespace solver{
    class RealVariable
    {
        double _coe;
         int _pow;
         public:
         RealVariable(): _pow(1),_coe(1){}
         RealVariable operator+(const int);
          RealVariable operator-(const int);
         RealVariable operator*(const int);
         RealVariable operator/(const int);
          RealVariable operator+(const RealVariable);
          RealVariable operator-(const RealVariable);
         RealVariable operator*(const RealVariable);
         RealVariable operator==(const RealVariable);
         RealVariable operator==(const int);
         RealVariable operator^(const int);

         friend double solve (const RealVariable);


        
    };
    
   class ComplexVariable
   {
        double _coe;
         int _pow;
         public:
         ComplexVariable():  _pow(1),_coe(1){}
         ComplexVariable operator+(const int);
          ComplexVariable operator-(const int);
         ComplexVariable operator*(const int);
         ComplexVariable operator/(const int);
          ComplexVariable operator+(const ComplexVariable);
          ComplexVariable operator-(const ComplexVariable);
         ComplexVariable operator*(const ComplexVariable);
          ComplexVariable operator^(const int);

         ComplexVariable operator==(const int);
         ComplexVariable operator==(const ComplexVariable);
         friend  std::complex<double> solve (const ComplexVariable);
   };
    class solve
    {
     
        solve();
        double solve (const RealVariable);
        std::complex<double> solve (const ComplexVariable);

        
    };
}
