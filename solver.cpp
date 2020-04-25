#include<iostream>
#include"solver.h"
#include <complex>

using namespace std;
using namespace solver;

&RealVariable RealVariable::operator+(const int num)
{
    return this;
}

&RealVariable RealVariable::operator-(const int num)
{
    return this;
}

&RealVariable RealVariable::operator*(const int num)
{
    return this;
}
&RealVariable RealVariable::operator/(const int num)
{
    return this;
}
 &RealVariable RealVariable:: operator+(const &RealVariable r)
 {
     return this;
 }
 &RealVariable RealVariable:: operator-(const &RealVariable r)
 {
     return this;
 }
&RealVariable RealVariable:: operator*(const &RealVariable r)
{
    return this;
}

&RealVariable RealVariable:: operator==(const int num)
{
    return this;
}

&ComplexVariable ComplexVariable:: operator+(const &ComplexVariable r)
 {
     return this;
 }
 &ComplexVariable ComplexVariable:: operator-(const &ComplexVariable r)
 {
     return this;
 }
&ComplexVariable ComplexVariable:: operator*(const &ComplexVariable r)
{
    return this;
}

&ComplexVariable ComplexVariable:: operator==(const int num)
{
    return this;
}

&ComplexVariable ComplexVariable:: operator==(const &ComplexVariable r)
{
    return this;
}
double solve::solve (const RealVariable)
{
    return 7.0;
}

std::complex solve::solve(const ComplexVariable)
{
    
    std::complex<double> mycomplex(10.0, 2.0);
    return mycomplex;
}
