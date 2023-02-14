/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:37:13 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 12:47:27 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"


int main ( void )
{

    std::cout << "\033[1;33m\n\nTesting Correct Classes \n\n\033[0m";
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();         // will output the cat sound!
    j->makeSound();         // will output the dog sound!
    meta->makeSound();      // will output the animal sound!
    
    delete meta;
    delete i;
    delete j;

    std::cout << "\033[1;33m\n\nTesting Wrong Classes \n\n\033[0m";

    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();
    wa->makeSound();         // will output the animal sound!
    wc->makeSound();         // will output the dog sound!
    delete wa;
    delete wc;

    std::cout << "\033[1;33m\n\nTesting ends \n\n\033[0m";
    return (0);
}