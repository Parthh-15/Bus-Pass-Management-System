#include <iostream>
#include <string>
using namespace std;

class BusPass
{
private:
    string name;
    int age;
    string route;
    string passType;
    int fare;
    int expiryDays;

public:

    void registerPassenger()
    {
        cout << "----- Passenger Registration -----" << endl;

        cout << "Enter Passenger Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Route (Example: Station to College): ";
        getline(cin, route);

        cout << "\nSelect Pass Type" << endl;
        cout << "1. Daily Pass" << endl;
        cout << "2. Weekly Pass" << endl;
        cout << "3. Monthly Pass" << endl;

        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            passType = "Daily";
            fare = 50;
            expiryDays = 1;
        }
        else if(choice == 2)
        {
            passType = "Weekly";
            fare = 250;
            expiryDays = 7;
        }
        else if(choice == 3)
        {
            passType = "Monthly";
            fare = 800;
            expiryDays = 30;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    void generatePass()
    {
        cout << "\n\n========== BUS PASS ==========\n";

        cout << "Passenger Name : " << name << endl;
        cout << "Age            : " << age << endl;
        cout << "Route          : " << route << endl;
        cout << "Pass Type      : " << passType << endl;
        cout << "Fare           : Rs " << fare << endl;

        cout << "Expiry         : " << expiryDays << " days" << endl;

        cout << "==============================\n";
    }
};

int main()
{
    BusPass passenger;

    passenger.registerPassenger();

    passenger.generatePass();

    return 0;
}