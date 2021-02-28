#include<iostream>


using namespace std;

//1st: array of int :
// return first even and postive value
// else -1

int myfirst(int arr[10]){

    int mynumber = 0;

        for (int i = 0; i < 10; i++)
    {
            if (arr[i] % 2 == 0 && arr[i] > 0)
        {
        mynumber = arr[i];
        break;
        } 
    }
    if (mynumber == 0)
{
        return -1;
}
    else 
        return mynumber;

}


//2nd: array of doubles :
// return first neg # without fractional part
// else -1.1

double myfirst(double arr[10]){

    double mynumber = 0;

    for (int i = 0; i < 10; i++)
    {
        if ((arr[i] < 0) && (arr[i] == (int) arr[i])) 
        {
            mynumber = arr[i];
            break;
        }
    }

        if (mynumber == 0)
    {
        return -1.1;
    }

        else 
        return mynumber;
}

//3rd: array of chars :
//return first consnant
// else '/0'
    
int myfirst(char arr[10]){

    int count = 0;

for (int i = 0; i < 10; i++)
{
    if ((arr[i] != 'a') && (arr[i] != 'e') && (arr[i] != 'u') &&
     (arr[i] != 'i') && (arr[i] != 'o')) 
    {
        count++;
    }
    
}
return count;  
}

   
int main(){

    int i_arr[10];
    double d_arr[10];
    char c_arr[10];

cout << "Enter an array of int, doubles, and chars respectively: "<< endl << endl;

        for (int i = 0; i < 10; i++)
    {
        cin >> i_arr[i];
        
    }
    cout << endl;

        for (int i = 0; i < 10; i++)
    {
        cin >> d_arr[i];
    }
    cout << endl;



        for (int i = 0; i < 10; i++)
    {
        cin >> c_arr[i];
    }
    cout << endl;
    cout << endl;
    cout << "int: " << myfirst(i_arr) << endl;
    cout << "double: " << myfirst(d_arr) << endl;
    cout << "char: " << myfirst(c_arr) << endl;

return 0;
}
