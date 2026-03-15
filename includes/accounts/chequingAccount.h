#pragma once

#include "Account.h"

class ChequingAccount : public Account
{
private:
	
public:
	bool deposit(double amount) override; 
	bool withdraw(double amount) override;
};
