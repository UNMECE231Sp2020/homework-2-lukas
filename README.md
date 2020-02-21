# Homework2
Third homework of ECE 231: Intermediate Programming. Assigned 2/14/2020. Due 2/21/2020, 11:59 pm.

## Context
For this assignment, you are going to do a classic problem. Create a class for complex numbers. You are given the file `main.cpp` which will test your complex class. You'll have to create two additional files:
  1. `A cpp file that will contain your contructors and functions`
  1. `A h (or hpp) file that will contain your class declaration, constructor declarations, and function declarations`
Make sure that `main.cpp` includes your h (or hpp) file. In your h (or hpp) you should have these data members:

    double real
    double imag
    
and these prototypes:
    
    Default constructor (no arguments)
    Default constructor (with arguments)
    Copy constructor
    A getter function to get the real member
    A getter function to get the imaginary number
    A function to print
    A function to add two complex numbers
    A function to subtract two complex numbers
    A function to multiply two complex numbers
    A function to divide two complex numbers
    A function to get the complex conjugate
    A function to get the magnitude of a complex number
    A function to get the phase (or angle) of a complex number
    
and to overload these operators (as prototypes):

    +
    -
    *
    /
    =
    <<
    >>
    
And in your cpp file you must implement all prototypes defined above. You should create a Makefile that compiles and runs your code smoothly.
## Rubric

    Creation of header file and prototypes: 20%
    Creation of cpp files and implementation of functions: 30%
    Correct implementation of overloading operators: 20%
    Creation of Makefile: 10%
    Clean code: 20%
