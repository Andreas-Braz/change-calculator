#include <iostream>

int main() {
    
    // define conversion values in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {};
    
    std::cout << "Enter an amount in cents : ";
    std::cin >> change_amount;
    
    int balance{}, dollars{}, quarters {}, dimes{}, nickels{}, pennies{};

    dollars = change_amount / dollar_value;   
    balance = change_amount % dollar_value;
    
    quarters = balance / quarter_value;
    balance %= quarter_value;
    
    dimes = balance / dime_value;
    balance %= dime_value;
    
    nickels = balance / nickel_value;
    balance %= nickel_value;
    
    pennies = balance;

   std::cout << "\nYou can provide this change as follows : " << std::endl;
   std::cout << "dollars  : " << dollars << std::endl;
   std::cout << "quarters : " << quarters << std::endl;
   std::cout << "dimes    : " << dimes << std::endl;
   std::cout<< "nickels  : " << nickels << std::endl;
   std::cout << "pennies  : " << pennies <<std::endl;

    std::cout << std::endl;
    return 0;
}

