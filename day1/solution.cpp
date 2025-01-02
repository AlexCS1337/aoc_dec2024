// Advent Of Code 2024 - Day #1: Part 1
//
#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::string line;
  std::ifstream inputFile ("input.txt");
  if (inputFile.is_open())
  {
    while ( getline (inputFile,line) )
    {
      std::cout << line << '\n';
    }
    inputFile.close();
  }

  else std::cout << "Unable to open file"; 

  return 0;
}
