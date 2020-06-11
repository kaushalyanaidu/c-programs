#include <stdio.h>

int main()
{
    int Choice, i, j;
    printf("Enter number of Stairs: ");
    scanf("%d", &Choice);
   
    for(i = 1; i <= Choice; i++){
       
      for(j = 1; j <= i; j++){
       printf("01");  
      }
     printf("\n");  
    }
    return 0;
}


