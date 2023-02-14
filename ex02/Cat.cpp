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


Cat::Cat( void ) : AAnimal(), _brain(NULL)
{
    type = "Cat";
    _brain = new Brain;
    COUT << "Call default constructor : Cat, type: " << type << ENDL;
}



Cat::Cat( std::string t ) : AAnimal(t), _brain(NULL)
{
    type = t;
    _brain = new Brain;
    COUT << "Call parametric constructor : Cat, type: " << type << ENDL;
}


Cat::Cat( Cat const &rhs ) : AAnimal(rhs)
{
    COUT << "Call copy constructor : Cat, type: " << type << ENDL;
    type = rhs.type;
    _brain = new Brain;
    for (uint8_t x = 0; x < MAX_IDEAS; x++)
    {
        _brain->storeIdea(rhs.getBrainAddr()->fetchIdea(x));
    }
}



Cat &Cat::operator=( Cat const &rhs )
{
    COUT << "Call copy assignement constructor : Cat, type: " << type << ENDL;
    type = rhs.type;
    _brain = new Brain;
    for (uint8_t x = 0; x < MAX_IDEAS; x++)
    {
        _brain->storeIdea(rhs.getBrainAddr()->fetchIdea(x));
    }
    return (*this);
}



Cat::~Cat( void )
{
    COUT << "Call destructor : Cat, type: " << type << ENDL;
    delete _brain;
}



void    Cat::makeSound( void ) const
{
    COUT << "Meeeoooow!" << ENDL;
}




Brain   *Cat::getBrainAddr( void ) const
{
    return (_brain);
}