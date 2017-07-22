#include "Account.h"

using namespace std;

namespace ict{ 
	
	// constructor   
	Account::Account() {
		balance = 0;
	};

	Account::Account(double e_balance) {
		if(balance >= 0){
			Account::setBalance(e_balance);
		} else {
			Account::setBalance(1.0);
		};
	};

	// credit (add) an amount to the account balance

	void Account::credit(double e_credit) {
		balance += e_credit;
	};
	
	// debit (subtract) an amount from the account balance return bool 

	bool Account::debit(double e_debit) {
		bool TF;
		if(balance < e_debit){
			TF = false;
		} else {
			balance -= e_debit;
			TF = true;
		}
		return TF;
	};

	double Account::getBalance() const
	{
		return balance;
	} 

	void Account::setBalance( double newBalance )
	{
		balance = newBalance;
	} 
}