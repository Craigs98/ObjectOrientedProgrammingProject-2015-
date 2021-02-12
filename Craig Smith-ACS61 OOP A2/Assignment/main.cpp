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
float deposit[4], overtime[4],gross_pay[4], prsi[4], basic_pay[4],usc[4],paye[4],netpay[4],insurance[4],union_pay[4],eeprsi[4], credit[4];              ///Craig Smithint emp_no [4] = {101,102,103,104};int net_pay[4];int account_no [4] = {80045001, 80045002, 80045003, 80045004};
int hours_worked[4] = {40,40,35,46};
int hourly_rate[4] = {22,22,30,28};
float health [4] = {10,23,80,10};
float union_sub[4] = {25,25,25,0};
float tax_credit[4] ={62.25,50.67,59.8,65.8};


int user_id,user_pin,option,yes_no_user;int userID[3]={1234,1607,102};int userpin[3]={999,1998,801};int overtime_r[4] = {0,0,0,0};float r;
int main()
{
    cout << "________________________" << endl;cout <<"       USERS DATA"<<endl;cout<<"User_ID      Password  "<<endl;class  user_accounts_class user1 (userID[0],userpin[0]);class  user_accounts_class user2 (userID[1],userpin[1]);class  user_accounts_class user3 (userID[2],userpin[2]);user1.user_accounts_display();user2.user_accounts_display();user3.user_accounts_display(); cout << "------------------------" << endl;
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
    class interfaces user1;         class interfaces user2;         class interfaces user3;        user1.validate_userID(user_id,user_pin);

        cout << "___________________________________" << endl; /// Option Screen
        cout << "          Pause Program " << endl;        cout << "___________________________________" << endl;         cout << " You have two options "<<endl;
        cout << "Process additional transactions    1" << endl;
        cout << "Exit                               2" << endl << endl;

        cin>> option;

        cout << "___________________________________" << endl; user1.pause_method(option);        user2.pause_method(option);        user3.pause_method(option);}
   class payslip payslip_object;   class payslip payslip_object1;   class payslip payslip_object2;   class payslip payslip_object3;   class payslip payslip_object4;

cout <<setw(28)<<"Payslip"<<endl;
gross_pay[0] = payslip_object1.get_gross_method( hourly_rate[0], hours_worked[0]);gross_pay[1] = payslip_object2.get_gross_method( hourly_rate[1], hours_worked[1]);gross_pay[2] = payslip_object3.get_gross_method( hourly_rate[2], hours_worked[2]);gross_pay[3] = payslip_object4.get_gross_method( hourly_rate[3], hours_worked[3]);
paye[0] = payslip_object.paye(gross_pay[0]);
prsi[0] = payslip_object.prsi(gross_pay[0]);
usc[0]  = payslip_object.usc( gross_pay[0]);

union_pay[0]=union_sub[0];
insurance[0]=health[0];
netpay[0]= payslip_object1.netpay_method (emp_no[0],gross_pay[0], usc[0],paye[0], prsi[0],insurance[0], union_pay[0], eeprsi[0], credit[0]);netpay[1]= payslip_object2.netpay_method (emp_no[1],gross_pay[1], usc[1],paye[1], prsi[1],insurance[1], union_pay[1], eeprsi[1], credit[1]);netpay[2]= payslip_object3.netpay_method (emp_no[2],gross_pay[2], usc[2],paye[2], prsi[2],insurance[2], union_pay[2], eeprsi[2], credit[2]);netpay[3]= payslip_object4.netpay_method (emp_no[3],gross_pay[3], usc[3],paye[3], prsi[3],insurance[3], union_pay[3], eeprsi[3], credit[3]);
payslip_object.display_payslip(emp_no[0],gross_pay[0], usc[0],paye[0], prsi[0], insurance[0], union_pay[0], eeprsi[0], credit[0],netpay[0]); cout <<"__________________________" << endl; ///Gross to net reportcout <<"*  Gross to Net Report   *"<<endl;
 cout <<"__________________________" << endl;
for(int i=0; i<4; i++)
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
