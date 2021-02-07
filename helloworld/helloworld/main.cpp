//
//  main.cpp
//  helloworld
//
//  Created by sarah oloumi on 2021-02-05.
//

/* This is the preprocessor directive. It indicates that we would like to use the contents of the iostream >> we're using std::cout here.
    Without this line we get a compiler error on the std::cout line because the compiler wouldn't know what std::cout is. */
#include <iostream>

void doNothing(int&)
{
}
// This line says we want to define a function called main
int main()
{
    // ***********  HELLO WORLD ***********
    
    /* The function body.
    std::cout stands for character output. The "<<" operator allows us to send letters or numbers to the console to be output
    The following line is also a statement: which is an instruction that causes the program to do an action */
    std::cout<<"Hello World! \n";
 
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
    
    // List initialization AKA uniform or brace initialization
    int height{3}; // This is a direct intialization of value 3 into variable height -- PREFERED
    int width = {2}; // This is the copy initialization of value 2 into variable width
    
    // The following line initializes the value to 0:
    int someNumber{}; // Use this when you know the value is temporary and will be replaced
    std::cout<<"Enter some number: \n";
    std::cin >> someNumber;
    std::cout<<"someNumber variable has the value: "<<someNumber << "\n";
    // Use explicit initialization like the following when you want to immidately use the value:
    int someOtherNumber = {0};
    std::cout<<"someOtherNumber variable has the value: "<<someOtherNumber << "\n";
    
    /* This is the return statement
     When an executable finishes running, the program sends a value back to the operating system to show that it ran successfully.
     Return value 0 => "everything went ok" */
    
    // *********** INTRODUCTION TO IOSTREAM ***********
    
    // **** std::endl ****
    
    // To print more than one thing on the same line:
    std::cout<<"Thing One and... "<< "Thing Two";
    
    // To end the line completely we can use std::endl
    std::cout<<"The sky is blue."<< std::endl;
    
    /* *** NOTE*** std::endl is a bit inefficient as it does two things:
     1) It moves the cursor to the next line
     2) It "flushes" the output (makes sure the output shows up immediately. <- std::cout does this already
     
     How to solve the inefficiency? use "\n". This moves the cursor to the next line but it does not flush anything.
     */
    std::cout<<"The tree is green." << '\n';
    std::cout<<"The grass is greener. \n"; // This is the same as above; the cursor moves to the next line again.
    
    // **** std::cin ****
    
    // To input character we use std::cin (cin == character input). We also use the extraction operator: >>
    std::cout<<"How old are you?\n";
    int age{}; //Define + zero initialize the variable
    std::cin>> age;
    std::cout<<"You are " << age << " years old!\n";
    
    // *********** UNINITIALIZED VARIABLES ***********
    
    // C++ doesn't initialize value automatically... It will aassign it whatever garbage value happens to be in a memory location that the variable is assigned to.
    int h;
    doNothing(h);
    std::cout<<h;
    
    // *********** UNINITIALIZED VARIABLES ***********
    
    std::cout<<"Hi There!";     // Literal
    int k{7};                   // Literal
    
    // Literal == literal constant -- A fixed value that has been inserted directly into the source code
    
    // Operator          -->           arithmatic operators +, *, /, %,
    // Equality operator -->           ==
    // word operators    -->           new, delete, throw
    
    // Unary operator    -->           act on one operand     ex: - operator .... -5
    // Binary operator   -->           acts on two operands   ex: 3 + 4
    // Ternary operator  -->           acts on three operands
    
    // *********** Expressions ***********
    
    // Combination of literals, varaibles, operators, and explicit function calls.
    int j{3+6};
    // type  identifier {expression};
    
    // A statement is used when we want to perform an action while an expression cacluates a value.
    
    std::cout << 2 + 3 << '\n';                 // This outputs 5
    
    int number{6};
    int anotherNumber{number - 2};
    std::cout << anotherNumber << '\n';         // This outputs 4
    
    int i{0};
    i = number;
    std::cout << i - number << '\n';            // This outputs 0
    
    // *********** First program ***********
    
    // Create a program that asks the user to enter an integer, waits for them to input an integer, then tells them what 2 times that number is.
    
    std::cout << "Enter an integer and I'll show you what its double and triple is: \n";
    int userInt{0};
    std::cin >> userInt;
    std::cout << "Integer entered was " << userInt << " and its double is: " << userInt * 2 << '\n';
    std::cout << "Integer entered was " << userInt << " and its double is: " << userInt * 3 << '\n';

    
    // *********** Second program ***********
    /* Write a program that asks the user to enter a number, and then enter a second number.
       The program should tell the user what the result of adding and subtracting the two numbers are.
     
     Expected Output:
     
     Enter an integer: 6
     Enter another integer: 4
     6 + 4 is 10.
     6 - 4 is 2.
     
     */
    
    std::cout<<"Enter an integer: ";
    int userInput{0};
    std::cin>>userInput;
    
    std::cout<<"Enter another integer: ";
    int anotherUserInput{0};
    std::cin>>anotherUserInput;
    
    std::cout<< userInput << " + " << anotherUserInput <<" = "<< userInput+anotherUserInput << '\n';
    std::cout<< userInput << " - " << anotherUserInput <<" = "<< userInput-anotherUserInput << '\n';
    
    
    return 0;
}
