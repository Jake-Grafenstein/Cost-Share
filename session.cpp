//
// Session.cpp
// Created by Jacob Grafenstein
// Project: Cost Share
//

#import <string>
#import <vector>
#import "Transaction.h"
#import "Member.h"
#import "Session.h"

Session::Session(std::vector<Member *> groupMembers) {

}

void Session::addTransaction() {
    Transaction* myTransaction = new Transaction();
    transactions.push_back(myTransaction);
    addToTotal(myTransaction->getTotal());
}

void Session::deleteTransaction(int transactionID) {
    numTransactions = transactions.size();
    index = numTransactions - transactionID;
    transactions.erase(transactions.begin()+index);
}

float Session::getTotal() {
    return total;
}

void Session::addToTotal(float transactionTotal) {
    total += transactionTotal;
}
