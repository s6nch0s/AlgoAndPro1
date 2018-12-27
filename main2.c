#include <stdio.h>
#include <math.h>
/* Variant 16 */
int main ()
{
int n;
int m;
printf("Input n ");
scanf("%d",&n);
printf("input m ");
scanf("%d",&m);
int x=++n*++m;
int y=m++<n;
int z=n++>m;
printf("result of ++n*++m %d\n",x);
printf("result of m++<n %d\n",y);
printf("result of n++>m %d\n",z);
}
