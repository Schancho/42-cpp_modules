#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int _fixed;
		static const int _fractionalBits = 8;
	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed &		operator=( Fixed const & rhs );


};

#endif /* *********************************************************** FIXED_H */