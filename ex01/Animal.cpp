/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:20 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 12:05:31 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"


Animal::Animal( void ) : type("Animal")
{
    COUT << "Call default constructor : Animal, type: " << type << ENDL;
}



Animal::Animal( std::string t ) : type(t)
{
    COUT << "Call parametric constructor : Animal, type: " << type << ENDL;
}



Animal::Animal( Animal const &rhs )
{
    COUT << "Call copy constructor : Animal, type: " << type << ENDL;
    *this = rhs;
}



Animal &Animal::operator=( Animal const &rhs )
{
    this->type = rhs.type;
    COUT << "Call copy assignement constructor : Animal, type: " << type << ENDL;
    return (*this);
}



Animal::~Animal( void )
{
    COUT << "Call destructor : Animal, type: " << type << ENDL;
}



void    Animal::makeSound( void ) const
{
    COUT << "AAAAAAAnimaaaaaaaaaaaaaaal" << ENDL;
}



std::string Animal::getType( void ) const
{
    return (type);
}
