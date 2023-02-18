/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:43:13 by rpol              #+#    #+#             */
/*   Updated: 2023/02/18 13:03:29 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <cstdlib>

template< typename T >
void swap( T & a, T & b ) {

	T temp = a;
	a = b;
	b = temp;
}

template< typename T >
T const & min( T const & a, T const & b ) {

	return ( a <= b ? a : b );
}

template< typename T >
T const & max( T const & a, T const & b ) {

	return ( a >= b ? a : b );
}

#endif