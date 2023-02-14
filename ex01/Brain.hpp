/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:17 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 10:59:5 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  BRAIN_HPP 
# define BRAIN_HPP
# include <iostream>
# include <stdint.h>
# include <string.h>

# define COUT std::cout
# define ENDL std::endl
# define MAX_IDEAS (100)


class Brain
{
    private:
        std::string *ideas;
        uint8_t     idx;

    public:
        Brain( void );                          // Default constructor
        Brain( std::string idea );              // Parametric constructor
        Brain( Brain const &rhs );              // Copy constructor
        Brain &operator=( Brain const &rhs );   // Copy assignment constructor
        ~Brain( void );                         // Destructor
        /* -------------------------------------*/
        void           storeIdea( std::string idea );
        std::string    fetchIdea( uint8_t idxPos ) const;
        void           showAllIdeas( void ) const;
        uint8_t        getIdx( void ) const;
};

#endif 