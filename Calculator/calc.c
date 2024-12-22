#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <cctype>

int main(void){
    char l = 'Y';
    double x;
    double y;
    int answer;
    double result1;
    double result2;;
    while(l == 'Y'){
    printf("Enter the value of X: ");
    scanf("%lf", &x);
    printf("Enter the value of Y: ");
    scanf(" %lf", &y);
    printf("Please choose a function below:\n addition(1) subtraction(2) multiplication(3) division(4) power(5) square root(6)\n ");
    scanf(" %i", &answer);
    switch(answer){
    case 1:
    result1 = x + y;
    printf("Answer: %.2lf", result1);
    break;
    case 2:
    result1 = x - y;
    printf("Answer: %.2lf", result1);
    break;
    case 3:
    result1 = x * y;
    printf("Answer: %.2lf", result1);
    break;
    case 4:
    result1 = x / y;
    printf("Answer %.2lf", result1);
    break;
    case 5:
    result1 = pow(x, y);
    printf("Answer: %.2lf", result1);
    break;
    case 6:
    result1 = sqrt(x);
    result2 = sqrt(y);
    printf("Answer X: %.2lf\nAnswer Y: %.2lf", result1, result2);
    break;
    default:
    printf("This is not a valid function!");
   }
   printf("\nWould you like to continue? (Y) (N)");
   scanf(" %c", &l);
   l = toupper(l);
   }
}