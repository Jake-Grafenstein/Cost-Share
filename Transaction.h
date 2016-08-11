#ifndef TRANSACTION_H
#define TRANSACTION_H

#import "Member.h"
#import "LineItem.h"
#import <string>
#import <cmath>
#import <iostream>
#import <vector>

class Member;

class Transaction {
public:
    Transaction();
    void getTransactionID();

private:
    int transactionID;
    float transactionTotal;
    std::vector<LineItem *> lineItems;

    void addLineItem();
    float getTotal();
};

#endif
