/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:22 by aputiev           #+#    #+#             */
/*   Updated: 2023/11/01 14:20:36 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "includes/Colors.hpp"
#include "includes/Animal.hpp"

/*  ================*= Constructors =*================= */

Animal::Animal() : type("SpongeBob")
{
    std::cout << BLUE << "Animal default constructor called\n" << RESET;
}

Animal::Animal(std::string & userDefinedType) : type(userDefinedType)
{
    std::cout << BLUE << "Animal constructor called\n" << RESET;
}

Animal::Animal(const Animal & source) 
{
    std::cout << BLUE << "Animal copy constructor called\n" << RESET;
    *this = source;
}


/*  ================*=  Destructor: =*================= */

Animal::~Animal()
{
    std::cout << RED << "Animal destructor called\n" << RESET;
}

/*  ================*=  Overload "=" operator: =*================= */

Animal & Animal::operator=(Animal const & source)
{
    std::cout << YELLOW << "Animal \"=\" operator called\n" << RESET;
    if(this != &source)
    {
        this->type = source.type;
    }
    return *this;
}




/*  ================*=  Public Functions: =*================= */

std::string const Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{    
    std::cout << PURPLE << this->type << " says: I am Sponge Bob! Are you ready kids?\n" << RESET;
}