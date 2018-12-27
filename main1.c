#include <stdio.h>
#include <math.h>

/* Variant 16 */

int main (void)
{
float a=1000;
float b=0.0001;
float result_float = (pow((a-b),3)-(pow(a,3)-3*b*pow(a,2)))/(pow(b,3)-3*a*pow(b,2));
double c=1000;
double d=0.0001;
double result_double = (pow((c-d),3)-(pow(c,3)-3*d*pow(c,2)))/(pow(d,3)-3*c*pow(d,2));
printf("result float %.5f\n", result_float);
printf("result double %.35f\n", result_double);
}
