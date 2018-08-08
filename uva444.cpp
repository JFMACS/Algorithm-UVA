#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main(){
    char ch[1000];
    while( cin.getline(ch,1000) ){
        int number;
        for( int i = strlen(ch)-1 ; i >= 0 ; i-- ){
            if( '0'<=ch[0] && ch[0]<='9' ){
                if( ch[i] == '1' ){
                    number = 100 + (ch[i-1]-'0')*10 + ch[i-2]-'0';
                    cout<<(char)number;
                    i -= 2;
                }else{
                    number = (ch[i]-'0')*10 + ch[i-1]-'0';
                    cout<<(char)number;
                    i -= 1;
                }
            }else{
                number = (int)ch[i];
                while(number){
                    cout<<number%10;
                    number /= 10;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
将ASCII码与字符串相互转化，需要注意的是ASCII码输入输出的顺序与字符串相反

abc
798999
Have a Nice Day !

998979
cba
332312179862310199501872379231018117927
 */