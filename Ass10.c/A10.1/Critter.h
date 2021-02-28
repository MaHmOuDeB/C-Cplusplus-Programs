#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	std::string color;
	int type;
	int hunger;
	int boredom;
	double height;
	double thirst;
	int * str;
	
//Conversion of the Hunger levels to percentage scale

double conversion_i_d(int& conv_hunger);
int conversion_d_i(double& conv_hunger);

	

public: // business logic methods are public

	// setter methods
	void setName(std::string& newname);
	void setHunger(int& newhunger);
	void setBoredom(int newboredom);
	void setColor(std::string& newcolor);
	void setType(int newtype);


	// getter method
	int getHunger();
	std::string getColor();
	int getType();
	

	//Constructors
	Critter(); 				//empty constructor
	Critter(std::string name);     // Contructor with one parameter
	//Constructor with 4 parameterss
	Critter(std::string name, int hunger, int boredom, double height = 0.0);
	//Construtor with 5 parameters
	Critter(std :: string, int, int, double, double);
	//Copy constructor
	Critter(const Critter & copy);



	// service method
	void print();
};