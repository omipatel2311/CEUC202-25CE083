#include<iostream>
using namespace std;
class Fuel
{
protected:
    string fueltype;
public:
    Fuel(string f){
    fueltype = f;
    }
};
class Brand
{
protected:
    string brandname;
public:
    Brand(string b)
    {
    brandname = b;
    }
};
class Car : public Fuel,public Brand
{
public:
    Car(string f,string b) : Fuel(f),Brand(b){}
    void display()
    {
        cout<<"Type of fuel : "<<fueltype<<endl;
        cout<<"Name of brand : "<<brandname<<endl;
    }
};
int main()
{
    int n, choice;
    string brand;

    cout << "Enter number of cars: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\nCar " << i + 1 << endl;

        cout << "Enter brand name: ";
        cin >> brand;

        cout << "Select Fuel Type:\n";
        cout << "1. Petrol\n2. Diesel\n3. Electric\n";
        cout << "Enter choice: ";
        cin >> choice;

        string fuel;
        switch(choice)
        {
        case 1:
            fuel = "Petrol";
            break;
        case 2:
            fuel = "Diesel";
            break;
        case 3:
            fuel = "Electric";
            break;
        default:
            fuel = "Unknown";
        }
        Car c(fuel, brand);
        cout << "\nCar Details:\n";
        c.display();
    }

    return 0;
}
