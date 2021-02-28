#include<iostream>

using namespace std;

class Complex{

    private:

int real;
int imaginary;

    public:

//CONSTRUCTORS

Complex();  //Properties to 0
Complex(int, int = 0);
Complex(const Complex & copy);
~Complex();

//SETTER METHOD
void setReal(int newreal);
void setImaginary(int newimaginary);

// GETTER METHOD
int getReal();
int getImaginary();


//Print function
void print();

//Conjugant of a complex number
Complex conjugate(Complex);    

//Addtion of two complex numbers
Complex addition(Complex, Complex);

//Substraction of two complex numbers
Complex substraction(Complex, Complex);

//Multiplying of two complex numbers
Complex multiplication(Complex, Complex);

};


