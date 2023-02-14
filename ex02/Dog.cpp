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


Dog::Dog( void ) : AAnimal(), _brain(NULL)
{
    type = "Dog";
    _brain = new Brain;
    COUT << "Call default constructor : Dog, type: " << type << ENDL;
}



Dog::Dog( std::string t ) : AAnimal(t), _brain(NULL)
{
    type = t;
    _brain = new Brain;
    COUT << "Call parametric constructor : Dog, type: " << type << ENDL;
}



Dog::Dog( Dog const &rhs ) : AAnimal(rhs)
{
    COUT << "Call copy constructor : Dog, type: " << type << ENDL;
    type = rhs.type;
    _brain = new Brain;
    for (uint8_t x = 0; x < MAX_IDEAS; x++)
    {
        _brain->storeIdea(rhs.getBrainAddr()->fetchIdea(x));
    }
}



Dog &Dog::operator=( Dog const &rhs )
{
    COUT << "Call copy assignement constructor : Dog, type: " << type << ENDL;
    type = rhs.type;
    _brain = new Brain;
    for (uint8_t x = 0; x < MAX_IDEAS; x++)
    {
        _brain->storeIdea(rhs.getBrainAddr()->fetchIdea(x));
    }
    return (*this);
}



Dog::~Dog( void )
{
    COUT << "Call destructor : Dog, type: " << type << ENDL;
    delete _brain;
}



void    Dog::makeSound( void ) const
{
    COUT << "Wuuuuau!" << ENDL;
}


Brain   *Dog::getBrainAddr( void ) const
{
    return (_brain);
}