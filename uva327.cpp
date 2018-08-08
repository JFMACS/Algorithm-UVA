#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int flag[26];
    int value[26];
    string str;
    while( getline(cin, str) ){
        cout<<"Expression: "<<str<<endl;

        for( int i = 0 ; i < 26 ; i++ ){
            flag[i] = 0;
            value[i] = i + 1;
        }
        int result = 0;

        for( int i = 0 ; i < str.size() ; ){
            if( str[i] == ' ' && str[i-1] && str[i+1] && str[i-1] != str[i+1] ){
                str.erase(i, 1);
            }
            else{
                i++;
            }
        }

        for( int i = 0 ; i < str.size() ; i++ ){
            if( 'a' <= str[i] && str[i] <= 'z' ){
                flag[ str[i]-'a' ] = 1;
                if( str[i-1] && str[i-2] && str[i-1] == '-' && str[i-2] == '-' ){
                    value[ str[i]-'a' ] -= 1;
                    str.erase(i-1, 1);
                    str.erase(i-2, 1);
                    i -= 2;
                }else if( str[i-1] && str[i-2] && str[i-1] == '+' && str[i-2] == '+' ){
                    value[ str[i]-'a' ] += 1;
                    str.erase(i-1, 1);
                    str.erase(i-2, 1);
                    i -= 2;
                }
                continue;
            }else{
                continue;
            }
        }
        int sign = 1;
        for( int i = 0 ; i < str.size() ; i++ ){
            if( 'a' <= str[i] && str[i] <= 'z' ){
                result += sign *= value[ str[i]-'a' ];
                if( str[i+1] && str[i+2] && str[i+1] == '-' && str[i+2] == '-' ){
                    value[ str[i]-'a' ] -= 1;
                    i += 2;
                }else if( str[i+1] && str[i+2] && str[i+1] == '+' && str[i+2] == '+' ){
                    value[ str[i]-'a' ] += 1;
                    i += 2;
                }
                continue;
            }else if( str[i] == '-' ){
                sign = -1;
            }else if( str[i] == '+' ){
                sign = 1;
            }else{
                continue;
            }
        }
        cout<<"    value = "<<result<<endl;
        for( int i = 0 ; i < 26 ; i++ ){
            if( flag[i] == 1 ){
                cout<<"    "<<(char)(i+'a')<<" = "<<value[i]<<endl;
            }
        }
    }
    return 0;
}
/*
C语言的变量运算

a + b
b - z
a+b--+c++
c+f--+--a
f-- + c-- + d-++e

Expression: a + b
value = 3
a = 1
b = 2
Expression: b - z
value = -24
b = 2
z = 26
Expression: a+b--+c++
value = 6
a = 1
b = 1
c = 4
Expression: c+f--+--a
value = 9
a = 0
c = 3
f = 5
Expression: f-- + c-- + d-++e
value = 7
c = 2
d = 4
e = 6
f = 5
 */