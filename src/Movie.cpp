/**
 * @file    Movie.cpp
 * @author  David Salihu
 * @date    09-10-2022
 */

#include "Movie.h"

std::string movie_status[2] = {"AVAILABLE", "SOLD OUT"};

Movie::Movie()
{
    name = "UNDEFINED";
    genre = "UNDEFINED";
    plot_des =  "UNDEFINED";
    no_in_stock  = 0;
    status = SOLD_OUT;
    rating = 0;
    price = 0;
    move_id = 0;
}

std::string Movie::getRecord()
{
    std::string s = std::to_string(move_id) + ", " + name + ", "  + genre + ", " + std::to_string(price) + ", " + movie_status[status] + ", " + std::to_string(no_in_stock) + "\n";
    return s;
}

void Movie::printRecord()
{
    std::cout<<"NAME:    "<<name<<'\n';
    std::cout<<"GENRE:   "<<genre<<'\n';
    std::cout<<"PRICE:   "<<"$"<<price<<'\n';
    std::cout<<"STATUS:  "<<movie_status[status]<<'\n';
    std::cout<<"STOCK:   "<<no_in_stock<<'\n';
    std::cout<<"PLOT:    "<<plot_des<<'\n';
}

Movie::~Movie(){};