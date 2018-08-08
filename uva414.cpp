#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n;
    char ch[30];
    while( cin>>n && n != 0 ){
        getchar();
        int sum = 0;
        int min = 25;
        for( int i = 0 ; i < n ; i++ ){
            cin.getline(ch,30);
            int count = 0;
            for( int j = 0 ; j < 25 ; j++ ){
                if( ch[j] != 'X' ){
                    count++;
                }
            }
            sum += count;
            if( min > count ){
                min = count;
            }
        }
        cout<<sum-n*min<<endl;
    }
    return 0;
}
/*
输入n个字符串，字符为'X'或' '，每次每行消除一个空格，求最后剩余空格数

4
XXXX                XXXXX
XXX               XXXXXXX
XXXXX                XXXX
XX                 XXXXXX
2
XXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXX
1
XXXXXXXXX              XX
0

4
0
0
 */
