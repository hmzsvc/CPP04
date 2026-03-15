#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    
    const int count = 8;
    Animal* animals[count];

    for (int k = 0; k < count; k++) {
        if (k < count / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }
    
    for (int k = 0; k < count; k++) {
        delete animals[k];
    }


    return 0;
}