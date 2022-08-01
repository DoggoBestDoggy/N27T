#include <stdio.h>
#include <stdlib.h>
#include "user.h"

void display_user(t_user *ntr)
{
    printf("Name: %s\n", ntr->name);
    printf("Mail: %s\n", ntr->mail);
    printf("Argent: %d\n", ntr->money);
}

void clear_user(t_user *ntr)
{
    free(ntr);
}