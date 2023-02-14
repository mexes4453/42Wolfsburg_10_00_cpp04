/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:17 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 10:59:5 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  ANIMAL_HPP 
# define ANIMAL_HPP
# include <iostream>
# define COUT std::cout
# define ENDL std::endl

class Animal
{
    protected:
        std::string type;

    public:
        Animal( void );                           // Default constructor
        Animal( std::string t );                  // Parametric constructor
        Animal( Animal const &rhs );              // Copy constructor
        Animal &operator=( Animal const &rhs );   // Copy assignment constructor
        virtual ~Animal( void );                  // Destructor
        /* --------------------------------------*/
        virtual void    makeSound( void ) const;
        std::string     getType( void ) const;
};

#endif 