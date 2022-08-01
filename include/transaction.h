#include <stdlib.h>
#include <stdio.h>

unsigned long amount = 10000, deposit, withdraw;

int choice, k;

char transaction = 'y';

void transactions()

{

    do

    {

        printf("********Welcome to ATM Service************** \n");

        printf("1. Check Balance \n");

        printf("2. Withdraw Cash \n");

        printf("3. Deposit Cash \n");

        printf("4. Quit \n");

        printf("********************************************* \n\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)

        {

        case 1:

            printf("\n YOUR BALANCE IN Rs : %lu ", amount);

            break;

        case 2:

            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

            scanf("%lu", &withdraw);

            if (withdraw % 1 != 0)

            {
            }

            else if (withdraw > (amount - 0))

            {

                printf("\n INSUFFICENT BALANCE");
            }

            else

            {

                amount = amount - withdraw;

                printf("\n\n PLEASE COLLECT CASH");

                printf("\n YOUR CURRENT BALANCE IS %lu", amount);
            }

            break;

        case 3:

            printf("\n ENTER THE AMOUNT TO DEPOSIT");

            scanf("%lu", &deposit);

            amount = amount + deposit;

            printf("YOUR BALANCE IS %lu", amount);

            break;

        case 4:

            printf("\n THANK U USING ATM");

            break;
        }

        printf("\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

        fflush(stdin);

        scanf("%c", &transaction);

        if (transaction == 'n' || transaction == 'N')

            k = 1;

    } while (!k);
}