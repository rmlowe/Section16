// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
//    vector<Account> accounts;
//    accounts.push_back(Account {});
//    accounts.push_back(Account {"Larry"});
//    accounts.push_back(Account {"Moe", 2000} );
//    accounts.push_back(Account {"Curly", 5000} );
//    
//    display(accounts);
//    deposit(accounts, 1000);
//    withdraw(accounts,2000);
    
    // Savings
    
    Savings_Account s1 {};
    Savings_Account s2 {"Superman"};
    Savings_Account s3 {"Batman", 2000};
    Savings_Account *s_ptr = new Savings_Account {"Wonderwoman", 5000, 5.0};

    vector<Account *> sav_accounts;
    sav_accounts.push_back(&s1);
    sav_accounts.push_back(&s2);
    sav_accounts.push_back(&s3);
    sav_accounts.push_back(s_ptr);

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
    
    delete s_ptr;
   
   // Checking
   
    Checking_Account c1 {};
    Checking_Account c2 {"Kirk"};
    Checking_Account c3 {"Spock", 2000};
    Checking_Account *c_ptr = new Checking_Account {"Bones", 5000};
   
    vector<Account *> check_accounts;
    check_accounts.push_back(&c1);
    check_accounts.push_back(&c2);
    check_accounts.push_back(&c3);
    check_accounts.push_back(c_ptr);

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
    
    delete c_ptr;

    // Trust
    
    Trust_Account t1 {};
    Trust_Account t2 {"Athos", 10000, 5.0};
    Trust_Account t3 {"Porthos", 20000, 4.0};
    Trust_Account *t_ptr = new Trust_Account {"Aramis", 30000};
  
    vector<Account *> trust_accounts;
    trust_accounts.push_back(&t1);
    trust_accounts.push_back(&t2);
    trust_accounts.push_back(&t3);
    trust_accounts.push_back(t_ptr);

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(trust_accounts, 1000);
    
    delete t_ptr;
    

    
    return 0;
}

