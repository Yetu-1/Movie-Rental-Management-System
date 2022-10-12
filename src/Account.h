/**
 * @file    Account.h
 * @author  David Salihu 
 * @brief 
 * @date    9-10-2022
 */
#ifndef SRC_ACCOUNT_H_
#define SRC_ACCOUNT_H_
#include <string>
#include "Defines.h"
#include "EnumDefinitions.h"
#include "Movie.h"

std::string ranks[5] = {"BRONZE", "SLIVER", "GOLD", "PLATINUM"};

class ACCOUNT
{
public:
    std::string name;
    RANK rank;
    std::string shipping_address;
    std::string email;
    std::string password;
    uint16_t account_id;

    ACCOUNT();
    ~ACCOUNT();
    virtual void printProfile();
};

class CUSTOMER_ACCOUNT : public ACCOUNT
{
public:
    //Movie rented_movies[MAX_RENTABLE_MOVIES];
    void printProfile();
};

class ADMIN_ACCOUNT : public ACCOUNT
{
public:
    void printProfile();
};

#endif // SRC_ACCOUNT_H_