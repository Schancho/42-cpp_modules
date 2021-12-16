#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "debug" << std::endl;;
}

void	Karen::info(void)
{
	std::cout << "info" << std::endl;;

}

void	Karen::warning(void)
{
	std::cout << "Warning" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "error" << std::endl;;

}

void	Karen::complain(std::string level)
{
		void (Karen::*MyTypedef[4] )( void);
		std::string list[] ={"debug", "warning", "info", "error"};
		MyTypedef[0] = &Karen::debug;
		MyTypedef[1] = &Karen::warning;
		MyTypedef[2] = &Karen::info;
		MyTypedef[3] = &Karen::error;

		for (size_t i = 0; i < 4; i++)
		{
			if (list[i] == level)
				(this->*MyTypedef[i])();
		}
}