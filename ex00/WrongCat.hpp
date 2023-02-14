/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:17 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 10:59:5 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  WRONGCAT_HPP 
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"
# define COUT std::cout
# define ENDL std::endl

class WrongCat : public WrongAnimal
{
    public:
        WrongCat( void );                        // Default constructor
        WrongCat( std::string t );               // Parametric constructor
        WrongCat( WrongCat const &rhs );              // Copy constructor
        WrongCat &operator=( WrongCat const &rhs );   // Copy assignment constructor
        ~WrongCat( void );                       // Destructor
        /* ---------------------------------*/
        void    makeSound( void ) const;
};

#endif 