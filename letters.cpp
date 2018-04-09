/*********************************************************************
** Program name: Letter Counter
** Author: Alex Carter 
** Date: 1/20/2018 
** Description: Parses a text file and reports the sum of each letter of the 
                alphabet per paragraph 
*********************************************************************/

#include "letters.hpp"
#include <iostream>
#include <fstream>
#include <string>

using std::cin; 
using std::cout; 
using std::endl; 
using std::ifstream; 
using std::ofstream; 
using std::string;

void count_letters(ifstream &input_file, int* count)
{
       string block = ""; 
       string line;
       int i = 0;
       char character;

       while (getline(input_file, line)) // read in the text 
       {

              if (line.empty())
              {
                     break;
              }

              else
              {
                     block += line + ' '; //put lines together 
              }
       }

       for (i = 0; i<26; i++)
       {
              count[i] = 0;
       }

       for (i = 0; i < block.length(); i++) //frequency Count
       {
              character = tolower(block[i]); // extract the specific character 

              if ((int)character >= 97 && (int)character <= 122) //check it is a valid letter 
              {
                     count[(int)character - 97] += 1;
              }
       }
}

void output_letters(ofstream &output_file, int* count)
{
       int i = 0 ;

       for (i = 0; i<26 ; i++)
       {
              output_file << (char)(i + 97) << " - " << count[i] << "\n "; //Write to file
       }

}
