#include <iostream>
using namespace std;

/* virtual function is defined in base class
and redefined in derived */
class Instrument
{
public:
    virtual void makeSound() = 0; // pure virtual function
};

class Accordion : public Instrument
{
public:
    void makeSound()
    {
        cout << "Accordion playing...\n";
    }
};

class Piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "Piano playing...\n";
    }
};

int main()
{
    Instrument *i1 = new Accordion();
    // i1->makeSound();
    Instrument *i2 = new Piano();
    // i2->makeSound();

    Instrument *instruments[2] = {i1, i2};
    for (int i = 0; i < 2; i++)
        instruments[i]->makeSound();

    return 0;
}