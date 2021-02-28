#include <iostream>

using namespace std;

void swapping(int &first, int &second) {

    int inter = first;
    first = second;
    second = inter;
     } // swap ints

void swapping(float &first, float &second) {

     float inter = first;
     second = first;
     first = inter;
     } // swap floats

void swapping(const char* &first,const char* &second) { 

   const char* inter = second;
    second = first;
    first = inter;

 } // swap char pointers

int main(void) {
int a = 7, b = 15; 
 float x = 3.5, y = 9.2;
 const char*str1 = "One";
  const char*str2 = "Two";
   cout << "a=" << a << ", b=" << b << endl;
   cout << "x=" << x << ", y=" << y << endl;
   cout << "str1=" << str1 << ", str2=" << str2 << endl;
   swapping(a, b);
   swapping(x, y);
   swapping( str1, str2);
   cout << "a=" << a << ", b=" << b << endl;
   cout << "x=" << x << ", y=" << y << endl;
   cout << "str1=" << str1 << ", str2=" << str2 << endl;
   return 0;
}