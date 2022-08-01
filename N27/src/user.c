#include <stdio.h>
#include <stdlib.h>
#include "user.h"
#include "account.h"

t_user *create_user(char *name, char *email)
{
    t_user *desc = malloc(sizeof(t_user));
    desc->name = name;
    desc->mail = email;
    desc->money = 0;
    desc->account = malloc(sizeof(t_account *));
    desc->account[0] = create_account();
    return desc;
}

void display_user(t_user *user)
{
    printf("Name: %s\n", user->name);
    printf("Mail: %s\n", user->mail);
    printf("Money: %i\n", user->money);
}

void clear_user(t_user *user)
{
    free(user);
}

void display_account(t_user *user)
{
    int i = 0;
    t_account *account = user->account[i];
    printf("IBAN: %s \n", account->iban);
    printf("Money: %i \n", account->money);
}

void clear_account(t_user *user)
{
    free(user->account);
}