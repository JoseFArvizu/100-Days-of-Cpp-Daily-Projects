
# 🕹️ Hangman Game (C++)

A simple command-line implementation of the classic Hangman game built in C++.
The player must guess the hidden word letter by letter before running out of lives.

---

## 📌 Features

- Random word selection using <random> (Mersenne Twister engine)
- ASCII art visualization of hangman stages
- 6 lives per game
- Detection of repeated guesses
- Win / lose condition handling
- Terminal-based interaction
- Modular structure using header files

---

## 📂 Project Structure

.├── main.cpp        # Main game logic
├── word_list.h     # Contains the list of possible words
├── art.h           # ASCII art stages for the hangman
└── README.md

---

## 🚀 How to Compile and Run

### 1️⃣ Compile the program

Using g++:

g++ main.cpp -o hangman

If your project is split into multiple .cpp files, compile them together:

g++ main.cpp other_file.cpp -o hangman

---

### 2️⃣ Run the game

On macOS / Linux:

./hangman

On Windows:

hangman.exe

Make sure you are using a C++11 (or newer) compatible compiler.

---

## 🎮 How the Game Works

1. The program randomly selects a word from word_list.
2. The player starts with 6 lives.
3. The word is displayed as underscores (_ _ _ _).
4. Each incorrect guess:
   - Reduces one life
   - Displays the next hangman ASCII stage
5. The game ends when:
   - The player guesses all letters correctly (Win)
   - The player runs out of lives (Loss)

---

## 🛠 Requirements

- C++11 or newer
- Standard Library components used:
  - iostream
  - vector
  - string
  - random
  - algorithm

No external libraries are required.

---

## 🧠 Technical Concepts Demonstrated

- Random number generation using std::mt19937
- Use of vectors for dynamic character storage
- String search using .find()
- Algorithm utilities (std::find)
- Loop control and conditional logic
- Modular project design using header files

---

## 🧑‍💻 Author

Jose Francisco Arvizu Astorga
