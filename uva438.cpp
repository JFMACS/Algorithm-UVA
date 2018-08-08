#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    double X1,Y1,X2,Y2,X3,Y3;
    double pi =  3.141592653589793;
    while( cin>>X1>>Y1>>X2>>Y2>>X3>>Y3 ){
        double a = pow( ( (X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1) ) , 0.5 );
        double b = pow( ( (X3-X1)*(X3-X1)+(Y3-Y1)*(Y3-Y1) ) , 0.5 );
        double c = pow( ( (X3-X2)*(X3-X2)+(Y3-Y2)*(Y3-Y2) ) , 0.5 );
        double p = (a+b+c)/2;
        double S = pow( p*(p-a)*(p-b)*(p-c) , 0.5 );
        double R = a*b*c/(4*S);
        printf("%.2f\n",2*pi*R);
    }
    return 0;
}
/*
输入三个点，求经过这三个点的圆的周长

0.0 -0.5 0.5 0.0 0.0 0.5
0.0 0.0 0.0 1.0 1.0 1.0
5.0 5.0 5.0 7.0 4.0 6.0
0.0 0.0 -1.0 7.0 7.0 7.0
50.0 50.0 50.0 70.0 40.0 60.0
0.0 0.0 10.0 0.0 20.0 1.0
0.0 -500000.0 500000.0 0.0 0.0 500000.0

3.14
4.44
6.28
31.42
62.83
632.24
3141592.65
 */