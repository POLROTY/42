/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:15:25 by rpol              #+#    #+#             */
/*   Updated: 2023/02/06 18:26:19 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cstdlib>

class Fixed{
	
	private:
	
		int					_fixed;
		
		int const static	_bits;
	
	public:
	
		Fixed( void );
		Fixed( const Fixed & to_copy );
		
		~Fixed( void );

		Fixed & 	operator=( Fixed const & rhs );
		
		int			getRawBits( void ) const;
		
		void		setRawBits( int const raw );
};

#endif