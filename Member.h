#ifndef MEMBER_H
#define MEMBER_H

#import <string>
#import <vector>
#import "Transaction.h"

class Transaction;

class Member {
public:
    Member(std::string myFirstName, std::string myLastName, std::string myVenmoUserName);

    std::string getFirstName();
    std::string getLastName();
    std::string getVenmoUserName();

    void addTransactionToAccount(Transaction* myTransaction);
    void displayAttributes();


private:

    void setFirstName(std::string myFirstName);
    void setLastName(std::string myLastName);
    void setVenmoUserName(std::string myVenmoUserName);

    std::string firstName;
    std::string lastName;
    std::string venmoUserName;
    std::vector<Transaction *> myTransactions;

};

#endif
