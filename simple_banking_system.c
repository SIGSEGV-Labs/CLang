#include<stdio.h>

int main()
{
    char transc[30][50];
    int x,j=0,i;
    float balance=0,amount=0;

    printf("====== WELCOME TO MINI BANK ========");
    do
    {
        printf("\n1.CHECK BALANCE.\n2.DEPOSIT\n3.WITHDRAW.\n4.MINI STATEMENT.\n5.EXIT.");
        printf("\nchoose any option : \n");
        scanf("%d",&x);

        if(x==1)
        {
            printf("YOUR CURRENT BALANCE : %.2f\n",balance);
        }

        else if(x==2)
        {
            printf("\nenter amount for deposit : ");
            scanf("%f",&amount);
            balance+=amount;
            printf("\nYOUR CURRENT BALANCE : %.2f\n",balance);
            sprintf(transc[j++], "DEPOSITED : %.2f\n", amount);
        }
        else if(x==3)
        {
            printf("\nenter amout to withdraw : ");
            scanf("%f",&amount);
            balance-=amount;
            printf("\nYOUR CUURENT AMOUNT : %.2f",balance);
            sprintf(transc[j++], "WITHDRAWN : %.2f\n", amount);
        }
        else if(x==4)
        {
            printf("MINI STATEMENT\n\n");
            for(i=0;i<j;i++)
            {
                printf("%s",transc[i]);
            }

        }
        else
        {
            printf("\nEXIT\n");
        }
    }
    while(x!=5);
    return 0;
}