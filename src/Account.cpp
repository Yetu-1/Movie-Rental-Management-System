/**
 * @file    Account.cpp
 * @author  David Salihu
 * @date    09-10-2022
 */

#include "Account.h"

ACCOUNT::ACCOUNT()
{
    name = "unknown";
    rank = BRONZE;
}

void ACCOUNT::setEmail(std::string email)
{
    this->email = email;
}

void ACCOUNT::setShippingAddress(std::string address)
{
    shipping_address = address;
}

void ACCOUNT::printProfile()
{
    std::cout<<"NAME:    "<<name<<'\n';
    std::cout<<"RANK:    "<<ranks[rank]<<'\n';
    std::cout<<"EMAIL:   "<<email<<'\n';
    std::cout<<"ADDRESS: "<<shipping_address<<'\n';
}
ACCOUNT::~ACCOUNT(){}