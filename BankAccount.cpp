#include <iostream>
#include <string>

struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

void updateBalance (BankAccount&account, double newBalance) {
    account.balance = newBalance; 
}

int main() {
    BankAccount account;
    std::cout << "Введите номер счета: ";
    std::cin >> account.accountNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> account.ownerName;
    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    updateBalance(account,newBalance);

    std::cout << "Ваш счет: " << std::endl;
    
    return 0;
}