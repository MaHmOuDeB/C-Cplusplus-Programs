#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int& newhunger) {
	hunger = newhunger;
}

void Critter::setColor(string&newcolor){
	color = newcolor;
}

void Critter::setType(int newtype){

	type = newtype;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout << "I have a " << color << " skin " << "and my type is " << type << endl;
	cout << "My thirst level is " << thirst << endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getType(){
	return type;
}

std::string Critter::getColor(){
	return color;
}


Critter :: Critter(){

name = "Default_critter";
height = 5;
hunger = 0;
color = "No_color";
type = 0;
thirst = hunger;

cout << "Default constructor!" << endl;
}


Critter :: Critter(string n){

name = n;
height = 5;
hunger = 0;
color = "No_color";
type = 0;
thirst = hunger;

cout << "One parameters constructor" << endl;
}

Critter :: Critter(string n, int hun, int bored, double h){

name = n;
hunger = hun;
boredom = bored;
height = h;
color = "no_color";
type = 0;
thirst = hunger;

cout << "FOUR parameters constructor" << endl;

}

Critter :: Critter(string n, int hun, int bored, double h, double th){

name = n;
hunger = hun;
boredom = bored;
height = h;
thirst = th;

cout << "5 Parameters constructor " << endl;


}


//Definition of the two functions that will achieve the conversions

double Critter :: conversion_i_d(int& conv_hunger){
	hunger = conv_hunger / 10;
		return hunger;
}

int Critter :: conversion_d_i(double& conv_hunger){

	hunger = conv_hunger * 10;
		return hunger;
}


Critter :: Critter(const Critter & obj){
	
	cout << "Calling a copy constructor" << endl;
	hunger = *new int;
	hunger = obj.hunger;			//Normal variable example


	// Dealing with pointers.
	// Integer example
	//str = new int;
	//str = obj.str;


}



//without supplying any properties (which should set the name to ”default_critter”, the height to 5 and the rest to 0

//only supplying a name as parameter (which should set the height to 5 and the rest to 0)
//set the name to ”default_critter”, the height to 5 and the rest to 0

// name, hunger, boredom and height all as parameters. You should also be able to create an instance of the Critter class without specifying the height.
// If the height is not supplied, the critter has the default height of 10.




// 2ND QUESTION: The scope :: is included in the namespace std
// This scope allows the definition of a function 
// Outside of the Class itself as if the definition of the function
// was in the class.