///Craig Smith - ACS61
///OOP ASSIGNMENT 2
/// User Accounts Class
#include <iostream>
#include <iomanip>
#include "user_ac.h"



using namespace std ;

user_accounts_class::user_accounts_class(int user_id, int user_pin)
{
    dm_userid = user_id;
    dm_userpin = user_pin;
}
void user_accounts_class::user_accounts_display()
{
    cout <<  dm_userid << fixed << setprecision(2)
         << setw(17) << dm_userpin<<endl;
}












