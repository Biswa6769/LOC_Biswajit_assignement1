#include<stdio.h>
int main()
{
int n,revn=0,d,orin;
scanf("%d",&n);
orin=n;
while(n!=0)
{ d=n%10; revn=revn*10+d; n=n/10; } 
if(orin==revn)
{ printf("YES"); }
else{ printf("NO"); }
}