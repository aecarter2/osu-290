/*********************************************************************
** Program name: Letter Counter
** Author: Alex Carter 
** Date: 1/20/2018 
** Description: Parses a text file and reports the sum of each letter of the 
                alphabet per paragraph 
*********************************************************************/
#ifndef LETTERS_HPP
#define LETTERS_HPP
#include <iostream>
#include <fstream>
#include <string>

using std::ifstream; 
using std::ofstream; 

void count_letters(ifstream &, int*);
void output_letters(ofstream &, int*);

#endif 
