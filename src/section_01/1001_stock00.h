//
// Created by Vojago on 2024/9/10.
//

#ifndef CPP_PRIMER_PLUS_CHAPTER_10_1001_STOCK00_H
#define CPP_PRIMER_PLUS_CHAPTER_10_1001_STOCK00_H

#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

#endif //CPP_PRIMER_PLUS_CHAPTER_10_1001_STOCK00_H
