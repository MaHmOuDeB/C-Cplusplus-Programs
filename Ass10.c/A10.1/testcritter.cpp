#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	//INTIALIZATION OF THE CONSTRUCTORS.
	Critter c;
	Critter c11;
	Critter c2("Mahmoud");
	Critter c3("MOMO", 2, 3, 1.5);
	Critter c4("MOMO", 2, 3);	
	Critter c5("BABABA", 6, 10, 1.5, 12.3 );

	//PRINTING THE VALUES
	c11.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();

	string name;
	int hunger;
	string color;
	int type;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	 
	 //Color
	 cout << "Color: ";
	 getchar();
	 getline(cin, color);
	 c.setColor(color);

	 //Type
	 cout << "Type:";
	 cin >> type;
	 c.setType(type);

	//Print
	cout << "You have created:" << endl;
	c.print();
        return 0;

	//values for c1                                     

	


}

//1ST QUESTION: When adding the command namespace std,
//we can see that this namespace contain the string class,
// As well as the basic functionalities such as cout and cin