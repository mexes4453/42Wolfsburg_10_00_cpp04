/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:20 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 11:43:24 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"


Dog::Dog( void ) : Animal()
{
    type = "Dog";
    COUT << "Call default constructor : Dog, type: " << type << ENDL;
}



Dog::Dog( std::string t ) : Animal(t)
{
    type = t;
    COUT << "Call parametric constructor : Dog, type: " << type << ENDL;
}



Dog::Dog( Dog const &rhs ) : Animal(rhs)
{
    COUT << "Call copy constructor : Dog, type: " << type << ENDL;
    *this = rhs;
}



Dog &Dog::operator=( Dog const &rhs )
{
    this->type = rhs.type;
    COUT << "Call copy assignement constructor : Dog, type: " << type << ENDL;
    return (*this);
}



Dog::~Dog( void )
{
    COUT << "Call destructor : Dog, type: " << type << ENDL;
}



void    Dog::makeSound( void ) const
{
    COUT << "Wuuuuau!" << ENDL;
}

