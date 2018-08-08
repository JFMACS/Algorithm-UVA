#include <cstring>
#include <cstdio>

char Haab[19][10] = { "pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet" };
char Tzolkin[20][10] = { "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau" };

int main()
{
	int  n, day, year, sum;
	char month[10];
	while (~scanf("%d",&n)) {
		printf("%d\n",n);
		for (int i = 0; i < n; ++ i) {
			scanf("%d.%s%d",&day, month, &year);
			for (int j = 0; j < 19; ++ j)
				if (!strcmp(Haab[j], month)) {
					sum = year*365 + j*20 + day;
					break;
				}
			printf("%d %s %d\n",sum%13+1,Tzolkin[sum%20],sum/260);	
		}
	}
    return 0;
}
/*
将Haab日期转换成Tzolkin日期

3
10. zac 0
0. pop 0
10. zac 1995

3
3 chuen 0
1 imix 0
9 cimi 2801
 */