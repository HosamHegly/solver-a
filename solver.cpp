#include<iostream>
#include"solver.hpp"
#include <cmath>

#include <complex>

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;


RealVariable operator+(const double num, const RealVariable &r)
{
    RealVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];

    c.arr[2]+=num;
    
    return c ;
}

RealVariable operator+( const RealVariable &r,const double num)
{
     RealVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];

    c.arr[2]+=num;
    
    return c ;
}
RealVariable operator+(const RealVariable& r,const RealVariable& rr){
     RealVariable c,d;
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
RealVariable c;
    c.arr[0]=-r.arr[0];
    c.arr[1]=-r.arr[1];

    c.arr[2]=num-r.arr[2];
    return c;
}

RealVariable operator-( const RealVariable &r,const double num)
{
    RealVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];

    c.arr[2]-=num;
    
    return c ;
}
RealVariable operator-(const RealVariable& r,const RealVariable& rr){
     RealVariable c,d;
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
     RealVariable c;
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
     RealVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];
    
    c.arr[0]*=num;
    c.arr[1]*=num;

    c.arr[2]*=num;
    return c;
}
RealVariable operator*(const RealVariable& r,const RealVariable& rr){
   return r;
    
   
}

RealVariable operator==(const int num, const RealVariable &r)
{
    
    
    RealVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];

    c.arr[2]-=num;
    
    return c ;
}

RealVariable operator==( const RealVariable &r,const int num)
{
    RealVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];

    c.arr[2]-=num;
    
    return c ;
}
RealVariable operator==(const RealVariable& r,const RealVariable& rr){
       RealVariable c,d;
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

RealVariable operator/( const RealVariable &r,const int num)
{
   RealVariable c;
    c.arr[0]=r.arr[0];
    c.arr[1]=r.arr[1];

    c.arr[2]=r.arr[2];
    
    c.arr[0]/=num;
        c.arr[1]/=num;

    c.arr[2]/=num;
 return c;
}


 double solve (const RealVariable& r)
 {
     double x=(-(r.arr[1])+sqrt(pow(r.arr[1],2)-(4*r.arr[0]*r.arr[2])))/2*r.arr[0];
     return x;
 }

