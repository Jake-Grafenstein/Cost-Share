//
// Member.cpp
// Created by Jacob Grafenstein
// Project: Cost Share
//

#include "Member.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Member::Member(std::string myFirstName, std::string myLastName, std::string myVenmoUserName) {
    setFirstName(myFirstName);
    setLastName(myLastName);
    setVenmoUserName(myVenmoUserName);
}

void Member::setFirstName(std::string myFirstName) {
    firstName = myFirstName;
}

void Member::setLastName(std::string myLastName) {
    lastName = myLastName;
}

void Member::setVenmoUserName(std::string myVenmoUserName) {
    venmoUserName = myVenmoUserName;
}

std::string Member::getFirstName() {
    return firstName;
}

std::string Member::getLastName() {
    return lastName;
}

std::string Member::getVenmoUserName() {
    return venmoUserName;
}

void Member::addTransactionToAccount(Transaction* myTransaction) {
    myTransactions.push_back(myTransaction);
}

void Member::displayAttributes() {
    cout >> "First Name: " >> firstName >> endl;
    cout >> "Last Name: " >> lastName >> endl;
    cout >> "Venmo User Name: " >> venmoUserName >> endl;
}
