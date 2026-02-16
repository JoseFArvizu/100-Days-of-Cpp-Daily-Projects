# 🔐 C++ Password Generator

A simple and interactive **C++ password generator** that creates strong,
randomized passwords based on user-defined criteria.

This project demonstrates the use of: - `std::vector` - `std::random` -
`std::shuffle` - Modern C++ random number generation (`mt19937`)

Perfect for beginners learning C++ and anyone who wants a customizable
password generator 🚀

------------------------------------------------------------------------

## ✨ Features

-   🔤 Custom number of letters (uppercase & lowercase)
-   🔢 Custom number of numbers
-   🔣 Custom number of symbols
-   🎲 Secure random generation using `std::random_device` and `mt19937`
-   🔀 Password shuffling using `std::shuffle`
-   💻 Runs directly in the terminal

------------------------------------------------------------------------

## ⚙️ How It Works

1.  📝 The program asks the user for:
    -   Number of letters
    -   Number of symbols
    -   Number of numbers
2.  🎲 Random characters are selected using uniform distributions.
3.  🔄 The password characters are shuffled for extra randomness.
4.  ✅ The final password is printed to the console.

------------------------------------------------------------------------

## 🖥️ Requirements

-   🧠 C++11 or newer
-   🛠️ A C++ compiler such as:
    -   `g++`
    -   `clang++`
    -   MSVC (Visual Studio)

------------------------------------------------------------------------

## ▶️ How to Compile and Run

### 🔹 Using g++

``` bash
g++ password_generator.cpp -o password_generator -std=c++11
./password_generator
```

### 🔹 Using clang++

``` bash
clang++ password_generator.cpp -o password_generator -std=c++11
./password_generator
```

### 🔹 Windows (MinGW)

``` bash
g++ password_generator.cpp -o password_generator.exe -std=c++11
password_generator.exe
```

------------------------------------------------------------------------

## 🧪 Example Output

    Welcom to CPassword Generator!

    How man letter would ou like in our password?
    8
    How many symbols would you like?
    2
    How many numbers do you want?
    3

    Your password is: A9f#T2$kP1

------------------------------------------------------------------------

## 📁 Project Structure

    password_generator.cpp
    README.md

------------------------------------------------------------------------

## 🧠 Concepts Practiced

-   Vectors (`std::vector`)
-   Random number generation (`std::random_device`, `std::mt19937`)
-   Uniform distributions
-   Iteration with loops
-   Shuffling containers
-   Console input/output

------------------------------------------------------------------------

## ⚠️ Notes

-   📘 This project is intended for learning and personal use.
-   🔐 While `mt19937` is good for most applications, it is not
    cryptographically secure.
-   For production-level security, consider cryptographic libraries
    designed for secure randomness.

------------------------------------------------------------------------

## 📜 License

🆓 This project is open-source and available under the MIT License.
