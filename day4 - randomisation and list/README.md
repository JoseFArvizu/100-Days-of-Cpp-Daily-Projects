# 🎮 Rock, Paper, Scissors – C++ Console Game

A simple **Rock, Paper, Scissors** game written in **C++**, played in the terminal against the computer.  
The program uses random number generation, user input validation, and ASCII art to create an interactive console experience.

---

## 📌 Features

- Play Rock, Paper, Scissors against the computer
- Input validation to ensure correct user choices
- Randomized computer selection
- ASCII art display for each option
- Clear win / lose / draw feedback

---

## 🧠 How the Game Works

1. The user chooses:
   - `0` → Rock  
   - `1` → Paper  
   - `2` → Scissors
2. The computer randomly selects an option.
3. The program compares both choices using standard game rules.
4. The result (Win / Lose / Draw) is displayed in the terminal.

---

## 🗂️ Project Structure

```
.
├── rock_scissors_paper.cpp
├── art.cpp
├── art.h
└── README.md
```

- `rock_scissors_paper.cpp` → Main game logic  
- `art.h` → ASCII art for rock, paper, and scissors  

---

## ⚙️ Requirements

- C++ compiler (GCC recommended)
- C++11 or later

---

## ▶️ How to Compile and Run

### Compile
```bash
g++ rock_scissors_paper.cpp art.cpp -o rock_scissors_paper
```

### Run
```bash
./rock_scissors_paper
```

---

## 🧪 Example Output

```
What do you choose? Type 0 for rock, 1 for paper or 2 for scissors.
0

You choose rock
[ASCII art for rock]

Computer choose scissors
[ASCII art for scissors]

You Win!
```

---

## 🚀 Future Improvements

- Score tracking (best of 3 / best of 5)
- Replay option without restarting the program
- Improved game rules structure
- Cross-platform enhancements

---

## 👤 Author

**Jose Francisco Arvizu Astorga**  
