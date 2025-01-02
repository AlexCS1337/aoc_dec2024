// Advent Of Code 2024 - Day #1: Part 1
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[80];
  FILE* ptr;

  ptr = fopen("input.txt", "r");

  if (ptr == NULL) 
  {
    printf("Error While opening file");
        
    exit(1);
  }
  
  if(fgets(str, 80, ptr) != NULL)
  {
    puts(str);
  }
  fclose(ptr);

  return 0;
}
