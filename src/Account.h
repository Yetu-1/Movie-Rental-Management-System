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

std::string ranks[5] = {"BRONZE", "SLIVER", "GOLD", "PLATINUM"};

class ACCOUNT
{
private:
    std::string shipping_address;
    std::string email;
public:
    std::string name;
    RANK rank;

    ACCOUNT();
    ~ACCOUNT();
    void printProfile();
    void setShippingAddress(std::string);
    void setEmail(std::string);
};


#endif // SRC_ACCOUNT_H_