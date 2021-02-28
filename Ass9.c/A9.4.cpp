#include<iostream>
#include<string>
#include<cstring>

using namespace std;

// overload two functions
// 2nd - 1st   in case of integers
// Number of occurences of a character 

int mycount(int first, int second){

    return second - first;
}

int mycount(char search, string mystring){

    int count = 0;
    //int length = mystring.length();
    int length = mystring.length();

        for (int i = 0; i < length; i++)
        {
            if (mystring[i] == search)
            {
                count++;
            }
            
        }
    return count;
}


int main(){

    int first = 0, second = 0;
    char search;
    string mystring;

    cout << "Enter two integers: " << endl;
    cin >> first;
    cin >> second;
    cout << endl;

    cout << "Enter a character and a string" << endl;
    cin >> search;
    getchar();
    getline(cin, mystring);
    cout<< endl;

    cout << "Difference = " << mycount(first, second) << endl;
    cout << "Number of occrences of the character: " << mycount(search, mystring) << endl;
    
return 0;

}