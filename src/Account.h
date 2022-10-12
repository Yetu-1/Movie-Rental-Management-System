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

std::string ranks[5] = {"BRONZE", "SLIVER", "GOLD", "PLATINUM","ADMIN"};

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
    uint8_t account_level;
    uint16_t account_balance;
    uint8_t movies_curr_rented_id[MAX_RENTABLE_MOVIES];
    //CUSTOMER_ACCOUNT();
    void printProfile();
    void rechargeAccount();
    void updateRank();
    void updateAccount();
};

class ADMIN_ACCOUNT : public ACCOUNT
{
public:
    void printProfile();
};

CUSTOMER_ACCOUNT createNewAccount();

#endif // SRC_ACCOUNT_H_