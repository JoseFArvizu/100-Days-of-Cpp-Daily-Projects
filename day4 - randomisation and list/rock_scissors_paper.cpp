#include <iostream>
#include <list>
#include <vector>
#include "art.h"
using namespace std;


int ask_user_4_option (){
    int user_choice;
    while (true){
        cout << "\nWhat do you choose? Type 0 for rock, 1 for paper or 2 for scssors.\n";
        cin >> user_choice;
        if (user_choice == 0 || user_choice == 1 || user_choice == 2){
            return user_choice;
        }
        else{
            cout << "Please choose only 0, 1 or 2\n";
        }
    }
    
}

int game_rules(int user_option, int computer_option){
    if (user_option == computer_option){
        cout << "\nIts a Draw\n";
    }
    else if (user_option == 0 && computer_option == 1){
        cout << "\nYou Win!\n";
    }
    else if (user_option == 1 && computer_option == 2){
        cout << "\nYou Win!\n";
    }
    else if (user_option == 2 && computer_option == 0){
        cout << "\nYou Win!\n";
    }
    else{
        cout << "\nYou Lose!\n";
    }
    return 0;
}

int main (){
    // Vectors setup
    int user_option;
    vector<string> option = {"rock", "scissors", "paper"};
    vector<string> art = {rock, scissors, paper};
    
    // User option
    user_option = ask_user_4_option();
    cout << "\nYou choose " << option[user_option] << "\n";
    cout << art[user_option];

    // Computer option
    srand(time(0));
    int computer_option = rand() % 3;
    cout << "\nComputer choose " << option[computer_option] << "\n"; 
    cout << art[computer_option];

    // Game rules
    game_rules(user_option, computer_option);


}