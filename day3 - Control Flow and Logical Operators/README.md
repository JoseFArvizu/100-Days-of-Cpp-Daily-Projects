# 🏝️ Treasure Island — Console Decision Game (C++)

A text-based adventure game written in C++ where the player makes decisions
that affect the outcome of the story.
This project focuses on control flow, modular code organization,
and ASCII art rendering in the console.

---

## 🎮 Gameplay Overview
- The player is presented with narrative choices
- Each decision leads to a different outcome
- ASCII art is used to enhance the game experience

---

## 🛠️ Technologies Used
- C++
- Standard Library (`iostream`, `string`)
- Raw string literals for ASCII art

---

## 📂 File Structure
```
treasure_island/
│
├── treasure_island.cpp   // Main game logic
├── treasure_art.cpp      // ASCII art definitions
└── art.h                 // Art declarations
```

---

## ▶️ How to Compile and Run
Make sure all files are compiled together:

```bash
g++ treasure_island.cpp treasure_art.cpp -o treasure_island
./treasure_island
```

---

## 🧠 Key Concepts Demonstrated
- Decision-based game logic (`if / else`)
- Separating code into `.h` and `.cpp` files
- Using `extern` variables
- Printing large ASCII art using raw string literals

---

## ✨ Features
- Clean separation of logic and visuals
- Easy to extend with new scenes and decisions
- Console-friendly design

---

## 🔮 Future Improvements
- More story branches
- Scene system using enums
- Screen clearing between scenes
- ASCII animations

---

## 👤 Author
**Jose Francisco Arvizu Astorga**
