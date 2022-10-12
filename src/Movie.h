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
    uint8_t rating;
    uint16_t price;
    uint8_t move_id;

    Movie();
    ~Movie();
    std::string getRecord();
    void printRecord();
};
#endif //SRC_MOVIE_H_