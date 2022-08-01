#ifndef USER
#define USER
#include <stdio.h>
#include "account.h"

typedef struct s_user
{
    char *name;
    char *mail;
    int money;
    unsigned int nb_account;
    t_account **account;
} t_user;

t_user *create_user(char *name, char *email);
void display_user(t_user *user);
void clear_user(t_user *user);
void display_account(t_user *user);
void clear_account(t_user *user);

#endif