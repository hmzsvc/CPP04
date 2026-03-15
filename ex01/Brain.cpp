#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;

    for(int i = 0; i < 100; i++)
        this->ideas[i] = "What should I do!";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& new_copy)
{
    std::cout << "Brain copy assignment called" << std::endl;
    if(this != &new_copy)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = new_copy.ideas[i];
    }
    return *this;
}