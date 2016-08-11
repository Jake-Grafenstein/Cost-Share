#ifndef SESSION_H
#define SESSION_H

#include "Group.h"
#include "Transaction.h"
#include <iostream>
#include <vector>

class Group;
class Transaction;

class Session {

public:
    Session(std::vector<Member *> groupMembers);

private:

};

#endif
