// Online C compiler to run C program online
#include <stdio.h>

 main() {
    int f,l,sum=0;
    
    
 printf("Enter first number of series:");  
 scanf("%d",&f);   

 printf("Enter last number of series:");  
 scanf("%d",&l);   
    
    
for (int i=f;i<=l;i++){
    sum=sum+i;
    
} 
    printf("\nsum=%d",sum);


}