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

// CUSTOMER_ACCOUNT::CUSTORMER_ACCOUNT() : ACCOUNT()
// {
//     account_level = 0;
//     account_balance = 0;
// }
void CUSTOMER_ACCOUNT::printProfile()
{
    std::cout<<"NAME:    "<<name<<'\n';
    std::cout<<"RANK:    "<<ranks[rank]<<'\n';
    std::cout<<"EMAIL:   "<<email<<'\n';
    std::cout<<"BALANCE: "<<"$"<<account_balance<<'\n';
    std::cout<<"ADDRESS: "<<shipping_address<<'\n';
}

void CUSTOMER_ACCOUNT::rechargeAccount()
{
    uint16_t amount;
    std::cout<<"Enter Recharge Amount: ";
    std::cin>>amount;
    std::cout<<"\n\n";
    account_balance += amount;
}

void CUSTOMER_ACCOUNT::updateRank()
{
    if(account_level >= 0 & account_level < 5){
        rank = BRONZE;
    }
    else if(account_level >= 5 & account_level < 20){
        rank = SILVER;
    }
    else if(account_level >= 20 & account_level < 40){
        rank = GOLD;
    }
    else{
        rank = PLATINUM;
    }
}

CUSTOMER_ACCOUNT createNewAccount()
{
    CUSTOMER_ACCOUNT new_account;
    std::cout<<"Enter Name: ";
    getline(std::cin, new_account.name);
    std::cout<<"Enter Email Address: ";
    getline(std::cin, new_account.email);
    std::cout<<"Enter Address: ";
    getline(std::cin, new_account.shipping_address);
    std::cout<<"ACCOUNT CREATED!\n\n";

    return new_account;
}