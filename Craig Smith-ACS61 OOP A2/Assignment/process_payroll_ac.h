///Craig Smith - ACS61
///OOP ASSIGNMENT 2
///Declararion of Payroll Class
#if !defined PROCESS_PAYROLL_AC_H
#define PROCESS_PAYROLL_AC_H
#include "gross_ac.h"
#include "gross_ac.cpp"


using namespace std;

{
 public:
    float netpay_method (int emp_no_p,float gross_p, float usc,float paye, float prsi,float insurance,float union_pay,float eeprsi, float credit);
    void display_payslip(float emp_no,float gross_p, float usc,float paye, float prsi,float insurance,float union_pay,float eeprsi, float credit,float net_pay);                                                                                        ///Craig Smith
    float basic_pay(float hours_p, float rate_p);
    float prsi (float gross_p);
    float paye (float gross_p);
    float usc (float gross_pay);

 private:
    float dm_health;
    int dm_employee_no;
    float dm_gross;
    float  dm_usc;
    float dm_paye;
    float dm_prsi;
    float  dm_vhi;
    float  dm_eeprsi;
    float dm_credit;
    float  dm_insurance;
    float  dm_union;
    float dm_netpay;
};
#endif


  ///Craig Smith