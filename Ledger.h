#ifndef LEDGER_H
#define LEDGER_H


class Ledger {
public:
    Ledger();
    void addTransaction();
    void deleteTransaction(int transactionID);
    float getTotal();

private:
    float total;
    std::vector<Transaction *> transactions;

    void addToTotal(float transactionTotal);
};

#endif // LEDGER_H
