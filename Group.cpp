//
// Group.cpp
// Created by Jacob Grafenstein
// Project: Cost Share
//

#include "Group.h"
#include "Member.h"
#include "Session.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Group::Group(int argc, char* argv[]) {

}

int Group::startSession(std::vector<Member *> groupMembers) {
    Session* newSession = new Session(groupMembers);
    activeSessions.push_back(newSession);

}

bool Group::addMember(const std::string myString) {
    std::string myFirstName;
    std::string myLastName;
    std::string myVenmoUserName;

    cout << "Enter a first name: ";
    cin >> myFirstName;

    cout << "Enter a last name: ";
    cin >> myLastName;

    cout << "Enter a venmo username: ";
    cin >> myVenmoUserName;

    Member* myMember = new Member(myFirstName,myLastName,myVenmoUserName);

    groupMembers.push_back(myMember);
}

void Group::displayMembers() {
    for (int i = 0; i < groupMembers.size(); i++) {
        groupMembers[i]->displayAttributes();
    }
}

int Group::getNumMembers() {
    return groupMembers.size();
}
