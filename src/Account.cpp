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
    password = "";
    shipping_address = "";
    email = "";
}

void ACCOUNT::printProfile(){}

ACCOUNT::~ACCOUNT(){}

void CUSTOMER_ACCOUNT::printProfile()
{
    std::cout<<"NAME:    "<<name<<'\n';
    std::cout<<"RANK:    "<<ranks[rank]<<'\n';
    std::cout<<"EMAIL:   "<<email<<'\n';
    std::cout<<"ADDRESS: "<<shipping_address<<'\n';
}
