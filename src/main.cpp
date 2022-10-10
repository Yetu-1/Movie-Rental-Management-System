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

ACCOUNT new_account;

int main()
{
    new_account.name = "David Salihu";
    new_account.rank = GOLD;
    new_account.setEmail("davidsalihu19@gmial.com");
    new_account.setShippingAddress("Akure, Ondo State, Nigeria");

    new_account.printProfile();
    return 0;
}