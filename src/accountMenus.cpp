#include "accountMenus.h"
#include "accounts/chequingAccount.h"

#include <iostream>
#include <string>

void displayChequingAccount(ChequingAccount& chequingAccount) 
{

	int choice;
	do
	{
	const std::string RESET        = "\033[0m";
	const std::string ORANGE       = "\033[38;5;208m";
	const std::string ROYAL_PURPLE = "\033[38;2;190;149;250m";

	std::cout << "\n" << ROYAL_PURPLE << "======== Chequing Account ========" << RESET << "\n"
        <<  "BALANCE: " << ORANGE << " " << chequingAccount.getBalance() << RESET << "\n"
	<< ORANGE << "1. " << ROYAL_PURPLE << "Move money" << RESET << "\n"
	<< ORANGE << "2. " << ROYAL_PURPLE << "Withdraw Money" << RESET << "\n"
	<< ORANGE << "3. " << ROYAL_PURPLE << "Deposit Money" << RESET << "\n"
	<< ORANGE << "0. " << ROYAL_PURPLE << "Return" << RESET << "\n"
	<< ROYAL_PURPLE << "Enter your choice: " << RESET;

	std::cin >> choice;

	switch (choice)
	{
		case 1: break;
		case 0: std::cout << "Returning\n"; break;
	}
	} while (choice != 0);
}

