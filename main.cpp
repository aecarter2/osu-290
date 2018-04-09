/*********************************************************************
** Program name: Letter Counter
** Author: Alex Carter 
** Date: 1/20/2018 
** Description: Parses a text file and reports the sum of each letter of the 
                alphabet per paragraph 
*********************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include "letters.hpp"

using std::cin; 
using std::cout; 
using std::endl; 
using std::ifstream; 
using std::ofstream; 
using std::string; 

int main()
{
       ifstream input_file;
       ofstream output_file;
       string input_filename;
       string output_filename;

       int count[26] = { 0 }, j = 1;

       cout << "\n Enter the input file : "; // prompt for input file 
       cin >> input_filename;

       input_file.open(input_filename.c_str()); // open the input file 

       while (input_file.good())
       {
              count_letters(input_file, count); // letter counter

              cout << "\n Enter the output file " << j << ": "; 
              cin >> output_filename;

              j = j + 1; 

              output_file.open(output_filename.c_str()); 
              
              output_letters(output_file, count); 
              
              output_file.close(); //close output file 
       }

       input_file.close(); //close input file 
       cout << "\n";

       return 0;
}
