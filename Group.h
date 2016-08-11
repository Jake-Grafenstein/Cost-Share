//
// Group.h
// Created by Jacob Grafenstein
// Project: Cost Share
//

#ifndef GROUP_H
#define GROUP_H

#include "Session.h"
#include "Member.h"
#include <string>
#include <vector>

class Session;
class Member;

class Group {
public:
  Group(int argc, char* argv[]);
  bool addMember(); // Returns true if member successfully added
  int startSession(std::vector<Member *> groupMembers); // returns session ID
  void displayMembers();
  int getNumMembers();

private:
  std::vector<Member *> groupMembers;
  std::vector<Session *> activeSessions;


};

#endif
