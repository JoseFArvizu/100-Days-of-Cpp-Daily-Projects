#include <iostream>
#include "art.h"
using namespace std;

int main (){

    char decision_1, decision_2, decision_3;

    cout << "\n"<< chest_art << "\n";
    cout << "Welcome to the treasure island game!\n";
    cout << "Your mission is to find the treasure.\n";
    cout << "You start at a cross road. Where do you want to go?\n";
    cout << "Type r for right and l for left\n";
    cin >> decision_1;

    if (decision_1 == 'l'){
        cout << "\nGood choice!\n";
        cout << "Now you come to a lake. There is an island in the middle of the lake\n";
        cout << "Type w to wait for a boat. Type s to swim across\n";
        cin >> decision_2;
        if (decision_2 == 'w'){
            cout << "\nNailed!\n";
            cout << "You arrive at the island unharmed. There is a house with 3 doors.\n";
            cout << "One red, one yellow and one blue. Which color do you choose?\n";
            cout << "Type r to choose the red door, y for to choose the yellow door or b to choose the blue door\n";
            cin >> decision_3;
            if (decision_3 == 'r'){
                cout << "\nBurned by fire. Game over\n";
            }
            else if (decision_3 == 'b'){
                cout << "\nEaten by beasts. Game over.\n";
            }
            else if (decision_3 == 'y'){
                cout << "\nYou have found the Treasure! You Win!\n";
            }
            else{
                cout << "Game Over.";
            }
        }
        else{
            cout << "\nAttacked by trout. Game Over.\n";
        }


    }
    else{
        cout << "\nWrong path. Game Over.\n";
    }
}