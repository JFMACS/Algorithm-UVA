#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    double X1,Y1,X2,Y2,X3,Y3;
    double pi = 3.141592653589793;
    while( cin>>X1>>Y1>>X2>>Y2>>X3>>Y3 ){
        double a = pow( ( (X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1) ) , 0.5 );
        double b = pow( ( (X3-X1)*(X3-X1)+(Y3-Y1)*(Y3-Y1) ) , 0.5 );
        double c = pow( ( (X3-X2)*(X3-X2)+(Y3-Y2)*(Y3-Y2) ) , 0.5 );
        double p = (a+b+c)/2;
        double S = pow( p*(p-a)*(p-b)*(p-c) , 0.5 );
        double R = a*b*c/(4*S);
        double t1 = X1*X1+Y1*Y1;
        double t2 = X2*X2+Y2*Y2;
        double t3 = X3*X3+Y3*Y3;
        double temp = X1*Y2+X2*Y3+X3*Y1-X1*Y3-X2*Y1-X3*Y2;
        double X = (t2*Y3+t1*Y2+t3*Y1-t2*Y1-t3*Y2-t1*Y3)/temp/2;
        double Y = (t3*X2+t2*X1+t1*X3-t1*X2-t2*X3-t3*X1)/temp/2;
        double C = X*X + Y*Y - R*R;
        cout<<"                 "<<C<<endl;

        if( X ){
            cout<<"(x "<<((X>0)?"- ":"+ ");
            printf("%.3f)",(X>0)?X:(-X));
        }else{
            cout<<"x";
        }
        cout<<"^2 + ";
        if( Y ){
            cout<<"(y "<<((Y>0)?"- ":"+ ");
            printf("%.3f)",(Y>0)?Y:(-Y));
        }else{
            cout<<"y";
        }
        cout<<"^2 = ";
        printf("%.3f^2\n",R);

        cout<<"x^2 + y^2 ";
        if( X ){
            cout<<((X>0)?"- ":"+ ");
            printf("%.3fx ",(X>0)?2*X:(-2*X));
        }
        if( Y ){
            cout<<((Y>0)?"- ":"+ ");
            printf("%.3fy ",(Y>0)?2*Y:(-2*Y));
        }
        if( C != 0 ){
            cout<<((C>0)?"+ ":"- ");
            printf("%.3f ",(C>0)?C:(-C));
        }
        cout<<"= 0"<<endl;

    }
    return 0;
}
/*
输入三个点，求经过这三个点的圆的表达式

7.0 -5.0 -1.0 1.0 0.0 -6.0
1.0 7.0 8.0 6.0 7.0 -2.0

(x - 3.000)^2 + (y + 2.000)^2 = 5.000^2
x^2 + y^2 - 6.000x + 4.000y - 12.000 = 0

(x - 3.921)^2 + (y - 2.447)^2 = 5.409^2
x^2 + y^2 - 7.842x - 4.895y - 7.895 = 0
 */