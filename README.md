# Lab 10 – Structures
This folder contains solved problems from Lab 10 of the "Programming Fundamentals" course.
## Topics Covered
- Declaring and defining struct types
- Structure members: simple, arrays, nested structures, self-referencing pointers
- Structure initialization and member access
- Passing structures to/from functions
- Structure copy by value
- Struct usage for geometric, arithmetic, and real-world modeling
- Input/output operations with structures
- File reading using structures
## Problems
### Part 1 – Basic Structure Usage
#### Problem 1.1 – FRACTIE Type and Operations
- Define structure _FRACTIE for rational numbers with two int members
- Typedef synonym: FRACTIE
- Implement functions for:
  - Inverse of a fraction
  - Sum, difference, product of two fractions
  - Reduce result using Euclid’s GCD algorithm
- Read data from a file and display results based on user's choice
#### Problem 1.2 – TIMP Type and Time Arithmetic
- Define structure TIMP with hour, minute, second
- Implement functions for:
  - Summing two TIMP values
  - Subtracting two TIMP values
  - Calculating total worked time based on t1–t4 moments
- Display result in hh:mm:ss format
### Part 2 – 2D Geometry Using Structures
#### Problem 2.1 – Polygon Area and Perimeter
- Define PUNCT struct with double x and double y
- Read n points from file
- Compute:
  - Area using Heron's formula
  - Perimeter by summing distances
- Display polygon vertices and results
- Functions for:
  - Distance
  - Triangle area
  - Semi-perimeter
  - Vector I/O
#### Problem 2.2 – Point Inclusion in Circle/Rectangle
- Define PUNCT, CERC, and DREPTUNGHI structures
- Functions to check if a point lies within a circle or rectangle
- Read data and interactively check user-given points
- Extend header from Problem 2.1 with geometric utilities
#### Problem 2.3 – Collinearity and Line Equation
- Use PUNCT and LINIE (double m, double n) types
- Determine line equation from two points
- Verify if all given points lie on this line
- Display:
  - Line equation
  - Points not on the line
- Functions:
  - Line equation calculation
  - Collinearity check
  - Structured input/output
#### Problem 2.4 – Valid Path Separation (Dwarf Houses)
- Use structures:
  - PUNCT for coordinates
  - PITICI for groups of dwarves
- Read coordinates of houses and path proposals from PITICI.IN
- For each proposed path (line), determine if it separates red and blue dwarves
- Display verdict for each advisor's suggestion (DA/NU)
- Functions:
  - Equation of line from 2 points
  - Side of point relative to line
  - Validation of separation
### Part 3 – Polynomial Evaluation Using Structures
#### Problem 3.1 – Horner’s Method
- Define _POLINOM structure: int n, double c[20]
- Read polynomial coefficients and evaluation point
- Display polynomial
- Evaluate using iterative Horner’s method (non-recursive)
## Build Instructions
To compile and link programs using structures:
```bash
clang -Wall -c structsUtils.c      # Utility functions for structure operations
clang -Wall -c main.c              # Main program
clang structsUtils.o main.o -o output
```
## Build with `makefile`
- To build the project:
```bash
make
```
- To clean up build files:
```bash
make clean
```
