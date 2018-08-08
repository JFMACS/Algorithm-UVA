#include <cstdio>
#include <cstdlib>
#include <climits>

int main()
{
	char num1[300],num2[300];
    char  op;
    while ( scanf("%s %c %s", num1, &op, num2) != EOF )
    {
        printf( "%s %c %s\n", num1, op, num2 );
        double a = atof(num1);
        double b = atof(num2);
        double result;
        if ( a > INT_MAX )
        	printf("first number too big\n");
        if ( b > INT_MAX )
        	printf("second number too big\n");
        if ( op == '+' )
        	result = a + b;
        else
        	result = a * b;
        if ( result > INT_MAX )
        	printf("result too big\n");
    }
}
/*
输入两个数字，计算和或积，数字超过int最大值时给出提示

300 + 3
9999999999999999999999 + 11

300 + 3
9999999999999999999999 + 11
first number too big
result too big
 */