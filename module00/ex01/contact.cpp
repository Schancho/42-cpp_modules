#include "Contact.hpp"
std::string truncate(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 10);
        str[9] = '.';
    }
    return (str);
}

bool Contact::setInfo()
{
    std::cout << "Enter First name: " ;
    if (!std::getline(std::cin, firstName))
        return(1);
    std::cout << "Enter Last name: " ;
    if (!std::getline(std::cin, lastName))
        return(1);
    std::cout << "Enter Nick name: " ;
    if (!std::getline(std::cin, nickname))
        return(1);
    std::cout << "Enter Phone name: " ;
    if (!std::getline(std::cin, phoneNumber))
        return(1);
    std::cout << "Enter Darkest secret: " ;
    if (!std::getline(std::cin, darkestSecret))
        return(1);
    return (0);
}

void    Contact::printContact()
{
    std::cout << "First Name    : "  << firstName  << std::endl
    << "Last Name     : " << lastName << std::endl
    << "Phone number  : " << phoneNumber << std::endl
    << "nickname      : " << nickname << std::endl
    << "Darkest secret: " << darkestSecret << std::endl;
}

void    Contact::searchPrintContacts(int i)
{
    std::cout << "    " << i << "     |" 
    << truncate(firstName) << std::setw(11 - truncate(firstName).length()) << "|"
    << truncate(lastName) << std::setw(11 - truncate(lastName).length()) << "|"
    << truncate(nickname) << std::setw(11 - truncate(nickname).length()) << "|" << std::endl;
}