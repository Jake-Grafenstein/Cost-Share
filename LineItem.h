#ifndef LINEITEM_H
#define LINEITEM_H

#import <string>
#import "Member.h"

class Member;

class LineItem {
public:
    LineItem();
    LineItem(Member* myMember, std::string purchaseName, float price);
    void setPurchaseMember(Member* myMember);
    Member* getPurchaseMember();

    void setPurchasePrice(float price);
    float getPurchasePrice();

    void setPurchaseName(std::string purchaseName);
    std::string getPurchaseName();

private:
    float purchasePrice;
    Member* purchaseMember;
    std::string purchaseName;
};

#endif // LINEITEM_H
