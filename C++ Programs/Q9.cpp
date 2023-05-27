/*3) Suppose you are working on a project to create a simple banking system and you need to create a class hierarchy for different types of bank accounts.
You want to create a base class called BankAccount that contains basic account information and methods that are common to all types of bank accounts.
You also want to create a derived class called SavingsAccount that inherits from BankAccount and contains additional methods specific
to savings accounts. Create a C++ code snippet for the above scenario that demonstrates inheritance.   
*/

#include <iostream>
#include <string>
class BankAccount {
protected:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& number, const std::string& holder, double initialBalance)
        : accountNumber(number), accountHolderName(holder), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        std::cout << "Amount $" << amount << " deposited.\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Amount $" << amount << " withdrawn.\n";
        } else {
            std::cout << "Insufficient balance.\n";
        }
    }

    void display() {
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Account Holder: " << accountHolderName << "\n";
        std::cout << "Balance: $" << balance << "\n";
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(const std::string& number, const std::string& holder, double initialBalance, double rate)
        : BankAccount(number, holder, initialBalance), interestRate(rate) {}

    void addInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        std::cout << "Interest added: $" << interest << "\n";
    }
};

int main() {
    SavingsAccount savings("123456", "John Doe", 1000.0, 5.0);
    savings.display();

    savings.deposit(500.0);
    savings.withdraw(200.0); 

    savings.display();

    savings.addInterest();
    savings.display(); 

    return 0;
}
