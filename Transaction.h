#pragma once
#include <string>


class Transaction
{
private:
    std::string ticker;
    uint32_t count;
    float price;
    float commission;
    Date date;
}