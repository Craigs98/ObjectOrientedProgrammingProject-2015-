///Craig Smith - ACS61
///OOP ASSIGNMENT 2
/// Declaration of User Accounts Class

#if !defined USER_AC_H
#define USER_AC_H


class user_accounts_class
{
public:
    user_accounts_class(int user_id, int user_pin);
    void user_accounts_display();
private:
    int dm_userid;
    int dm_userpin;

};

#endif

