/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char s[200005];
int a[256];
int main()
{
    scanf("%s",s);
    int l=strlen(s);
    long long ans=1;
    for(int i=0;i<l;i++)
    ans=ans+i-a[s[i]],a[s[i]]++;
    printf("%lld",ans);
    return 0;
}