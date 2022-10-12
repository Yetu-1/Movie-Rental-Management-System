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
CUSTOMER_ACCOUNT account;
Movie movie;

int main()
{
    account = createNewAccount();
    account.printProfile();
    std::cout<<"\n\n";

    movie = addNewMovie();

    std::string movie_des = movie.getRecord();
    std::cout<<movie_des;
    std::cout<<'\n';

    movie.printRecord();
    std::cout<<"\n\n";

    account.account_level = 6;
    account.updateRank();

    account.printProfile();

    return 0;
}
