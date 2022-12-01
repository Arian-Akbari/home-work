#include<stdio.h>
int main()
{
   int a,b,h,m,n;
   h = 1;
   scanf("%02d %02d",&a,&b);
   int c = 12 - a;
   int d = 60 - b;
   m = (a != 0) && (h =1);
   n = (b != 00) && (h =1);
   c = c*m;
   d = d*n;

    printf("%02d:%02d",c,d);
    return 0;
}
