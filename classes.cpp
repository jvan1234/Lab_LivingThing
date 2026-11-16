#include "classes.hpp"
#include <iostream>

void Animal::printInfo() const {
    std::cout << "Animal" << std::endl;
}

void Fish::printInfo() const {
    Animal::printInfo();
    std::cout << "|" << std::endl;
    std::cout << "Fish" << std::endl;
}

void Sardine::printInfo() const {
    Fish::printInfo();
    std::cout << "|" << std::endl;
    std::cout << "Sardine" << std::endl;
}

void Bass::printInfo() const {
    Fish::printInfo();
    std::cout << "|" << std::endl;
    std::cout << "Bass" << std::endl;
}

void Mammal::printInfo() const {
    Animal::printInfo();
    std::cout << "|" << std::endl;
    std::cout << "Mammal" << std::endl;
}

void Cat::printInfo() const {
    Animal::printInfo();
    std::cout << "|" << std::endl;
    std::cout << "Cat" << std::endl;
}

void Tiger::printInfo() const {
    Cat::printInfo();
    std::cout << "|" << std::endl;
    std::cout << "Tiger" << std::endl;
}

void Plant::printInfo() const {
    std::cout << "Plant" << std::endl;
}

void Flower::printInfo() const {
    Plant::printInfo();
    std::cout << "|" << std::endl;
    std::cout << "Flower" << std::endl;
}

void LivingThingTreePrinter::print(const LivingThing &creature)
{
    creature.printInfo();
}
