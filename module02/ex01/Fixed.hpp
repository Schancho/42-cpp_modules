#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
class Fixed
{
	private:
		int _fixed;
		static const int _fractionalBits = 8;
	public:

		Fixed();
		Fixed( Fixed const & src );
		Fixed(const int fixed);
		Fixed(const float Float);
		~Fixed();
		float 	toFloat( void ) const; 
		int 	toInt( void ) const; 
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed &		operator=( Fixed const & rhs );


};

std::ostream &operator<<(std::ostream &ostream, Fixed const & f);
#endif /* *********************************************************** FIXED_H */