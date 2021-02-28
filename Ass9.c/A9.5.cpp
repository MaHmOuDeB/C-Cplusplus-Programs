#include<iostream>
#include<ctime>

using namespace std;

int main(){

    string name;
    int randomNumber;
    int game;
    int guess = 0;
    cout << "What is your name? ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    // Random number pick
    srand(static_cast < unsigned int > (time(0)));
    randomNumber = rand();
    game = (randomNumber % 100) + 1;
    
    //Player's guess
    while(guess != game){

        cout << "What is your try? ";
        cin >> guess;

            if (guess > game)
            {
                cout << "Too high" << endl;
            }

            if (guess < game)
            {
                cout << "Too low" << endl;
            }
            
            else {
                cout << "CONGRATULATIONS" << endl;  
                exit(0);
            }
    }
}