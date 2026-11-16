#ifndef LIVING_THING_HPP
#define LIVING_THING_HPP

class LivingThing {
    public:
        virtual void printInfo() const = 0;
};

class Animal : public LivingThing {
    public:
        void printInfo() const override;
};

class Fish : public Animal {
    public:
        void printInfo() const override;
};

class Sardine : public Fish {
    public:
        void printInfo() const override;
};

class Bass : public Fish {
    public:
        void printInfo() const override;
};

class Mammal : public Animal {
    public:
        void printInfo() const override;
};

class Cat : public Mammal {
    public:
        void printInfo() const override;
};

class Tiger : public Cat {
  public:
    void printInfo() const override;
};

class Plant : public LivingThing {
    public:
        void printInfo() const override;
};

class Flower : public Plant {
    public:
        void printInfo() const override;
};

class LivingThingTreePrinter {
  public:
    static void print(const LivingThing& creature);
};

#endif
