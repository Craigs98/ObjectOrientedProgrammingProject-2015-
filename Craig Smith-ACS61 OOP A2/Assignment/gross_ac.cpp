///Craig Smith - ACS61
///OOP ASSIGNMENT 2
///Gross Class
#pragma once
#include <iostream>
#include <iomanip>
#include "gross_ac.h"
using namespace std;
float gross_pay_class::basic_pay(float hours_p, float rate_p)
{
        dm_hours = hours_p;
        dm_rate = rate_p;


           dm_gross = dm_hours * dm_rate;


           return dm_gross;



}
float gross_pay_class::overtime(float hours_p, float rate_p)
{



    if (hours_p >40 && hours_p<=50)
    {
        return dm_overtime =(dm_hours - 40)*(dm_rate *.15);
    }
if (dm_hours >50)
{
    dm_overtime = ((dm_hours - 50)*(dm_rate *4)) + (dm_rate *1.5);
}
return dm_overtime;
}


void gross_pay_class::display_basic_pay()

{

    cout << "Basic pay based on  " << dm_hours << " hours X " << dm_rate
    << " euro hourly rate = " << dm_gross << endl ;
    cout <<"Weekly overtime="<<dm_overtime<<endl;
}
///Craig Smith
