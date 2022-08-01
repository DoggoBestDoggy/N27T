#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "user.h"
#include "account.h"
#include "transac.h"

int main()
{
    t_user *user = create_user("Jerome", "jerome.rigoni@ena-alternance.net");
    display_user(user);
    display_account(user);
    deposit(user, 1000);
    withdraw(user, 150);
    withdraw(user, 80);
    clear_account(user);
    clear_user(user);

    return 0;
}
