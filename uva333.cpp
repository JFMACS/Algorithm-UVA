#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int number[10];
    char ch[1000];
    while( cin.getline(ch,1000) && ch ){
        int len = strlen(ch);
        int start = 0,end = len-1
             ;
        while( ch[start] == ' ' ){
            start++;
        }
        while( ch[end] == ' ' ){
            end--;
        }
        for( int i = start ; i <= end ; i++ ){
            cout<<ch[i];
        }
        int j = 0,flag = 0;
        for( int i = start ; i <= end ; i++ ){
            if( ch[i] >= '0' && ch[i] <= '9' ){
                number[j] = ch[i] - '0';
                j++;
            }else if( ch[i] == 'X' && i == end && j == 9 ){
                number[j] = 10;
                j++;
            }else if( ch[i] == '-' || ch[i] == ' ' ){
                continue;
            }else{
                flag = 1;
                break;
            }
        }
        if( j != 10 ){
            flag = 1;
        }

        int sum = 0;
        for( int i = 0 ; i < 10 ; i++ ){
            sum += (10-i)*number[i];
        }
        if( sum%11 != 0 ){
            flag = 1;
        }
        
        if( flag ){
            cout<<" is incorrect."<<endl;
        }else{
            cout<<" is correct."<<endl;
        }
    }
    return 0;
}
/*
10个数字，最后一位可能是X（代表10），计算出前1~前10项的和s1，在对s1，计算前1~前10项的和，问第10项能否被11整除

0-89237-010-6
0-8306-3637-4
0-06-017758-6
This_is_garbage
1-56884-030-6
0-8230-2571-3
0-345-31386-0
0-671-88858-7
0-8104-5687-7
0-671-74119-5
0-812-52030-0
0-345-24865-1-150
0-452-26740-4
0-13-139072-4
0-1315-2447-X


0-89237-010-6 is correct.
0-8306-3637-4 is correct.
0-06-017758-6 is correct.
This_is_garbage is incorrect.
1-56884-030-6 is correct.
0-8230-2571-3 is correct.
0-345-31386-0 is correct.
0-671-88858-7 is correct.
0-8104-5687-7 is correct.
0-671-74119-5 is correct.
0-812-52030-0 is correct.
0-345-24865-1-150 is incorrect.
0-452-26740-4 is correct.
0-13-139072-4 is correct.
0-1315-2447-X is correct.
 */