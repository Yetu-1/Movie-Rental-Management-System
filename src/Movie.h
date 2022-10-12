/**
 * @file    Movie.h
 * @author  David Salihu 
 * @brief 
 * @date    10-10-2022
 */

#ifndef SRC_MOVIE_H_
#define SRC_MOVIE_H_

#include <string>
#include "EnumDefinitions.h"

class Movie
{
private:
    uint8_t rating;
    uint16_t price;
public:
    std::string name;
    MOVIE_GENRE genre[3];
    std::string plot_des;
    uint8_t NO_INSTOCK;
    STOCK_STATUS status;

};
#endif //SRC_MOVIE_H_