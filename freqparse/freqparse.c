#include <stdio.h>
int main() {
  // initialize variables;
  float counter, digits, lowerc, other;
  char c;
  counter = 50; //checking first 50, need to change
  digits = lowerc = other = 0;
  while ((c = getchar()) != EOF) {
    // process one character
    if (c >= '0' && c <= '9') {
      digits++;
    }
    if (c >= 'a' && c <= 'z') {
      lowerc++;
    }
    else {
      other++;
    }

  }

  // Output results here
printf("Numbers = %f digits and %f lowercase letters and %f other characters.\n", digits, lowerc, other);
  return 0;
}
