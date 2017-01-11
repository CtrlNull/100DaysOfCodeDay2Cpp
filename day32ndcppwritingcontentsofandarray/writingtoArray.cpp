// This program writes the contents of an array to a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cont int Array_Size = 10;       // Array size
    int numbers[Array_Size];        // Array with 10 elements
    int count;                      // Loop counter variable
    ofstream outputFile;            // Output file stream object

    // store the values in the array
    for (count = 0; count < Array_Size; count++)
    numbers[count] = count;

    // Open a file for output 
    outputFile.open("SavedNumbers.txt");

    // Write the array contents to the file.
    for (count = 0; count < Array_Size; count++)
        outputFile << numbers[count] << endl;

    // Close the file
    outputFile.close();

    // That's it!
    cout << "the numbers were saved to the file.\n ";
    return 0;
}