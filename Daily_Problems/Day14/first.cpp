#include <bits/stdc++.h>
using namespace std;

class Car
{
    public:
    string name ;
    string model ;
    string engine ;
    int n_seats;

    Car(string n , string m, string e, int nn)
    {
        name = n ;
        model = m ;
        engine = e ;
        n_seats=nn;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number_of_seats: " << n_seats << endl;
    }

};

int main()
{
    string n,m,e;
    int nn;
    cout << "Enter the name of the car: ";
    cin>>n;
    cout << "Enter the model of the car: ";
    cin>>m;
    cout << "Enter the engine of the car: ";
    cin>>e;
    cout << "Enter the number of seats of the car: ";
    cin>>nn;
    Car c1= Car(n , m, e ,nn);
    c1.displayInfo();
}
