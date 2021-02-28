#include<iostream>
#include "Complex.h"

using namespace std;

Complex :: Complex(){
    real = 0;
    imaginary = 0;

  //  cout << "Empty constructor" << endl;
}

Complex :: Complex(int r, int im){
    real = r;
    imaginary = r;

   // cout << "Parametric constructor" << endl;

}

Complex :: Complex(const Complex & c){
    Complex c1;
    c1.real = *new int;
    c1.real = c.real;
    c1.imaginary = *new int;
    c1.imaginary = c.imaginary;
    // c1 = *new Complex;
    // c1 = c;

   // cout << "COPY CONSTRUCTOR" << endl;

}

Complex :: ~Complex(){
  //  cout << "Call of the destructor" << endl;
}


void Complex :: setReal(int newreal){

    real = newreal;
}

void Complex :: setImaginary(int newimaginary){

    imaginary = newimaginary;
}

int Complex :: getImaginary(){

    return imaginary;
}

int Complex :: getReal(){
    return real;
}

void Complex :: print(){

  //  cout << noshowpos << real << showpos << imaginary << "i" << endl;

}

Complex Complex :: conjugate(Complex c1){
    Complex c;
    c.real = c1.real ;
    c.imaginary = - c1.imaginary;

return c;
   //cout << noshowpos << c1.real << showpos << c1.imaginary << "i" << endl;
}

Complex Complex :: addition(Complex c1, Complex c2){
Complex c;
c.real = c1.real + c2.real;
c.imaginary = c1.imaginary + c2.imaginary;

return c;
}

Complex Complex :: substraction(Complex c1, Complex c2){
Complex c;
    c.real = c1.real - c2.real;
    c.imaginary = c1.imaginary - c2.imaginary;
//print();
return c;
}

Complex Complex :: multiplication(Complex c1, Complex c2){
Complex c;
    c.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    c.imaginary = (c1.real * c2.real) + (c1.imaginary * c2.imaginary);

return c;
}
