#include <stdio.h>
#include <stdlib.h>
#include "user.h"
#include "transaction.h"

int main()
{
    t_user *desc = malloc(sizeof(t_user));
    desc->name = "Jerome";
    desc->mail = "rigoni_j@etna-alternance.net";
    desc->money = 10000;
    display_user(desc);
    clear_user(desc);
    transactions();

    return 0;
}