#include "accounts/chequingAccount.h"

bool ChequingAccount::deposit(double amount)
{	
	if(amount <= 0) return false;

	balance += amount;

	return true;
}

bool ChequingAccount::withdraw(double amount)
{
	if (amount <= 0) return false;
	balance -= amount;
	return true;
}
