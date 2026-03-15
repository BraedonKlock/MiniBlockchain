#include <iostream>
#include "AccountMenus.h"
#include "accounts/chequingAccount.h"

void menuDisplay()
{
	const std::string RESET        = "\033[0m";
	const std::string ORANGE       = "\033[38;5;208m";
	const std::string ROYAL_PURPLE = "\033[38;2;190;149;250m";
	
	std::cout << "\n" << ROYAL_PURPLE << "======== Banking App ========" << RESET << "\n"
	          << ORANGE << "1. " << ROYAL_PURPLE << "Chequing Account" << RESET << "\n"
	          << ORANGE << "2. " << ROYAL_PURPLE << "Savings Account" << RESET << "\n"
	          << ORANGE << "3. " << ROYAL_PURPLE << "Investment Account" << RESET << "\n"
	          << ORANGE << "0. " << ROYAL_PURPLE << "Exit" << RESET << "\n"
	          << ROYAL_PURPLE << "Enter your choice: " << RESET;
}

void Menu(ChequingAccount& chequingAccount)
{
	int choice;
	do
	{
		menuDisplay();
		std::cin >> choice;
		switch(choice)
		{
			case 1: displayChequingAccount(chequingAccount); break;
			case 0: std::cout << "Exiting..\n"; break;
			default: std::cout << "Invalid choice\n"; break;

		}
	} while (choice != 0);
}
int main() 
{
	ChequingAccount chequingAccount;
	Menu(chequingAccount);
	return 0;
}
