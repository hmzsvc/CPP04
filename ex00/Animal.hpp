#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal(); // önemli !!!!!!!!!!!!!!!! 
        //sadece animalde virtual olmalı diğerlerine gerek yok neyden miras alacaksa ona göre uygun bir virtual eklenmeli 

        virtual void makeSound() const; 
        std::string getType() const;
};


#endif