#pragma once

#include <string>

class Account
{
protected:
	double balance = 0.0;
public:
	double getBalance() const;
	virtual bool withdraw(double amount) = 0;
	virtual bool deposit(double amount) = 0;
	virtual ~Account() = default;
};
