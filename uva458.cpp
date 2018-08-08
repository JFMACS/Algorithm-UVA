#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main(){

    char ch;
    while ((ch = getchar()) != EOF){
        putchar( (ch == '\n')?ch:ch-7 );
    }
    return 0;
}
/*
按照规则将输入的字符串解码

1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5
1PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu5
1KLJ'pz'{ol'{yhklthyr'vm'{ol'Kpnp{hs'Lx|pwtlu{'Jvywvyh{pvu5

*CDC is the trademark of the Control Data Corporation.
*IBM is a trademark of the International Business Machine Corporation.
*DEC is the trademark of the Digital Equipment Corporation.
 */