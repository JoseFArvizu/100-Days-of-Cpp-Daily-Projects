#include <iostream>
#include "art.h"
#include "word_list.h"
#include <vector>
#include <string>
#include <random>
#include <algorithm>

using namespace std;

string random_word_selection() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> word_dist(0, word_list.size() - 1);
    string word_4_game = word_list[word_dist(gen)];
    return word_4_game;
}


int main() {
    //Choose word for the game
    string word_4_game = random_word_selection();
    //Empty string to guess
    vector<char> guess = {};
    int art_stages = 6;
    // print guess
    for(char letter : word_4_game){
        guess.push_back('_');
    }
    //print selectef word (for testing)
    //cout << "\n" << word_4_game << "\n";
    
    char user_guess;
    cout << logo << "\n";
    // While loop
    while (art_stages > 0){
        // First char asked to user
        cout << "Word to guess: ";
        for(char us : guess){
            cout << us << " ";
        }
        cout << "\nGuess a letter: ";
        cin >> user_guess;
        user_guess = tolower(user_guess);

        // Loose a life
        if(word_4_game.find(user_guess) == string::npos){
            cout << "You gueesed " << user_guess << ", that's not in the word. You loose a life";
            art_stages = art_stages -1;
            cout << stages[art_stages];
            if(art_stages == 0){
                cout << "\n******************************* The word was " << word_4_game << "! you lose *******************************\n";
                break;

            }
        }

        // Repeat the letter
        else if (find(guess.begin(), guess.end(), user_guess) != guess.end()){
            cout << "You already guessed that letter\n";
            cout << stages[art_stages];

        }

        // guessed a letter
        else{
            cout << "You guessed a letter!";
            for(int i = 0; i < word_4_game.size(); i++){
                if (user_guess == word_4_game[i]){
                    guess[i] = user_guess;
                }
            }
            if(find(guess.begin(), guess.end(), '_') == guess.end()){
                cout << "\nYou have guessed the word, you won!";
                break;
            }
            cout << stages[art_stages];
        }

        cout << "\n******************************* " << art_stages << "/6 LIVES LEFT *******************************\n";
    }
}