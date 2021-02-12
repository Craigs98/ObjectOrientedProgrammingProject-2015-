///Craig Smith - ACS61
///OOP ASSIGNMENT 2
/// Declaration of bank Class
#include <iostream>
#include <iomanip>
#if !defined BANK_AC_H
#define BANK_AC_H


class bank_class  /// This is the base class.{	public:
    bank_class();
    bank_class(int acc_no, double weekly_netpay); 	 void display_ac_details(); 	 void deposit_method(float amount);private:  int dm_acc_number;double dm_netpay;} ;

#endif

///Craig Smith
