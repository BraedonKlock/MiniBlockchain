#include <iostream>
#include "accountMenus.h"
#include "accounts/chequingAccount.h"
#include "consoleColors.h"

void menuDisplay()
{
	std::cout << "\n" << ConsoleColors::ROYAL_PURPLE << "======== Banking App ========" << ConsoleColors::RESET << "\n"
	          << ConsoleColors::ORANGE << "1. " << ConsoleColors::ROYAL_PURPLE << "Chequing Account" << ConsoleColors::RESET << "\n"
	          << ConsoleColors::ORANGE << "2. " << ConsoleColors::ROYAL_PURPLE << "Savings Account" << ConsoleColors::RESET << "\n"
	          << ConsoleColors::ORANGE << "3. " << ConsoleColors::ROYAL_PURPLE << "Investment Account" << ConsoleColors::RESET << "\n"
	          << ConsoleColors::ORANGE << "0. " << ConsoleColors::ROYAL_PURPLE << "Exit" << ConsoleColors::RESET << "\n"
	          << ConsoleColors::ROYAL_PURPLE << "Enter your choice: " << ConsoleColors::RESET;
}

void Menu()
{
	int choice;
	do
	{
		menuDisplay();
		std::cin >> choice;
		switch(choice)
		{
			case 1: displayChequingAccount(); break;
			case 0: std::cout << "Exiting..\n"; break;
			default: std::cout << "Invalid choice\n"; break;

		}
	} while (choice != 0);
}

int main() 
{
	Menu();
	return 0;
}
