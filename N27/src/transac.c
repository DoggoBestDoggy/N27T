#include <stdio.h>
#include "account.h"
#include "user.h"

int deposit(t_user *user, int amount)
{
    user->money += amount;
    printf("Money: %i\n", user->money);
    return 0;
}

int withdraw(t_user *user, int amount)
{
    if (amount > user->money)
    {
        printf("Insufficiency Ballance\n");
        return 1;
    }

    user->money -= amount;
    printf("Money: %i\n", user->money);
    return 0;
}