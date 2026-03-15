#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int count = 4;
    Animal* animals[count];

    for (int i = 0; i < count; i++) {
        if (i < count / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }   
    for (int i = 0; i < count; i++) {
        delete animals[i]; // Animal olarak siliniyor, virtual destructor şart! 
    }
    Dog basic;
    {
        Dog tmp = basic; // Copy constructor çalışır 
    } // tmp burada yok olur, eğer sığ kopya olsaydı basic'in beyni de giderdi! 
    
    return 0;
}