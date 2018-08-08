#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
	int line;
	char ch[1000];
	cin>>line;
	for( int i = 0 ; i < line ; i++ ){
		cin>>ch;
		int len = strlen(ch);
		for( int j = 1 ; j <= len ; j++ ){
			if( len%j != 0 ){
				continue;
			}
			int n = len/j;
			int flag = 1;
			for( int k = 0 ; k < j ; k++ ){
				for( int m = 1 ; m < n ; m++ ){
					if( ch[k] != ch[k+m*j] ){
						flag = 0;
						break;
					}
				}
				if( flag == 0 ){
					break;
				}
			}
			if( flag ){
				cout<<j<<endl;
				break;
			}
		}
		if( i != line-1 ){
			cout<<endl;
		}
	}
	return 0;
}
/*
计算字符串的重复部分长度

5

abcdefghijk

abcdabcd

11

4
 */