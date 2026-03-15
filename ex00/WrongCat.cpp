#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << this->type << " constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << this->type << " destructor called." << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat sound!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& new_copy)
{
    std::cout << "WrongCat operator assignment called" << std::endl;
    this->type = new_copy.type;
    return *this;
}