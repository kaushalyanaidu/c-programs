#include <stdio.h>

int main()
{
    int Price, Choice;
    char Food [20];
    printf("Enter number between 1 and 5:");
    scanf("%d", &Choice);
    switch(Choice){
        case 1: printf("Food Item - pizza \n Price - Rs239"); 
        break;
        case 2: printf("Food Item - burger \n Price - Rs129");
        break;
        case 3: printf("Food Item - pasta \n Price - Rs179");
        break;
        case 4: printf("Food Item - french fries \n Price - Rs99");
        break;
        case 5: printf("Food Item - sandwich \n Price - Rs149");
        break;
		default:
		 printf("Invalid choice");
       
    }
   
   
    return 0;
}
