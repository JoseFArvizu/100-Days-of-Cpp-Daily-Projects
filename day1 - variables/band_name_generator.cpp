#include <iostream>
using namespace std;

int main() {
    // Setting Variables
    string city, pet;

    // Asking user for info
    cout << "\nWelcome to the band name generator\n";
    cout << "\nWhat's the name of the city you grew up in?\n";
    cin >> city;
    cout << "\nWhat's your pet's name?\n";
    cin >> pet;

    // Output final band name
    cout << "\nYour band name could be " << city << pet << "!\n\n";

    return 0;
}