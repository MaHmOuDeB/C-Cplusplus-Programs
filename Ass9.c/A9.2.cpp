#include<iostream>
#include<string>

using namespace std;

int main(){

    int n;
    double x;
    string s;

    cout << "Read an integer, a double, and a string respectively" << endl;
    cin >> n;
    cin >> x;
    getchar();
    getline(cin, s);

    for (int i = 0; i < n; i++)
    {
        cout << s << ":" << x << endl;
        
    }
    

}