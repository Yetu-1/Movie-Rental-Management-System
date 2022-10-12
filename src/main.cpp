/*
 * Project Blockbuster
 * Description: Movie Rental Management System
 * Author: David Salihu
 * Date: 9 October'22
 * Edit: David Salihu; 9th october, 2022
 */

#include <stdio.h>
#include <iostream>
#include "main.h"

CUSTOMER_ACCOUNT new_account;

int main()
{
    //new_account.name = "David Salihu";
    new_account.rank = GOLD;
    new_account.email = "davidsalihu19@gmial.com";
    new_account.shipping_address = "Akure, Ondo State, Nigeria";

    new_account.printProfile();
    return 0;
}