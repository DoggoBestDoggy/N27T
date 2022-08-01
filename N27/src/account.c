#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "account.h"
#include "user.h"

void delay(int i)
{
    clock_t start, end;
    start = clock();
    while (((end = clock()) - start) <= i * CLOCKS_PER_SEC)
        ;
}

char generate_key_iban()
{
    srand(time(NULL));
    int random_num;

    while ((random_num < 48 || random_num > 57) && random_num < 65)
    {
        random_num = rand() % 91;
    }
    return random_num;
}

char *get_iban_quadruplet(char *iban)
{
    iban[0] = ' ';
    delay(1);
    iban[1] = generate_key_iban();
    delay(1);
    iban[2] = generate_key_iban();
    delay(1);
    iban[3] = generate_key_iban();
    delay(1);
    iban[4] = generate_key_iban();
    iban[5] = '\0';

    return iban;
}

char *generate_key_control(char *iban)
{

    srand(time(NULL));
    int security_key = rand() % 100;

    if (security_key < 10)
    {
        snprintf(iban, 33, "FR%d%d", 0, security_key);
    }
    else
    {
        snprintf(iban, 33, "FR%d", security_key);
    }
    return iban;
}

t_account *create_account()
{
    char iban[16];
    char quadruplet[6];
    char *iban_key = generate_key_control(iban);

    strcat(iban_key, get_iban_quadruplet(quadruplet));
    strcat(iban_key, get_iban_quadruplet(quadruplet));

    t_account *account = malloc(sizeof(t_account));
    account->money = 0;
    account->iban = iban_key;

    return account;
}
