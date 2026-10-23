#include <iostream>
using namespace std;

// 1. COMPILE TIME POLYMORPHISM : Function Overloading
//    Same function name "add", but different parameters
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }
};

// 2. COMPILE TIME POLYMORPHISM : Operator Overloading
//    The + operator is changed to add two Complex numbers
class Complex {
public:
    int real, imag;

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

// 3. RUN TIME POLYMORPHISM : Virtual Function (Function Overriding)
class Animal {
public:
    virtual void sound() {          // virtual = decide at run time
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog says: Bhow Bhow" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat says: Meow Meow" << endl;
    }
};

int main() {
    cout << "--- 1. Function Overloading ---" << endl;
    Calculator calc;
    cout << "add(2, 3)       = " << calc.add(2, 3) << endl;
    cout << "add(1, 2, 3)    = " << calc.add(1, 2, 3) << endl;
    cout << "add(1.5, 2.5)   = " << calc.add(1.5f, 2.5f) << endl;

    cout << endl << "--- 2. Operator Overloading ---" << endl;
    Complex c1, c2, c3;
    cout << "Enter real and imaginary part of first number: ";
    cin >> c1.real >> c1.imag;
    cout << "Enter real and imaginary part of second number: ";
    cin >> c2.real >> c2.imag;

    c3 = c1 + c2;                   // uses our operator+
    cout << "Sum = " << c3.real << " + " << c3.imag << "i" << endl;

    cout << endl << "--- 3. Virtual Function ---" << endl;
    Dog d;
    Cat c;
    Animal *ptr;                    // base class pointer

    ptr = &d;
    ptr->sound();                   // calls Dog's sound()

    ptr = &c;
    ptr->sound();                   // calls Cat's sound()

    return 0;
}