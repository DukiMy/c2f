/**
* @file main.c
* @brief Converts Fahrenheit to Celsius and prints the result.
*
* This program demonstrates the use of a simple while loop
* and basic arithmetic operations in C.
*/
#include <stdio.h> 

typedef struct {
  int lower;
  int upper;
  int step;
} TempRange;

enum {
  LOWER_BOUND = 0,
  UPPER_BOUND = 300,
  STEP_SIZE = 1
};

static float to_celsius(float fahr) {
  return (5.0/9.0) * (fahr - 32.0);
}
/**
* @brief Entry point of the program.
*
* Initializes variables and performs a Fahrenheit to Celsius
* conversion from 0 to 300 in steps of 1, printing each result.
*
* @return int Returns 0 on successfull execution.
*/
int main() {
 
  const TempRange range = {
    .lower = LOWER_BOUND,
    .upper = UPPER_BOUND,
    .step = STEP_SIZE
  };
  float fahr = range.lower;
  float celsius;

  // Operating on the variables.
  while (fahr <= range.upper) {
    celsius = to_celsius(fahr);
    printf("Fahrenheit %3.0f Celsius %6.1f\n", fahr, celsius);
    fahr = fahr + range.step;
  }
}
