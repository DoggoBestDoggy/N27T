#include <stdio.h>

typedef struct s_user

{
    char *name;
    char *mail;
    int money;
} t_user;

void display_user(t_user *);
void clear_user(t_user *);