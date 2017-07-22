#include <iomanip>
#include "SavingsAccount.h"

using namespace std;

namespace ict{ 
	
	// TODO: Implement SavingsAccount member functions here
    SavingsAccount::SavingsAccount(double e_balance, double e_interest): Account(e_balance){
        if (e_interest <0) {
            interestRate = 0;
        } else {
            interestRate = e_interest;
        };
    };

    double SavingsAccount::calculateInterest() {
        return getBalance()*interestRate;
    };

    ostream& SavingsAccount::display(ostream &os) {
        os << fixed << setprecision(2);
        os << "Account type: Saving" << endl;
        os << "Balance: $ " << getBalance() << endl;
        os << "Interest Rate (%): " << interestRate*100 << endl;
        return os;
    }
}