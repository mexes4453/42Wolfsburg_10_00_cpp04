/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:37:13 by cudoh             #+#    #+#             */
/*   Updated: 2023/02/11 21:43:2 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# define INFO(str) std::cout << "\033[1;33m\n\n"#str"\n\n\033[0m";



int main ( void )
{
    /*
    INFO(TEST: Subject file cases - Abstract class);
    AAnimal tiger = AAnimal("tiger");   // will not compile, invalid instance
    */

    INFO(TEST: Subject file cases);
    const AAnimal *j = new Dog();
    const AAnimal *i = new Cat();
    delete j; 
    delete i;


    INFO(TEST: Subject file specific requirement - animal array);
    const AAnimal *animals[12] = {
                            new Cat("1"), new Cat("2"), new Cat("3"), 
                            new Cat("4"), new Cat("5"), new Cat("6"),
                            new Dog("1"), new Dog("2"), new Dog("3"),
                            new Dog("4"), new Dog("5"), new Dog("6")
                         };
    for (int x = 0; x < 12; x++)
    {
        delete animals[x];
    }


    INFO(TEST: Check the cat brain feature);
    const AAnimal *c = new Cat();
    dynamic_cast<Cat*>(const_cast<AAnimal*>(c))->getBrainAddr()->storeIdea("Hello");
    dynamic_cast<Cat*>(const_cast<AAnimal*>(c))->getBrainAddr()->storeIdea("Kitty");
    dynamic_cast<Cat*>(const_cast<AAnimal*>(c))->getBrainAddr()->showAllIdeas();
    delete c;


    INFO(TEST: Check the dog brain feature);
    const AAnimal *d = new Dog();
    dynamic_cast<Dog*>(const_cast<AAnimal*>(d))->getBrainAddr()->storeIdea("Hi");
    dynamic_cast<Dog*>(const_cast<AAnimal*>(d))->getBrainAddr()->storeIdea("Puppy");
    dynamic_cast<Dog*>(const_cast<AAnimal*>(d))->getBrainAddr()->showAllIdeas();
    delete d;



    INFO(TEST: Check deep copy with copy constructor cat obj);
    Cat *k = new Cat("mellow_cat");
    k->getBrainAddr()->storeIdea("mellow");

    Cat *f = new Cat(*k);
    k->getBrainAddr()->storeIdea("milk");
    k->getBrainAddr()->showAllIdeas();
    delete k;
    f->getBrainAddr()->showAllIdeas();
    delete f;

    


    INFO(TEST: Check deep copy with copy constructor dog obj);
    Dog *x = new Dog("pitbull_dog");
    x->getBrainAddr()->storeIdea("pitbull");

    Dog *y = new Dog(*x);
    x->getBrainAddr()->storeIdea("bone");
    x->getBrainAddr()->showAllIdeas();
    delete x;
    y->getBrainAddr()->showAllIdeas();
    delete y;
    


    INFO(TEST: Check deep copy with copy assignment constructor cat obj);
    Cat *ak = new Cat("mellow_cat");
    ak->getBrainAddr()->storeIdea("mellow");

    Cat af = (*ak);
    ak->getBrainAddr()->storeIdea("milk");
    ak->getBrainAddr()->showAllIdeas();
    delete ak;
    af.getBrainAddr()->showAllIdeas();



    INFO(TEST: Check deep copy with copy assignment constructor dog obj);
    Dog *ax = new Dog("pitbull_dog");
    ax->getBrainAddr()->storeIdea("pitbull");

    Dog ay = (*ax);
    ax->getBrainAddr()->storeIdea("bone");
    ax->getBrainAddr()->showAllIdeas();
    delete ax;
    ay.getBrainAddr()->showAllIdeas();

    INFO(TEST: ENDS);
    return (0);
}