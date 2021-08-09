#include <stdio.h>
#include <stdlib.h>

main(){

printf("Give a number : "); 
int n,mod;
scanf("%d",&n); 
int div = n; 
while (div >= 1)    
      { 
       
mod = div%10; 
       
printf("%d ", mod); 
       
div = div/10; 
 
  } 
printf("\n"); 
 
} 
