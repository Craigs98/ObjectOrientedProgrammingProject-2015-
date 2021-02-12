///Craig Smith - ACS61
///OOP ASSIGNMENT 2
#include <iostream>
#include <iomanip>
#include "new_employee_ac.h"
#include "new_employee_ac.cpp"
#include "gross_ac.h"
#include "gross_ac.cpp"
#include "user_ac.h"
#include "user_ac.cpp"
#include "process_payroll_ac.h"
#include "process_payroll_ac.cpp"
#include "interface_ac.h"
#include "interface_ac.cpp"
#include "bank_ac.h"
#include "bank_ac.cpp"
using namespace std;

int hours_worked[4] = {40,40,35,46};
int hourly_rate[4] = {22,22,30,28};
float health [4] = {10,23,80,10};
float union_sub[4] = {25,25,25,0};
float tax_credit[4] ={62.25,50.67,59.8,65.8};


int user_id,user_pin,option,yes_no_user;
int main()
{
    cout << "________________________" << endl;
    cout << "___________________________________" << endl; ///Login Screen
    cout << "*                                 * " << endl;
    cout << "*           LOGIN                 * " << endl;
    cout << "___________________________________" << endl;
    {cout << "___________________________________" << endl;
start:
        cout<<"*      Key in user ID"<<endl;
        cin>>user_id;
        cout<<"*      Key in User PIN"<<endl;
        cin>>user_pin;
        cout<<endl;
    }
    {
    class interfaces user1;

        cout << "___________________________________" << endl; /// Option Screen
        cout << "          Pause Program " << endl;
        cout << "Process additional transactions    1" << endl;
        cout << "Exit                               2" << endl << endl;

        cin>> option;

        cout << "___________________________________" << endl;


cout <<setw(28)<<"Payslip"<<endl;
gross_pay[0] = payslip_object1.get_gross_method( hourly_rate[0], hours_worked[0]);
paye[0] = payslip_object.paye(gross_pay[0]);
prsi[0] = payslip_object.prsi(gross_pay[0]);
usc[0]  = payslip_object.usc( gross_pay[0]);

union_pay[0]=union_sub[0];
insurance[0]=health[0];
netpay[0]= payslip_object1.netpay_method (emp_no[0],gross_pay[0], usc[0],paye[0], prsi[0],insurance[0], union_pay[0], eeprsi[0], credit[0]);
payslip_object.display_payslip(emp_no[0],gross_pay[0], usc[0],paye[0], prsi[0], insurance[0], union_pay[0], eeprsi[0], credit[0],netpay[0]);
 cout <<"__________________________" << endl;

{
cout<<"*"<<emp_no[i]<<setw(10)<<gross_pay[i]<<setw(10)<<netpay[i]<<" *"<<endl;

}
 cout << "********************************************"<<endl;
cout << "* Bank Reporting System                    *"<< endl; ///Bank reporting
cout << "* Closing Balances                         *"<< endl;
cout << "*                                          *" << endl;
cout << "* Account Number "<<setw(10)<<"NET PAY                   *"<<endl;

class bank_class account1( account_no[0], 0 ) ;
class bank_class account2( account_no[1], 0 ) ;
class bank_class account3( account_no[2], 0 ) ;
class bank_class account4( account_no[3], 0 ) ;

    account1.deposit_method( netpay[0] ) ;
    account2.deposit_method( netpay[1] ) ;
    account3.deposit_method( netpay[2] ) ;
    account4.deposit_method( netpay[3] ) ;

    account1.display_ac_details() ;
    account2.display_ac_details() ;
    account3.display_ac_details() ;
    account4.display_ac_details() ;
cout << "********************************************"<<endl;
}
///Craig Smith