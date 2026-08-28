# Types of Instruction 
## Type declaratiion
* You must declare the variable before you use it. If you try to use the variable before declaring it si an int then it will give an error.
* You can declare multiple variables at once. For ex, ( int a, b, c )
We can also assign the same value to the variables.
* The variable should not be declared and used in the same statement or it will give an error.
## Arithematic Instructions
* These allow you to perform calculations using Operators (the symbols like +) and Operands (the variables or numbers like a or b)
* Left-Hand Side Rule: In C, the result of a calculation must always be stored in a single variable on the left-hand side (e.g., sum = a + b; is correct, but a + b = sum; is wrong)
* The Modulo Operator (%): This is a special operator that gives you the remainder of a division
. For example, 5 % 2 is 1 because 2 goes into 5 twice with 1 left over
. Note: It only works with integers
. Power Function: You can't use ^ for power in C. You must use the pow(b, c) function from the <math.h> library
## Type conversion
When you mix different types of numbers, C follows a specific logic:
* int op int always results in an int
* float op float always results in a float
* int op float results in a float because a float is a "bigger container"
* The Truncation Rule: If you force a float (like 1.99) into an int, C does not round off. It simply chops off the decimals and stores
## Control instructions
 These decide which line of code runs when
* Sequence Control: The default mode where code runs line-by-line
* Decision Control: Using if-else to branch out
* Loop Control: Repeating a task using for or while
* Case Control: Handling specific cases using switch