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
std::fstream fin;

uint16_t account_id_count = 0;
uint16_t movie_id_count = 0;

int main()
{
    // std::cout<<"Enter Customer details"<<std::endl;
    // account = createNewAccount();
    // addAccountToDB(account);
    // account.printProfile();
    // std::cout<<"\n\n";

    std::cout<<"Enter Movie details"<<std::endl;
    movie = addNewMovie();
    addMovieToDB(movie);
    movie.printRecord();
    std::cout<<"\n\n";
    // movie = addNewMovie();

    // std::string movie_des = movie.getRecord();
    // std::cout<<movie_des;
    // std::cout<<'\n';

    // movie.printRecord();
    // std::cout<<"\n\n";
    return 0;
}
void addAccountToDB(CUSTOMER_ACCOUNT new_account)
{
    fout.open("Accounts.csv", std::ios::out | std::ios::app);

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

void addMovieToDB(Movie new_movie)
{
    fout.open("Movie.csv", std::ios::out | std::ios::app);

    new_movie.movie_id = movie_id_count + 1;
    
    fout << new_movie.movie_id << ", "
         << new_movie.name << ", "
         << new_movie.genre << ", "
         << new_movie.no_in_stock<< ", "
         << new_movie.price<< ", "
         << new_movie.rating<<", "
         << new_movie.plot_des
         << "\n";

    std::cout<<"Account Added to Database\n\n";
}

int getAccountIdCount()
{
    fin.open("Accounts.csv", std::ios::in);
    return 0;

}
