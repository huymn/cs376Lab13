/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  if(argc == 1) {
    robotPrintAscii();
    return 0;
  }
  else if(argc == 2) {
    int in = *argv[1];
    if(isdigit(in)) {
      robotPrintAscii();
      dalekPrintAscii();
      robotPrintMessage();
      return 0;
   }
  }

  return 0;
}
