#include<iostream>
#include"City.h"

using namespace std;

void City::setName(string& newname){
    name = newname;
}

void City::setPopulation(int& newpopulation){
    population = newpopulation;
}

void City::setMayor(string& newmayor){
mayor = newmayor;
}

void City::setArea(double& newarea){
area = newarea;
}


string City :: getName(){
    return name;
}

int City :: getPopulation(){
    return population;
}

string City :: getMayor(){
    return mayor;
}

double City :: getArea(){
    return area;
}

void City :: print(){

cout << name << "       " << population << "        ";
cout << "       " << mayor << "         " << area << endl;    


//set the name to ”default_critter”, the height to 5 and the rest to 0
}
