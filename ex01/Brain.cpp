#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = "BraiiiiiiinnnzzzZ...";
        i++;
    }
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