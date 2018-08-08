#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    char ch[105][105];
    int row = 0;
    int max = 0;
    while( cin.getline(ch[row],105) && strcmp(ch[row],"") ){
        max = (strlen(ch[row])>max)?strlen(ch[row]):max;
        row++;
    }
    for( int i = 0 ; i < max ; i++ ){
        for( int j = row-1 ; j >= 0 ; j-- ){
            if( i < strlen(ch[j]) ){
                cout<<ch[j][i];
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
将输入的若干字符串倒转90度输出

Rene Decartes once said,
"I think, therefore I am."

"R
Ie
 n
te
h
iD
ne
kc
,a
 r
tt
he
es
r
eo
fn
oc
re
e
 s
Ia
 i
ad
m,
.
"
 */
