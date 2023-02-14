/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:20 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 11:43:24 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"


WrongCat::WrongCat( void ) : WrongAnimal()
{
    this->type = "WrongCat";
    COUT << "Call default constructor : WrongCat, type: " << type << ENDL;
}



WrongCat::WrongCat( std::string t ) : WrongAnimal(t)
{
    this->type = t;
    COUT << "Call parametric constructor : WrongCat, type: " << type << ENDL;
}



WrongCat::WrongCat( WrongCat const &rhs ) : WrongAnimal(rhs)
{
    COUT << "Call copy constructor : WrongCat, type: " << type << ENDL;
    *this = rhs;
}



WrongCat &WrongCat::operator=( WrongCat const &rhs )
{
    this->type = rhs.type;
    COUT << "Call copy assignement constructor : WrongCat, type: " << type << ENDL;
    return (*this);
}



WrongCat::~WrongCat( void )
{
    COUT << "Call destructor : WrongCat, type: " << type << ENDL;
}



void    WrongCat::makeSound( void ) const
{
    COUT << "Meeeoooow!" << ENDL;
}

