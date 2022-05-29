// Program to show multilievel inheritance.

#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animals are faithful.\n";
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "This is a dog.\n";
    }
};

class Faithful : public Dog
{
public:
    Faithful()
    {
        cout << "Dog is most faithful\n";
    }
};

int main()
{

    Faithful obj;

    return 0;
}