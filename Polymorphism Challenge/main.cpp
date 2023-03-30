// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h" 

int main() {
   
    //Account frank{"Frank", 5000}; //shouldn't work
    //std::cout << frank << std::endl;

    Checking_Account frank{ "Frank", 5000 };
    std::cout << frank << std::endl;

    Account* trust = new Trust_Account("James");
    std::cout << *trust << std::endl;

    Account* p1 = new Checking_Account("Larry", 10000);
    Account* p2 = new Savings_Account("Moe", 1000);
    Account* p3 = new Trust_Account("Curly");

    std::vector<Account*> accounts{ p1,p2,p3 };

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);

    return 0;
}

