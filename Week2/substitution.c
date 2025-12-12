#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  //Checks to see if the number of arguments is correct, also blocks spaces being used.
  if (argc != 2) {
    printf("Usage: ./substitution key\n");
    return 1;

    //Pseudo Code:
    // check if the argument is 2 (NOT: throw error)
    // Check if it's numbers (NOT: throw error)
    // Check if it's characters (not case sensitive, for us we'll default to any chars being uppercase and returned uppercase)
  }
  char *arg = argv[1];
  char *endptr;
  long value = strtol(arg, &endptr, 10);

  if (*endptr == '\0') {
    printf("Usage: ./substitution key\n");
    return 0;
  }

  if (arg[0] != '\0' && arg[1] == '\0') {
    printf("Wonderful! A character! \n");
    return 0;
  }
  printf("Please input a 26 letter top string\n");
  return 1;


  return 0;
}
