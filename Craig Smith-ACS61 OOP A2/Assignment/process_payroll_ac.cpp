///Craig Smith - ACS61
///OOP ASSIGNMENT 2
///payroll Class
#include <iostream>
#include <iomanip>
#include "process_payroll_ac.h"
using namespace std;
payslip::payslip(){dm_gross =0;dm_overtime_pay =0;dm_taxable_pay =0;}float payslip::get_tax_pay(float gross_p, float overtime){dm_gross = gross_p;dm_overtime_pay = overtime;dm_taxable_pay = dm_gross + dm_overtime_pay;return dm_taxable_pay;}
float payslip::get_gross_method(float rate, float hours)

{

       dm_hours = hours;
        dm_rate = rate;


           dm_gross = dm_hours * dm_rate;
           return dm_gross;

}

float payslip::prsi(float gross_p)
{
    dm_gross = gross_p;
     dm_prsi=gross_p * .04;
     return dm_prsi;
}
float payslip::paye(float gross_p)

{

dm_gross = gross_p;
if (dm_gross >650)

{
dm_paye=((gross_p - 650 )*.4) + 130;
}
else
{
    (dm_paye = dm_gross * .2);
}
return dm_paye;
}

float payslip::usc(float gross_p)                       ///Craig Smith
{
dm_gross = gross_p;
if (dm_gross <= 231)
{
dm_usc = dm_gross * .015;
}
else if (dm_gross >231 && gross_p <=338)
{
 dm_usc=((gross_p - 231)* .035 ) + 3.47;
}
else if (gross_p > 338 && dm_gross <= 1347)
{
dm_usc=(( dm_gross - 338) * .07);

}
else
{
dm_usc=(( gross_p-1347)*.08)+(3.47+3.75+70.63);
}
return dm_usc;
}

float payslip::netpay_method(int emp_no_p,float gross_p, float usc,float paye, float prsi,float insurance,float union_pay,float eeprsi, float credit)
{

    dm_employee_no= emp_no_p;
    dm_gross= gross_p;
    dm_usc = usc;
    dm_paye = paye;
    dm_prsi = prsi;


    dm_credit =credit;
    dm_insurance =insurance;
    dm_union = union_pay;


 dm_netpay =dm_gross-(dm_paye + dm_prsi + dm_usc);

{
return dm_netpay;
}

}

void payslip::display_payslip(float emp_no,float gross_p, float usc,float paye, float prsi,float insurance,float union_pay,float eeprsi, float credit,float net_pay)
{

     dm_gross= gross_p;
    dm_usc = usc;
    dm_paye = paye;
    dm_prsi = prsi;

dm_employee_no = emp_no;
    dm_credit =credit;
    dm_insurance =insurance;
    dm_union = union_pay;
    dm_netpay =net_pay;



                cout << "********************************************" <<endl;
                cout << "*                 Payslip                  *" << endl;
                cout << "* Employee      "<<dm_employee_no<<"                        *" << endl;
                cout << "*                                          *" << endl;
                cout << "*Gross Pay"  <<fixed<<setprecision(2)<<setw(30) << dm_gross<<"   *"         << endl;
                cout << "*        PAYE "<< setw(20) <<          dm_paye <<"         *"           << endl;
                cout << "*        PRSI" <<setw(20) <<          dm_prsi   <<"          *"        << endl;
                cout << "*        USC " <<setw(20) <<         dm_usc      <<"          *"     << endl;
                cout << "*        UNION " <<setw(18) <<         dm_union  <<"          *"         << endl;
                cout << "*        Health Insurance "<<fixed<<setprecision(0)<<setw(7)  <<         dm_insurance  <<"          *"        << endl;                                         ///Craig Smith




                cout << "*                                          *"<< endl;
                cout << "*        Net Pay"<<fixed<<setprecision(2)<< setw(25) << dm_netpay   <<"  *"        << endl;
                cout << "********************************************"   << endl;





}
void payslip::display_gross_report(int employee_no, float gross_p,float net_pay)
{

        cout << dm_employee_no << fixed << setprecision(2)
        << setw(15) << dm_gross << setw(14) << dm_netpay<< endl;                                                                                                    ///Craig Smith
    }




