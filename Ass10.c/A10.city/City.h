#include<iostream>
#include<string>

using namespace std;

class City{

    private:
        std::string name;
        int population;
        std::string mayor;
        double area;

    public:

    //Setter method
        void setName(string&newname );
        void setPopulation(int& newpopulation);
        void setMayor(string& newmayor);
        void setArea(double& newArea);
        
    
    //Getter Method
        string getName();
        int getPopulation();
        string getMayor();
        double getArea();
    
    //Print function
    void print();
}; 