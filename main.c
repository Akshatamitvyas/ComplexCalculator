#include<stdio.h>
#include "complex.h"
int main()
{
    complex_t n1,n2,x1,x2,x3,x4;
    printf("Enter the number in a+bi");
    scanf("%f %f",&n1.real,&n1.imaginary);
    printf("\nEnter the number in c+di");
    scanf("%f %f",&n2.real,&n2.imaginary);
    x1 = sum(n1,n2);
    x2 = sub(n1,n2);
    x3 = multiply(n1,n2);
    x4 = divide(n1,n2);
    printf("The sum of two complex number %.3f + %.3fi\n",x1.real,x1.imaginary);
    printf("The sub of two complex number %0.3f + %.3fi\n",x2.real,x2.imaginary);
    printf("The product of two complex number %.3f + %.3fi\n",x3.real,x3.imaginary);
    printf("The division of two complex number %.3f + %.3fi\n",x4.real,x4.imaginary);
    return 0;
}