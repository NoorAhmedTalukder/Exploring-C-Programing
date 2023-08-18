//// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;


printf("Enter the number of exam:");
    scanf("%d",&a);


if((a>=0)&&(a<33)){
  printf("You ARE Fail.",a);
}  


else if((a>=33)&&(a<=45)){
  printf("You Have Got 3rd DIVISION.");
}

  
else if((a>=46)&&(a<=59)){
  printf("You Have Got 2nd DIVISION.");
}

else if((a>=60)&&(a<=100)){
  printf("You Have Got 1st DIVISION .");
}
else{
      printf("You Enetr wrong input");

}

}





