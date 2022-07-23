#include<stdio.h>
#include<conio.h>
void main()
{
    int choice,qty,bill;
    printf("Press 1 for Samosa:RS 20\n");
    printf("Press 2 for Vadapav:RS 30\n");
    printf("Press 3 for burger:RS 50\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the amount of qty:");
        scanf("%d",&qty);
        bill=qty*20;
        printf("*******************\n");
        printf("YOUR BILL:%d",bill);
        break;
    case 2:
        printf("enter hte amount of qty:");
        scanf("%d",&qty);
        bill=qty*30;
        printf("*******************\n");
        printf("your bill:%d",bill);
        break;
    case 3:
        printf("enter hte amount of qty:");
        scanf("%d",&qty);
        bill=qty*50;
        printf("*******************\n");
        printf("your bill:%d",bill);
        break;
    default:
        printf("Invalid numbers:");
        break;
    }
}