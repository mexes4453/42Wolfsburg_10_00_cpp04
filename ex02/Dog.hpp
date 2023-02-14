/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:17 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 10:59:5 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  DOG_HPP 
# define DOG_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"
# define COUT std::cout
# define ENDL std::endl

class Dog : public AAnimal
{
    private:
        Brain *_brain;

    public:
        Dog( void );                        // Default constructor
        Dog( std::string t );               // Parametric constructor
        Dog( Dog const &rhs );              // Copy constructor
        Dog &operator=( Dog const &rhs );   // Copy assignment constructor
        ~Dog( void );                       // Destructor
        /* ---------------------------------*/
        void    makeSound( void ) const;
        Brain   *getBrainAddr( void ) const;
};

#endif 