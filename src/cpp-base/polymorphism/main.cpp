#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void sound() const
        {
            cout << "Animal sound" << endl;
        }
        
        virtual ~Animal() {
            cout << "Animal destructor" << endl;
        }

};

class Dog: public Animal
{
    public:
        void sound() const override
        {
            cout << "Woof" << endl;
        }

        ~Dog()
        {
            cout << "Dog destructor" << endl;
        }
};

class Cat: public Animal
{
    public:
        void sound() const override
        {
            cout << "Meow" << endl;
        }

        ~Cat()
        {
            cout << "Cat destructor" << endl;
        }
};

class Shape
{
    public:
        virtual int area() const = 0;
};

class Rectangle: public Shape
{
    private:
        int width; int height;
    public:
        Rectangle(int w, int h)
        {
            this->width = w;
            this->height = h;
        }
        int area() const override
        {
            return width * height;
        }
};

int main()
{
    Animal* animalPtr;

    animalPtr = new Dog();
    animalPtr->sound();
    delete animalPtr;

    animalPtr = new Cat();
    animalPtr->sound();
    delete animalPtr;

    Shape *shapePtr;
    Rectangle rect(5, 10);
    shapePtr = &rect;
    std::cout << "Area of rectangle: " << shapePtr->area() << std::endl;

    return 0;
}