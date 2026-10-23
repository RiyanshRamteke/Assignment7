# Assignment 7: Implementation of Polymorphism in C++

## About the Program

This C++ program demonstrates **polymorphism** (one name, many forms) in three ways:

| Type | Concept | Classes used | Meaning |
|---|---|---|---|
| Compile time | Function Overloading | `Calculator` | Same function name `add()` with different parameters |
| Compile time | Operator Overloading | `Complex` | The `+` operator is used to add two complex numbers |
| Run time | Virtual Function (Overriding) | `Animal`, `Dog`, `Cat` | A base class pointer calls the function of the derived class |

## Program Flow

1. **Function Overloading:** The `Calculator` class has three `add()` functions: `add(int, int)`, `add(int, int, int)` and `add(float, float)`. The compiler selects the correct one from the arguments.
2. **Operator Overloading:** Takes two complex numbers as input and adds them using `c3 = c1 + c2`.
3. **Virtual Function:** An `Animal` pointer first points to a `Dog` object and then to a `Cat` object. The same call `ptr->sound()` prints a different message each time because `sound()` is `virtual`.

## Files

| File | Description |
|---|---|
| `assi7.cpp` | C++ source code |
| `README.md` | Project description |

## How to Compile and Run

Requirement: a C++ compiler (g++) or Visual Studio Code with a C++ setup.

```bash
g++ assi7.cpp -o assi7
./assi7
```

On Windows PowerShell use `.\assi7` to run.

## Sample Input and Output

**Input:**

```
2 3
4 5
```

**Output:**

```
--- 1. Function Overloading ---
add(2, 3)       = 5
add(1, 2, 3)    = 6
add(1.5, 2.5)   = 4

--- 2. Operator Overloading ---
Enter real and imaginary part of first number: Enter real and imaginary part of second number: Sum = 6 + 8i

--- 3. Virtual Function ---
Dog says: Bhow Bhow
Cat says: Meow Meow
```

## Test Cases

| Test Case | Input | Expected Result |
|---|---|---|
| 1 | `2 3` and `4 5` | add results 5, 6, 4; Sum = 6 + 8i; Dog and Cat sounds are displayed |
| 2 | `1 1` and `2 2` | add results 5, 6, 4; Sum = 3 + 3i; Dog and Cat sounds are displayed |

## Compile Time vs Run Time Polymorphism

| Point | Compile time | Run time |
|---|---|---|
| Also called | Static / early binding | Dynamic / late binding |
| Achieved by | Function and operator overloading | Virtual functions (overriding) |
| Decided | By the compiler | While the program runs |

## Learning Outcomes

- Write many functions with the same name but different parameters.
- Change the meaning of an operator for a user-defined class.
- Use the `virtual` keyword to call the derived class function through a base class pointer.
- Identify compile time and run time polymorphism.

## Repository Details

- **Repository:** https://github.com/YOUR_USERNAME/Assignment7
- **Branch:** main
