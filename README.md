Lucky String Transformation
This C++ program transforms a given string into its numerical representation based on the position of each character in the alphabet and then repeatedly sums the digits of the resulting number a specified number of times. The final result is displayed to the user.

Table of Contents
Introduction
Features
How It Works
Usage
Example
Requirements
Compilation and Execution
Introduction
This program reads a string and an integer from the user. The string is converted to a numerical representation where each character is replaced by its position in the alphabet (e.g., 'a' -> 1, 'b' -> 2, etc.). The program then sums the digits of this number a specified number of times and outputs the result.

Features
Converts each character in a string to its position in the alphabet.
Sums the digits of the resulting number a specified number of times.
Displays the final result to the user.
How It Works
String Conversion: Each character in the input string is converted to its corresponding position in the alphabet.
Digit Summation: The digits of the resulting number are summed repeatedly for a specified number of times.
Output: The final result after the specified number of transformations is displayed.
Usage
Run the Program: Execute the compiled program.
Input the String: Enter a string of lowercase alphabetic characters.
Input the Number of Transformations: Enter the number of times the digit summation should be performed.
Example
For the string zbax and 2 transformations:

'z' -> 26, 'b' -> 2, 'a' -> 1, 'x' -> 24
Numerical representation: "262124"
First summation: 2 + 6 + 2 + 1 + 2 + 4 = 17
Second summation: 1 + 7 = 8
Final result: 8
Requirements
C++ compiler (e.g., g++)
Compilation and Execution
Compile the Program:
sh
Copy code
g++ -o lucky_transform lucky_transform.cpp
Run the Executable:
sh
Copy code
./lucky_transform
