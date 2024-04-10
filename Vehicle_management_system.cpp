#include<iostream>
#include<string>
using namespace std;

class Vehicle {
public:
    float mileage, price;

    void accept_data() {
        cout << "Enter the mileage of Vehicle: ";
        cin >> mileage;
        cout << "Enter the Price of Vehicle: ";
        cin >> price;
    }
};

class Car : public Vehicle {
public:
    float own_cost;
    int warranty, seat_cap;
    string fuel_type;

    void get_data_car() {
        cout << "Enter the own Cost of car: ";
        cin >> own_cost;
        cout << "Enter the Warranty(in years): ";
        cin >> warranty;
        cout << "Enter the Seating Capacity: ";
        cin >> seat_cap;
        cout << "Enter the Fuel type(Petrol/Disel): ";
        cin >> fuel_type;
    }
};

class Bike : public Vehicle {
public:
    int no_cylinder, no_gears;
    string cool_type, wheel_type;
    float fuel_tank_size;

    void get_data_bike() {
        cout << "Enter the No. of cylinder: ";
        cin >> no_cylinder;
        cout << "Enter the no. of gears: ";
        cin >> no_gears;
        cout << "Enter the Cooling type(air, liquid or gas): ";
        cin >> cool_type;
        cout << "Enter the Fuel tank size (in inchs): ";
        cin >> fuel_tank_size;
    }
};

class Audi : public Car {
public:
    string model_type;

    void get_data_audi() {
        cout << "Enter the Model type: ";
        cin >> model_type;
    }

    void display_audi() {
        cout << "\nDisplay details of Audi";
        cout << "\nMileage : " << mileage;
        cout << "\nPrice : " << price;
        cout << "\nOwn Cost of car: " << own_cost;
        cout << "\nWarranty(in years): " << warranty;
        cout << "\nSeating Capacity: " << seat_cap;
        cout << "\nFuel type(Petrol/Disel): " << fuel_type;
        cout << "\nModel type: " << model_type;
    }
};

class Ford : public Car {
public:
    string model_type_ford;

    void get_data_ford() {
        cout << "Enter the Model type: ";
        cin >> model_type_ford;
    }

    void display_ford() {
        cout << "\nDisplay details of Ford";
        cout << "\nMileage : " << mileage;
        cout << "\nPrice : " << price;
        cout << "\nOwn Cost of car: " << own_cost;
        cout << "\nWarranty(in years): " << warranty;
        cout << "\nSeating Capacity: " << seat_cap;
        cout << "\nFuel type(Petrol/Disel): " << fuel_type;
        cout << "\nModel type: " << model_type_ford;
    }
};

class Bajaj : public Bike {
public:
    string make_type_Bajaj;

    void get_data_bajaj() {
        cout << "Enter the Make type: ";
        cin >> make_type_Bajaj;
    }
};

class TVS : public Bike {
public:
    string make_type_tvs;

    void get_data_tvs() {
        cout << "Enter the Make type: ";
        cin >> make_type_tvs;
    }
};

int main() {
    int ch, choice;
    Audi a;
    Ford f;
    Bajaj b;
    TVS t;
    do {
        cout << "\nMENU\n1.Audi\n2.Ford\n3.Bajaj\n4.TVS";
        cout << "\nEnter ur Choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                do {
                    cout << "\nMENU\n1.Insert\n2.Display\nEnter ur Choice: ";
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            a.accept_data();
                            a.get_data_car();
                            a.get_data_audi();
                            break;
                        case 2:
                            a.display_audi();
                            break;
                        default:
                            cout << "\nInvalid Choice!!";
                            break;
                    }
                    cout << "\nDo you Want to Continue: ";
                    cin >> choice;
                } while (choice == 1);
                break;
            case 2:
                do {
                    cout << "\nMENU\n1.Insert\n2.Display\nEnter ur Choice: ";
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            f.accept_data();
                            f.get_data_car();
                            f.get_data_ford();
                            break;
                        case 2:
                            f.display_ford();
                            break;
                        default:
                            cout << "\nInvalid Choice!!";
                            break;
                    }
                    cout << "\nDo you Want to Continue: ";
                    cin >> choice;
                } while (choice == 1);
                break;
            case 3:
                b.accept_data();
                b.get_data_bike();
                b.get_data_bajaj();
                break;
            case 4:
                t.accept_data();
                t.get_data_bike();
                t.get_data_tvs();
                break;
        }
        cout << "\nDo you want to continue(1/0):  ";
        cin >> ch;
    } while (ch == 1);
    return 0;
}
