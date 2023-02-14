/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:58:20 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 17:13:5 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"


Brain::Brain( void ) : ideas(NULL), idx(0)
{
    COUT << "Call default constructor : Brain" << ENDL;
    ideas = new std::string[MAX_IDEAS];

    /* initialise all ideas to empty string */
    for (uint8_t x=0; x < MAX_IDEAS; x++)
    {
        ideas[x] = "";
    }
}



Brain::Brain( std::string idea ) : ideas(NULL), idx(0)
{
    COUT << "Call parametric constructor : Brain" << ENDL;
    ideas = new std::string[MAX_IDEAS];
    
    /* initialise all ideas to empty string */
    for (uint8_t x=0; x < MAX_IDEAS; x++)
    {
        ideas[x] = "";
    }
    ideas[idx] = idea;
    idx = (idx + 1) % MAX_IDEAS;
}



Brain::Brain( Brain const &rhs )
{
    COUT << "Call copy constructor : Brain" << ENDL;
    *this = rhs;
}



Brain &Brain::operator=( Brain const &rhs )
{

    this->ideas = rhs.ideas;
    COUT << "Call copy assignement constructor : Brain" << ENDL;
    return (*this);
}



Brain::~Brain( void )
{
    COUT << "Call destructor : Brain" << ENDL;
    
    delete [] ideas;
    //ideas = NULL;
}



void    Brain::storeIdea( std::string idea )
{
    ideas[idx] = idea;
    idx = (idx + 1) % MAX_IDEAS;
}



std::string    Brain::fetchIdea( uint8_t idxPos ) const
{
    std::string ideaStr = "";

    if (idxPos < MAX_IDEAS )
    {
        ideaStr = ideas[idxPos];
    }
    else
    {
        std::cout << "Memory location out of range\n";
    }
    return (ideaStr);
}



void    Brain::showAllIdeas( void ) const
{
    for (uint8_t x = 0; x < MAX_IDEAS; x++)
    {
        if (ideas[x] != "")
        {
            std::cout << ideas[x] << std::endl;
        }
        else
        {
            break ;
        }
    }
}



uint8_t Brain::getIdx( void ) const
{
    return (idx);
}




