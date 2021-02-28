#include<iostream>
#include<ctime>

using namespace std;

int main(){

    string strings[17]  = {"Laptop" , "TV", "KEYBOAD", "Laptop",
                            "Mouse", "a", "b", "c", "d", "e", "f",
                             "g", "h", "i", "j", "k", "l" };


// Random number pick
    int randomnum;
    int randword;
srand(static_cast < unsigned int > (time(0)));
randomnum = rand();
randword = (randomnum % 17);

cout << "Random string: " << strings[randword] << endl;


return 0;
}