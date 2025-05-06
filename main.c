/**
* The program converts a range of temperatures from fahrenheit to celsius.
* The way I have solved the problem is not the best way, this serves
* mostly as try-out of the C syntax and tools.
*/
#include <stdio.h> 

/**
* A data structure that holds constatns
*/
typedef struct {
  const unsigned int lower;
  const unsigned int upper;
  const unsigned int step;
} TempRange;

/**
* An enum that holds the values of the constants
*/
enum {
  LOWER_BOUND = 0,
  UPPER_BOUND = 300,
  STEP_SIZE = 1
};

/**
* A variable of type TempRange
*/
static const TempRange range = {
  .lower = LOWER_BOUND,
  .upper = UPPER_BOUND,
  .step = STEP_SIZE
};

/**
* A function that returns a value in Celsius for a given value of fahrenheit
*/
inline static float to_celsius(float fahr) {
  return (5.0/9.0) * (fahr - 32.0);
}

/**
* A helper function for printing out the values.
*/
inline static void print_range(float fahr) {
  for (fahr = range.lower; fahr <= range.upper; fahr = fahr + range.step) {
    printf("Fahrenheit: %3.0f, Celsius: %6.1f\n", fahr, to_celsius(fahr));
  }
}

/**
* The entrypoint for the program
*/
int main() {
  float fahr = range.lower;
  print_range(fahr);
}

