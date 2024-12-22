#include <stdio.h>
#include <math.h>


int main(void){
double A;
double B;
double C;

printf("Enter the length of A: ");
scanf("%lf", &A);
printf("Enter the length of B: ");
scanf( "%lf", &B);

C = sqrt(A*A + B*B);
printf("The length hypotenuse is: %lf", C);

}