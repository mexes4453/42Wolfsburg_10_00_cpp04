/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:20 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 12:05:31 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
    COUT << "Call default constructor : WrongAnimal, type: " << type << ENDL;
}



WrongAnimal::WrongAnimal( std::string t ) : type(t)
{
    COUT << "Call parametric constructor : WrongAnimal, type: " << type << ENDL;
}



WrongAnimal::WrongAnimal( WrongAnimal const &rhs )
{
    COUT << "Call copy constructor : WrongAnimal, type: " << type << ENDL;
    *this = rhs;
}



WrongAnimal &WrongAnimal::operator=( WrongAnimal const &rhs )
{
    this->type = rhs.type;
    COUT << "Call copy assignement constructor : WrongAnimal, type: " << type << ENDL;
    return (*this);
}



WrongAnimal::~WrongAnimal( void )
{
    COUT << "Call destructor : WrongAnimal, type: " << type << ENDL;
}



void    WrongAnimal::makeSound( void ) const
{
    COUT << "AAAAAAAnimaaaaaaaaaaaaaaal" << ENDL;
}



std::string WrongAnimal::getType( void ) const
{
    return (type);
}
