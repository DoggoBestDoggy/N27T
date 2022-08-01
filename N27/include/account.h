#ifndef ACCOUNT
#define ACCOUNT
#include <stdio.h>

typedef struct s_account
{
    char *iban;
    int money;
} t_account;

void delay(int i);
char generate_key_iban();
char *get_iban_quadruplet(char *iban);
char *generate_key_control(char *iban);
t_account *create_account();

#endif