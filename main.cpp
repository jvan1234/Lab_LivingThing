#include "classes.hpp"
#include <iostream>

int main(int args, char** argsv)
{
    LivingThing* objects[3] = {new Flower(), new Sardine(), new Cat()};

    for (LivingThing* object : objects)
    {
        LivingThingTreePrinter::print(*object);
        std::cout << std::endl;
    }

    return 0;
}
