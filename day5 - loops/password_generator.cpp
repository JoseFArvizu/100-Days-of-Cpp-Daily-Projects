#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;


int main() {
    vector<char> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    vector<char> numbers = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    vector<char> symbols = {'!', '#', '$', '%', '&', '(', ')', '*', '+'};

    int user_letter;
    int user_number;
    int user_symbol;

    cout << "Welcom to CPassword Generator! \n";
    cout << "How man letter would ou like in our password?\n";
    cin >> user_letter;
    cout << "How many symbols would you like?\n";
    cin >> user_symbol;
    cout << "How many numbers do you want?\n";
    cin >> user_number;

    vector<char> password = {};

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> letter_dist(0, letters.size() - 1);
    uniform_int_distribution<> number_dist(0, numbers.size() - 1);
    uniform_int_distribution<> symbol_dist(0, symbols.size() - 1);

    for (int i = 0; i < user_letter; i++) {
        password.push_back(letters[letter_dist(gen)]);
    }

    for (int i = 0; i < user_number; i++) {
        password.push_back(numbers[number_dist(gen)]);
    }

    for (int i = 0; i < user_symbol; i++) {
        password.push_back(symbols[symbol_dist(gen)]);
    }

    shuffle(password.begin(), password.end(), gen);

    cout << "Your password is: ";
    for(char x : password){
        cout << x;
    }


}