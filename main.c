#include <stdio.h> 

typedef struct {
  const unsigned int lower;
  const unsigned int upper;
  const unsigned int step;
} TempRange;

enum {
  LOWER_BOUND = 0,
  UPPER_BOUND = 300,
  STEP_SIZE = 1
};

static const TempRange range = {
  .lower = LOWER_BOUND,
  .upper = UPPER_BOUND,
  .step = STEP_SIZE
};

inline static float to_celsius(float fahr) {
  return (5.0/9.0) * (fahr - 32.0);
}

static void print_range(float fahr) {
  for (fahr = range.lower; fahr <= range.upper; fahr = fahr + range.step) {
    printf("Fahrenheit: %3.0f, Celsius: %6.1f\n", fahr, to_celsius(fahr));
  }
}

int main() {
  float fahr = range.lower;
  print_range(fahr);
}

