#include "doctest.h"
#include <complex>
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;
TEST_CASE("Test case 1") 
{
 RealVariable x;
  ComplexVariable y;
  complex <double> c {4,0};
    complex <double> k {0,4.0};
        complex <double> g {0,2.0};


     CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
     
     CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
     
      CHECK(solve(2*x-4 == 10) ==7);
     CHECK(solve((x^2) == 16) ==4);   
     CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);   
   CHECK(solve(2*x-4.0 == 10.0)==7);  // xvalue == 7
   

   CHECK(solve((y^2) == 16)==c);   // 4+0i or -4+0i
     CHECK (solve((y^2) == -16)==k);   // 0+4i or 0-4i
     CHECK( solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==c);    // 4+0i or -4+0i
     CHECK(solve(y+5i == 2*y+3i)==g);   // 0+2i
}