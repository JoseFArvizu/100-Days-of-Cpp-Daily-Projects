#include <iostream>
using namespace std;

int main() {
    // declare variables
    double bill, tip, split_people;
    char split_decision;

    // Ask for bill amount
    cout << "\nWelcome to tip calculator\n";
    cout << "\nPlease provide the bill amount: $";
    cin >> bill;

    // Ask for tip percentage
    cout << "\nPlease provied the tip percentage: ";
    cin >> tip; 
    
    // Ask if they wanto to splitthe bill
    cout << "\nDo you want to split the bill? (y/n) ";
    cin >> split_decision;
    
    // Start calculation
    tip = tip / 100;
    tip = bill * tip;
    bill = bill + tip;

    if (split_decision == 'y'){
        cout << "\nIn how many people you like to split the bill? ";
        cin >> split_people; 
        bill = bill / split_people;
        cout << "\nThe amount to pay per person is $" << bill << "\n";
    }

    else{
        cout << "\nThe total bill is $" << bill << "\n";
    }
    
    return 0;
}