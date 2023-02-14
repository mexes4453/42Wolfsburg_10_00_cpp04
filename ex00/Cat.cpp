/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:20 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 11:43:24 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"


Cat::Cat( void ) : Animal()
{
    type = "Cat";
    COUT << "Call default constructor : Cat, type: " << type << ENDL;
}



Cat::Cat( std::string t ) : Animal(t)
{
    type = t;
    COUT << "Call parametric constructor : Cat, type: " << type << ENDL;
}



Cat::Cat( Cat const &rhs ) : Animal(rhs)
{
    COUT << "Call copy constructor : Cat, type: " << type << ENDL;
    *this = rhs;
}



Cat &Cat::operator=( Cat const &rhs )
{
    this->type = rhs.type;
    COUT << "Call copy assignement constructor : Cat, type: " << type << ENDL;
    return (*this);
}



Cat::~Cat( void )
{
    COUT << "Call destructor : Cat, type: " << type << ENDL;
}



void    Cat::makeSound( void ) const
{
    COUT << "Meeeoooow!" << ENDL;
}

