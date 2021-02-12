///Craig Smith - ACS61
///OOP ASSIGNMENT 2
/// Declaration of Gross Class
#if !defined GROSS_AC_H
#define GROSS_AC_H
using namespace std;
/// PAYROLL CLASS WITH ONE METHOD FOR BASIC PAY

/// STEP 1 CREATE A CLASS
class gross_pay_class
{
/// DECLARING METHODS AND DATA MEMBERS
public:
        float basic_pay(float hours_p, float rate_p);
        float overtime ( float hours_p, float rate_p);
        float weekly_salary (float annual_salary);
        void display_basic_pay();
private: /// DATA MEMBERS
        float dm_hours;
        float dm_rate;
        float dm_gross;
        float dm_overtime;
        float dm_annual_salary;
        float dm_weekly_salary;


};
#endif




///Craig Smith














