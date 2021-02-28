#include<iostream>
void substract_max(int dyn_arr[], int number);
void deallocate(int dyn_arr[]);

using namespace std;

int main(){

    int number;
    cout << "How many value fo you want to store" << endl;
    cin >> number;

    //Dynamic allocation
    int* dyn_arr = NULL;
    dyn_arr = new int[number];

    cout << "Store values in the array:" << endl;

    for (int i = 0; i < number; i++)
    {
        cin >> dyn_arr[i];
    }

    cout << endl;

    //Max function
    substract_max( dyn_arr,  number);

    //Deallocation function
    deallocate(dyn_arr);

    //Printing the new values of the elements of the array

    for (int i = 0; i < number; i++)
    {
        cout << dyn_arr[i] << endl;
    }
    

    return 0;
}

void substract_max(int dyn_arr[], int number){

int max = dyn_arr[0];

//Finding the Biggest number

    for (int i = 0; i < number; i++)
{
        if (dyn_arr[i] > max)
    {
        max = dyn_arr[i];
    }

}    

//Substracting the biggest value from all the elements of the array
    for (int i = 0; i < number; i++)
    {
        dyn_arr[i] = dyn_arr[i] - max;
    }
     

}


//Deallocation

void deallocate(int dyn_arr[]){

    delete [] dyn_arr;
}
