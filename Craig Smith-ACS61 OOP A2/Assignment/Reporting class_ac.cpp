///Craig Smith - ACS61
///OOP ASSIGNMENT 2
///Reporting Class
#include <iostream>
#include <iomanip>
using namespace std ;
class reporting
{
public:
reporting();
reporting(int emp_number, float g_pay, float paye, float prsi, float usc, float union_subs, float h_ins, float tax_credit);
void payslip();
void print_gross_to_net_report(int heading_switch);
void print_gross_to_net_report(int employee_number, float gross_pay, float net_pay, int heading_switch);
private:
float dm_g_pay, dm_paye, dm_prsi, dm_usc, dm_union_subs, dm_h_ins, dm_net_pay, dm_gross, dm_tax_credit,dm_net;
int dm_emp, dm_switch;
};
void reporting::print_gross_to_net_report(int employee_number, float gross_pay, float net_pay, int heading_switch)
{
dm_switch = heading_switch;
dm_emp = employee_number;
dm_gross = gross_pay;
dm_net = net_pay;
if(dm_switch == 1){
cout << "________________________________________" << endl;
cout << "|" << " Gross to Net Report " << " |" << endl;
cout << "|________________________________________" << endl;
cout << "|" << setw(10) << "Emp No" << setw(10) << "Gross "<< setw(10) << "Net " << " |" << endl;}
cout << "|" << setw(10) << dm_emp << setw(10) << dm_gross << setw(10) << dm_net << " |" << endl;
}
reporting::reporting(int emp_number, float g_pay, float paye, float prsi, float usc, float union_subs, float h_ins,float tax_credit)            ///Craig Smith
{
dm_emp = emp_number;
dm_g_pay = g_pay;
dm_paye = paye;
dm_prsi = prsi;
dm_usc = usc;
dm_union_subs = union_subs;
dm_h_ins = h_ins;
dm_tax_credit = tax_credit;
dm_net_pay = dm_g_pay - (dm_paye + dm_prsi+ dm_usc);
}
void reporting::payslip()
{
cout << "________________________________________" << endl;
cout << "*" << " Payslip *" << endl;
cout << "*_______________________________________" << endl;
cout << "* Employee " << right << setw(6) << dm_emp << " " << setw(16) << "                      *"<< endl;
cout << "* Gross Pay " << fixed << setprecision(2) << right << setw(8) << dm_g_pay << setw(21) << "              *" << endl;                                ///Craig Smith
cout << "* PAYE " << right << setw(7) << dm_paye << setw(15) << "                          *" << endl;
cout << "* PRSI " << right << setw(7) << dm_prsi << setw(16) << "                          *" << endl;
cout << "* USC " << right << setw(7) << dm_usc << setw(16) << "                           *" << endl;
cout << "* UNION " << right << setw(7) << dm_union_subs << setw(26) << "                   *" << endl;
cout << "* Health Ins" << right << setw(7) << dm_h_ins << setw(16) << "                     *" << endl;
cout << "*NET PAY " << right << setw(9) << dm_net_pay << setw(15) << "                      *" << endl;
cout << "*________________________________________" << endl << endl;
}
class process_payroll
{
public:
float get_taxable_pay(float basic_pay, float overtime);
float get_prsi(float taxable_pay);
float get_usc(float taxable_pay);
float get_paye(float taxable_pay);
private:
float dm_gross_pay;
float dm_basic_pay;
float dm_ot_pay;
float dm_taxable_pay;
float dm_usc;
float dm_paye;
float dm_prsi;
};
class new_employee : public process_payroll
{
public:
float update_employee(int employee_number, float std_weekly_hours, float hourly_rate);
new_employee();
private:
float dm_std_hrs_worked, dm_hrly_rate;
int dm_emp_no;
float dm_weekly_basic;
};
new_employee::new_employee()
{
dm_emp_no = 0;
dm_std_hrs_worked = 0;
dm_hrly_rate = 0;
}
float new_employee::update_employee(int employee_number, float std_weekly_hours, float hourly_rate)
{
dm_emp_no = employee_number;
dm_std_hrs_worked = std_weekly_hours;
dm_hrly_rate = hourly_rate;
dm_weekly_basic = dm_std_hrs_worked * dm_hrly_rate ;
return dm_weekly_basic;
}
float process_payroll::get_taxable_pay(float basic_pay, float overtime)
{
dm_basic_pay = basic_pay;
dm_ot_pay = overtime;
dm_taxable_pay = dm_basic_pay + dm_ot_pay;
return dm_taxable_pay;
}
float process_payroll::get_prsi(float gross_pay)
{
dm_gross_pay = gross_pay;
dm_prsi = dm_gross_pay * .04;
return dm_prsi;
}
float process_payroll::get_paye(float gross_pay)
{
dm_gross_pay = gross_pay;
if (dm_gross_pay > 650)
{dm_paye = ((dm_gross_pay -650)*.4) + 130;}
else
{dm_paye = dm_gross_pay * .2;}
return dm_paye;
}
float process_payroll::get_usc(float gross_pay)
{
dm_gross_pay = gross_pay;
if (dm_gross_pay <= 231)
{dm_usc = dm_gross_pay *.015;}
else if (dm_gross_pay > 231 && dm_gross_pay <= 338)
{
dm_usc = ((dm_gross_pay - 231) * .035 ) + 3.47;
}
else if (dm_gross_pay > 338 && dm_gross_pay <= 1347)
{
dm_usc = ((dm_gross_pay - 338) * .07 ) + (3.47 + 3.75);
}
else
{
dm_usc = ((dm_gross_pay - 1347) * .08 ) + (3.47 + 3.75 + 70.63);
}
return dm_usc;
}
float paye,usc,gross_pay;
class gross_pay_class
{
public:
float basic_pay(float hours_p, float rate_p);
float weekly_ot(float hours_p, float rate_p);
float weekly_gross_taxable(float b_pay, float w_ot);
float salaried_weekly_gross_taxable(float annual_salary);
private:
float dm_hours, dm_rate, dm_basic_pay, dm_ot_pay, dm_weekly_gross_taxable;
};
///polymorphism because of the overloaded function
float basic_hours[4] = {40,40,35,46};
float over_time_hours[4] = {0,0,0,0};

float overtime[4] = {0,0,0,0};
int employee_number[4] = {101, 102, 103, 104};
int standard_hours[4] = {40, 50, 50, 51};
int rate[4] = {22, 22, 24, 26};
float weekly_srcop[4] = {630.77, 630.77, 630.77, 630.77};
float weekly_tax_credit[4] = {62.25, 50.67, 59.80, 65.80};
int union_subs[4] = {25, 25, 25, 0};
int health_ins[4] = {10, 23, 80, 10};
int bank_account_number[4] = {80045001, 80045003, 80045003, 80045004};
int basic[4];
float PAYE[4];
float prsi[4];
float USC[4];
int taxable_pay[4];
main()
{
class new_employee employee[4];
for (int i= 0;i<4;i++)
{
basic[i] = employee[i].update_employee(employee_number[i],standard_hours[i],rate[i]) ;
taxable_pay[i] = employee[i].get_taxable_pay(basic[i],overtime[i]) ;
PAYE[i] = employee[i].get_paye(taxable_pay[i]);
USC[i] = employee[i].get_usc(taxable_pay[i]);
prsi[i] = employee[i].get_prsi(taxable_pay[i]);
cout << i+1 << " " << taxable_pay[i] << " " << PAYE[i] << endl;
}
///reporting(int emp_number, float g_pay, float paye, float prsi, float usc, float union_subs, float h_ins, float tax_credit);
class reporting report1(employee_number[0],taxable_pay[0],PAYE[0],prsi[0],USC[0],union_subs[0],health_ins[0],weekly_tax_credit[0]);
class reporting report2();
report1.payslip();
report1.print_gross_to_net_report(employee_number[0],taxable_pay[0],577.64,1);
report1.print_gross_to_net_report(102,1100,741.46,0);
report1.print_gross_to_net_report(103,1200,834.72,0);
report1.print_gross_to_net_report(104,1326,914.6,0);
cout << "__________________________________________" << endl;
}
