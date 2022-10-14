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
    movie_id = 0;
}

std::string Movie::getRecord()
{
    std::string s = std::to_string(movie_id) + ", " + name + ", "  + genre + ", " + std::to_string(price) + ", " + movie_status[status] + ", " + std::to_string(no_in_stock) + "\n";
    return s;
}

void Movie::printRecord()
{
    std::cout<<"NAME:    "<<name<<'\n';
    std::cout<<"GENRE:   "<<genre<<'\n';
    std::cout<<"RATING:  "<<rating<<'\n';
    std::cout<<"PRICE:   "<<"$"<<price<<'\n';
    std::cout<<"STATUS:  "<<movie_status[status]<<'\n';
    std::cout<<"STOCK:   "<<no_in_stock<<'\n';
    std::cout<<"PLOT:    "<<plot_des<<'\n';
}

Movie::~Movie(){};

Movie addNewMovie()
{
    Movie new_movie;
    std::cout<<"Enter Movie Name: ";
    getline(std::cin, new_movie.name);
    std::cout<<"Enter Genre: ";
    getline(std::cin, new_movie.genre);
    std::cout<<"Enter Amount in Inventory: ";
    std::cin>>new_movie.no_in_stock;
    std::cout<<"Enter Unit Price: ";
    std::cin>>new_movie.price;
    std::cout<<"Enter Rating: ";
    std::cin>>new_movie.rating;
    std::cout<<"Enter Plot Description: ";
    std::cin.ignore(); // bug fix for getline not working after calling "cin>>"
    getline(std::cin, new_movie.plot_des);

    new_movie.status = AVAILABLE;
    std::cout<<"Movie Added!\n\n";


    return new_movie;
}

void editMovieProperties()
{

}
