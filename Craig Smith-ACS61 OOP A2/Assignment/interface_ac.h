///Craig Smith - ACS61
///OOP ASSIGNMENT 2
/// Declaration of Interface Class
#if !defined INTERFACE_AC_H
#define INTERFACE_AC_H

using namespace std;
class interfaces
{
public:
    bool validate_userID(double user_id, int user_pin);
    float pause_method(int option);
private:
    int dm_userid;
    int dm_userpin;
    int dm_option;
};
#endif

///Craig Smith
