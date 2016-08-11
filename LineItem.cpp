#include "LineItem.h"

using std::cout;
using std::endl;

LineItem::LineItem(Member* myMember, std::string myPurchaseName, float myPrice, int) {
    setPurchaseMember(myMember);
    setPurchaseName(myPurchaseName);
    setPurchasePrice(myPrice);
}

void LineItem::setPurchaseMember(Member* myMember) {
    purchaseMember = myMember;
}

void LineItem::setPurchaseName(std::string myPurchaseName) {
    purchaseName = myPurchaseName;
}

void LineItem::setPurchasePrice(float myPrice) {
    purchasePrice = myPrice;
}

Member* LineItem::getPurchaseMember() {
    return purchaseMember;
}

std::string LineItem::getPurchaseName() {
    return purchaseName;
}

float LineItem::getPurchasePrice() {
    return purchasePrice;
}
