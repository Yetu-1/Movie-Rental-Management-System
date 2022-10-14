/**
 * @file    Movie.h
 * @author  David Salihu 
 * @brief 
 * @date    10-10-2022
 */

#ifndef SRC_MOVIE_H_
#define SRC_MOVIE_H_
#include <iostream>
#include <string>
#include "EnumDefinitions.h"

class Movie
{
public:
    std::string name;
    std::string genre;
    std::string plot_des;
    uint16_t no_in_stock;
    STOCK_STATUS status;
    uint16_t rating;
    uint16_t price;
    uint16_t movie_id;

    Movie();
    ~Movie();
    std::string getRecord();
    void printRecord();
};

Movie addNewMovie();
void editMovieProperties();
#endif //SRC_MOVIE_H_
