#ifndef _CONTACT_HPP
# define _CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	bool	setInfo();
	void	printContact();
	void	searchPrintContacts(int i);
};

#endif
