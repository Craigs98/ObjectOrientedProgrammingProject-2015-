///Craig Smith - ACS61
///OOP ASSIGNMENT 2
///bank Class
#pragma once
#include <iostream>
#include <iomanip>
#include "bank_ac.h"



using namespace std ;
bank_class::bank_class()
 dm_netpay =0.0;
bank_class::bank_class(int acc_no, double weekly_netpay)
{
  dm_acc_number = acc_no ;
  dm_netpay = weekly_netpay ;
}
void bank_class::deposit_method(float amount)///Formula for deposit method
void bank_class::display_ac_details()///This is displaying the Bank reporting System.



///Craig Smith