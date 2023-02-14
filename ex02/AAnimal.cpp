/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:20 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/12 09:34:09 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"


AAnimal::AAnimal( void ) : type("AAnimal")
{
    COUT << "Call default constructor : AAnimal, type: " << type << ENDL;
}



AAnimal::AAnimal( std::string t ) : type(t)
{
    COUT << "Call parametric constructor : AAnimal, type: " << type << ENDL;
}



AAnimal::AAnimal( AAnimal const &rhs )
{
    COUT << "Call copy constructor : AAnimal, type: " << type << ENDL;
    *this = rhs;
}



AAnimal &AAnimal::operator=( AAnimal const &rhs )
{
    this->type = rhs.type;
    COUT << "Call copy assignement constructor : AAnimal, type: " << type << ENDL;
    return (*this);
}



AAnimal::~AAnimal( void )
{
    COUT << "Call destructor : AAnimal, type: " << type << ENDL;
}




std::string AAnimal::getType( void ) const
{
    return (type);
}
