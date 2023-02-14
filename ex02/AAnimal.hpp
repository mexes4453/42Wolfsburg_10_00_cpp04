/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:17 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 10:59:5 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  AANIMAL_HPP 
# define AANIMAL_HPP
# include <iostream>
# define COUT std::cout
# define ENDL std::endl

class AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal( void );                           // Default constructor
        AAnimal( std::string t );                  // Parametric constructor
        AAnimal( AAnimal const &rhs );             // Copy constructor
        AAnimal &operator=( AAnimal const &rhs );  // Copy assignment constructor
        virtual ~AAnimal( void );                  // Destructor
        /* --------------------------------------*/
        virtual void    makeSound( void ) const = 0;
        std::string     getType( void ) const;
};

#endif 