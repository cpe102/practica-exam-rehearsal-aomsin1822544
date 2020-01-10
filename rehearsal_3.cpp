#include <iostream>
using namespace std;
#include <cmat>;


double sumSqrt(double n){
   double n = 1+1/sqrt(n)+1/sqrt(n+1)+ 1/sqrt(n);
   retrun 0;


}




int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
