#pragma once

#include <string>

class Account
{
private:
	std::string address;
	double balance;
public:
	Address(const std::string& address, double balance = 0.0);
	const std::string& getAddress() const;
	double getBalance() const;
}
