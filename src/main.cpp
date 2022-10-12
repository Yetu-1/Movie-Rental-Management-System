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
Movie new_movie;
int main()
{
    //new_account.name = "David Salihu";
    new_account.rank = GOLD;
    new_account.email = "davidsalihu19@gmial.com";
    new_account.shipping_address = "Akure, Ondo State, Nigeria";

    new_account.printProfile();
    std::cout<<'\n';
    new_movie.name = "EDGE OF TOMMOROW";
    new_movie.genre = "ACTION";
    new_movie.no_in_stock = 3;
    new_movie.rating = 8;
    new_movie.status = AVAILABLE;
    new_movie.price = 10;
    new_movie.plot_des =  "With the help of warrior Rita Vrataski, Major William Cage has to save Earth and the human race from an alien species, after being caught in a time loop.";

    std::string movie = new_movie.getRecord();
    std::cout<<movie;
    std::cout<<'\n';

    new_movie.printRecord();

    return 0;
}