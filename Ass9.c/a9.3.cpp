#include<iostream>
#include<string>

using namespace std;

float abs( float& x){

if (x < 0){
//float y = -x;

return -x;
}

else
{
    return x;
}

}

int main(){


    float x;
cout << "Enter a float" << endl;
cin >> x;
cout << "The absolute value of x is " << abs(x) << endl;


return 0;
}

