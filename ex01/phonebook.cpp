
#include "Phonebook.hpp"
#include <stdlib.h>
#include "Contact.hpp"
// #define S std::

void Phonebook::addContact(int i)
{
	contacts[i].setInfo();
}

bool Phonebook::print_contacts(int j)
{
	std::string str;
	int index;
	bool b;
	b = 1;
	if (j >= 8)
		j = 8;
	std::cout << "    Id    |";
	std::cout << std::setw(11) << "First_name|";
	std::cout << std::setw(11) << "Last_name|";
	std::cout << std::setw(11) << "Nick_Name|" << std::endl;

	for (int i = 0; i < j; i++)
	{
		contacts[i].searchPrintContacts(i);
	}
	do
	{
		std::cout << "Enter an Index: ";
		if (!std::getline(std::cin, str))
			exit(1);
		index = str[0] - 48;
		if (str.length() != 1 || index >= j || index < 0)
			std::cout << "No such contact" << std::endl;
		else
			b = 0;
	} while (b);
	contacts[index].printContact();
	return (0);
}

int main(void)
{
	std::string cmd;
	Phonebook pb;
	Contact cont;
	short i;
	int k;

	k = 0;
	i = 0;
	do
	{
		std::cout << "ADD, SEARCH, EXIT ? ";
		if (!std::getline(std::cin, cmd))
			exit(1);
		if (cmd == "ADD")
		{
			if (i >= 8)
			{
				k = i % 8;
			}
			pb.addContact(k);
			i++;
			k++;
		}
		else if (cmd == "SEARCH")
			pb.print_contacts(i);
		else if (cmd == "EXIT")
			exit(0);
	} while (1);

	return 0;
}
