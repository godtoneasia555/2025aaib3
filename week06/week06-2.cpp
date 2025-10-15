// week06-2.cpp
// SOIT106 ADVANCE 008_C
#include <iostream>
using namespace std;

int f(int n)
{
    if(n>0) return n;
    return -n;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("[%d]",f(n));
    return 0;
}
