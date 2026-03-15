#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain(); 
    std::cout << "Cat default constructor called" << std::endl; 
}

Cat::~Cat()
{
    delete this->brain; 
    std::cout << "Cat destructor called" << std::endl; 
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = NULL; 
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        
        if (this->brain)
            delete this->brain; 
        this->brain = new Brain(*other.brain); 
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow! 🐱" << std::endl;
}