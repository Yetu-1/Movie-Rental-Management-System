/*
 * Project Blockbuster
 * Description: Movie Rental Management System
 * Author: David Salihu
 * Date: 9 October'22
 * Edit: David Salihu; 9th october, 2022
 */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

#include "main.h"
CUSTOMER_ACCOUNT account;
Movie movie;
std::fstream fout;
uint32_t account_id_count = 0;
int main()
{


    fout.open("Accounts.csv", std::ios::out | std::ios::app);

    std::cout<<"Enter Customer details"<<std::endl;
    account = createNewAccount();
    addAccountToDB(account);
    account.printProfile();
    std::cout<<"\n\n";

    // movie = addNewMovie();

    // std::string movie_des = movie.getRecord();
    // std::cout<<movie_des;
    // std::cout<<'\n';

    // movie.printRecord();
    // std::cout<<"\n\n";

    account.account_level = 6;
    account.updateRank();

    account.printProfile();

    return 0;
}
void addAccountToDB(CUSTOMER_ACCOUNT new_account){
    new_account.account_id = account_id_count + 1;
    fout << new_account.account_id << ", "
         << new_account.name << ", "
         << new_account.password << ", "
         << new_account.rank<< ", "
         << new_account.email << ", "
         << new_account.shipping_address 
         << "\n";

    std::cout<<"Account Added to Database\n\n";
}
