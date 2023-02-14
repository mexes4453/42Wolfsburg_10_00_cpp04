/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:17 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 10:59:5 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  CAT_HPP 
# define CAT_HPP
# include <iostream>
# include <stdint.h>
# include "AAnimal.hpp"
# include "Brain.hpp"
# define COUT std::cout
# define ENDL std::endl

class Cat : public AAnimal
{
    private:
        Brain *_brain;

    public:
        Cat( void );                        // Default constructor
        Cat( std::string t );               // Parametric constructor
        Cat( Cat const &rhs );              // Copy constructor
        Cat &operator=( Cat const &rhs );   // Copy assignment constructor
        ~Cat( void );                       // Destructor
        /* ---------------------------------*/
        void    makeSound( void ) const;
        Brain   *getBrainAddr( void ) const;
};

#endif 