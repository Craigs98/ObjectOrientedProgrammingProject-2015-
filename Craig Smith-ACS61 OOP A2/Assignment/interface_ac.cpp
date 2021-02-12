///Craig Smith - ACS61
///OOP ASSIGNMENT 2
/// Interface Class
#pragma once
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "INTERFACE_ac.h"
using namespace std ;

bool interfaces::validate_userID(double user_id, int user_pin)
{
    dm_userid = user_id;
    dm_userpin = user_pin;
    if( dm_userid == 1234 && dm_userpin==999)
    {

        return true;
    }
    else if (dm_userid == 1607 && dm_userpin ==1998)
    {     cout << "___________________________________" << endl;                                                                     ///Craig Smith
        cout<<"       Valid User"<<endl;
        return true;

    }

    else if (dm_userid == 102 && dm_userpin ==801)
    {
        return true;

    }


    else
    {

        cout <<"Invalid User"<<endl;
        exit(EXIT_FAILURE);
        return false;
    }

}
float interfaces::pause_method(int option)
{
    dm_option = option;
    if (dm_option != 1 && dm_option != 2)
    {

        cout << "Enter your option 1 , 2"<<endl;
    }
    if (dm_option == 2)
    {
        cout << "Goodbye " << endl;
        exit (EXIT_FAILURE); /// This is closing the program
    }

    if (dm_option > 2)
    {
       cout << "Invalid input " << endl;                                                                                                            ///Craig Smith
       exit (EXIT_FAILURE);

    }
}
