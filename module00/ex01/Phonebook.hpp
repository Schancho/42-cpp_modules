#ifndef _PHONEBOOK_HPP
# define _PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class Phonebook
{
	private:
		Contact contacts[8];
	public:
		void addContact(int i);
		bool print_contacts(int i);
};




#endif
