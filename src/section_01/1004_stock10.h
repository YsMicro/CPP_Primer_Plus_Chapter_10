//
// Created by Vojago on 2024/9/14.
//

#ifndef CPP_PRIMER_PLUS_CHAPTER_10_1004_STOCK10_H
#define CPP_PRIMER_PLUS_CHAPTER_10_1004_STOCK10_H

#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    Stock();        // default constructor
    Stock(const std::string &co, long n = 0, double pr = 0.0);

    ~Stock();       // noisy destructor
    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

#endif //CPP_PRIMER_PLUS_CHAPTER_10_1004_STOCK10_H
