//
//  main.cpp
//  helloworld
//
//  Created by sarah oloumi on 2021-02-05.
//

#include <iostream>

int main()
{
    // *********** INTRODUCTION TO VARIABLES ***********
    
    /*
     - Data is: Any sequence of symbols that can be interpretted to mean something like numbers or letters.
     - Value is: A piece of data stored in memory.
     - Variable is: A named region of memory.
     - Identifier is: A name that a variable is accessed by.
     - Type is: Something that tells the program how to identify and understand a value in memory.
     */
    
    // Define the variable // multiple variables
    int y;
    
    // Variable assignment
    y = 5;
    // The "=" operator is called the copy assignment. It allows us to assign a defined variable some value.
    y = 6;
    // You can change the value stored in variable
    
    // Instead of first defining a variable then assigning a value to it, you can also do the following:
    
    int x = 7; // copy initialization
    int z(8); // direct initialization (Same as copy initialization for simple data types like integers)
    
    // List initialization
    
    
    
    /* This is the return statement
     When an executable finishes running, the program sends a value back to the operating system to show that it ran successfully.
     Return value 0 => "everything went ok" */
    return 0;
}
