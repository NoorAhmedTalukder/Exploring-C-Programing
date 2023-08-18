// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int year;


printf("Enter a year:");
    scanf("%d",&year);


if((year%400==0)||(year%100!=0)&&(year%4==0)){
  printf("%d is a Leap Year.",year);
}  


else{
    printf("%d is not a Leap year.",year);     
}
}