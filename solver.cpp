#include<iostream>
#include"solver.h"
#include <complex>

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;


RealVariable operator+(const double num, const RealVariable &r)
{
    ComplexVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];

    c.arr[2]+=num;
    
    return c ;
}

RealVariable operator+( const RealVariable &r,const double num)
{
    return num+r;
}
RealVariable operator+(const RealVariable& r,const RealVariable& rr){
     ComplexVariable c,d;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];
    c.arr[2]=r.arr[2];

    d.arr[2]=rr.arr[2];
    d.arr[0]=rr.arr[0];
    d.arr[1]=rr.arr[1];
    
    c.arr[0]+=d.arr[0];
    c.arr[1]+=d.arr[1];

    c.arr[2]+=d.arr[2];
    
    return c;
    
    
}



RealVariable operator-(const double num, const RealVariable &r)
{
ComplexVariable c;
    c.arr[0]=-r.arr[0];
    c.arr[1]=-r.arr[1];

    c.arr[2]=num-r.arr[2];
    return c;
}

RealVariable operator-( const RealVariable &r,const double num)
{
    ComplexVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];

    c.arr[2]-=num;
    
    return c ;
}
RealVariable operator-(const RealVariable& r,const RealVariable& rr){
     ComplexVariable c,d;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];
        c.arr[2]=r.arr[2];


    d.arr[2]=rr.arr[2];
    d.arr[0]=rr.arr[0];
    d.arr[1]=rr.arr[1];
     c.arr[0]-=d.arr[0];
    c.arr[1]-=d.arr[1];

    c.arr[2]-=d.arr[2];
    return c;
}

RealVariable operator*(const double num, const RealVariable &r)
{
     ComplexVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];
    
    c.arr[0]*=num;
    c.arr[1]*=num;

    c.arr[2]*=num;
    return c;
    
}

RealVariable operator*( const RealVariable &r,const double num)
{
    return num*r;
}
RealVariable operator*(const RealVariable& r,const RealVariable& rr){
   return r;
    
   
}

RealVariable operator==(const int num, const RealVariable &r)
{
    
    
    return r-num;
}

RealVariable operator==( const RealVariable &r,const int num)
{
    return r-num;
}
RealVariable operator==const RealVariable& r,const RealVariable& rr){
    return r-rr;
}

RealVariable operator/( const RealVariable &r,const int num)
{
   ComplexVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];
    
    c.arr[0]/=num;
        c.arr[1]/=num;

    c.arr[2]/=num;
 return c;
}


double solve:: solve(const RealVariable&r){
    return 9.0;
}



