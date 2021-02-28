#include<iostream>
#include<cstdlib>
#include"City.h"

using namespace std;

int main(){

    City Bremen;
    City Paris;
    City London;

    string name;
    int population;
    string mayor;
    double area;

                            //BREMEN
    //Name
    cout<< "Name: ";
    getline(cin,name);
    Bremen.setName(name);

    //Inhabitants
    cout << "Population: ";
    cin >> population;
    Bremen.setPopulation(population);

    //Mayor
    cout << "Mayor:";
    getchar();
    cin >> mayor;
    Bremen.setMayor(mayor);

    //Area
    cout << "Area: ";
     cin >> area;
     getchar();
    Bremen.setArea(area);

    //Print
    cout << endl;

                            //PARIS
    //Name
    cout << "Name:";
    getline(cin,name);
    Paris.setName(name);

    //Inhabitants
    cout << "Population: ";
    cin >> population;
     getchar();
    Paris.setPopulation(population);

    //Mayor
    cout << "Mayor:";
    cin >> mayor;
    Paris.setMayor(mayor);

    //Area
    cout << "Area: ";
     cin >> area;
    Paris.setArea(area);

     //Print
    cout << endl;

                            //London
    
    //Name
    cout << "Name:";
    getchar();
    getline(cin,name);

    London.setName(name);

    //Inhabitants
    cout << "Population: ";
    getchar();
    cin >> population;
    London.setPopulation(population);

    //Mayor
    cout << "Mayor:";
    cin >> mayor;
    London.setMayor(mayor);

    //Area
    cout << "Area: ";
     cin >> area;
    London.setArea(area);

     //Print

    cout << "NAME:     "<< " POPOULATION:  " << "        MAYOR:    "<<  "   AREA:   " << endl;
    cout<<"--------------------------------------------------------------------------------------"<<endl;
    London.print();
    Paris.print();
    Bremen.print();


    











}