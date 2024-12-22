#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void){
char unit;
double temp;
char answer;
printf("What is the unit of measurement? (C) (F) ");
scanf("%c", &unit);
unit = toupper(unit);
if(unit == 'C'){
  printf("Chosen unit of Celsius\n");
  printf("What is the temperture?");
scanf("%lf", &temp);
printf("Do you want to convert the temperture? (Y) (N) ");
scanf(" %c", &answer);
answer = toupper(answer);
if(answer == 'Y'){
temp = 1.8 * temp + 32;
printf("Converted temp is: %lf", temp);
}
else{
  printf("");
}
}
else if (unit == 'F'){
  printf("Chosen unit Fahrenheit\n");
   printf("What is the temperture?");
scanf("%lf", &temp);
printf("Do you want to convert the temperture? (Y) (N) ");
scanf(" %c", &answer);
answer = toupper(answer);
if(answer == 'Y'){
temp = (temp - 32) * 5/9;

printf("Converted temp is: %lf", temp);
}
else{
  printf("");
}
}
}