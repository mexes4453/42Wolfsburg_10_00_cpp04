/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:17 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 10:59:5 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  WRONGANIMAL_HPP 
# define WRONGANIMAL_HPP
# include <iostream>
# define COUT std::cout
# define ENDL std::endl

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal( void );                           // Default constructor
        WrongAnimal( std::string t );                  // Parametric constructor
        WrongAnimal( WrongAnimal const &rhs );              // Copy constructor
        WrongAnimal &operator=( WrongAnimal const &rhs );   // Copy assignment constructor
        ~WrongAnimal( void );                          // Destructor
        /* --------------------------------------*/
        void            makeSound( void ) const;
        std::string     getType( void ) const;
};

#endif 