//
// Transaction.cpp
// Created by Jacob Grafenstein
// Project: Cost Share
//

#import "Transaction.h"
#import "LineItem.h"
#import "Member.h"
#import "Group.h"
#import <string>
#import <cmath>
#import <iostream>

using namespace std;

Transaction::Transaction() {

}

void Transaction::addLineItem() {
    cout << "Who paid? ";
    Group::displayMembers();
    LineItem* myLineItem = new LineItem();
    lineItems.push_back(myLineItem);

    transactionTotal += myLineItem->getPurchasePrice();
}

int Transaction::getTransactionID() {
    return transactionID;
}

float Transaction::getTotal() {
    return transactionTotal;
}

