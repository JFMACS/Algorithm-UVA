#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(){
    char input;
    int i = 0;
    int sum = 0;
    while( (input = getchar()) != EOF ){
        if( input >= '0' && input <= '9' ){
            sum += input - '0';
            continue;
        }else if( input == '!' || input == '\n' ){
            cout<<endl;
        }else{
            if( input == 'b' ){
                input = ' ';
            }
            for( i = 0 ; i < sum ; i++ ){
                cout<<input;
            }
            sum = 0;
        }
    }
    return 0;
}
/*
输入一个字符串，根据规则输出迷宫
'b'代表空格，'!'代表换行
"11T"代表两个T

1T1b5T!1T2b1T1b2T!1T1b1T2b2T!1T3b1T1b1T!3T3b1T!1T3b1T1b1T!5T1*1T

11X21b1X
4X1b1X

T TTTTT
T T TT
T T TT
T T T
TTT T
T T T
TTTTT*T

XX X
XXXX X
 */