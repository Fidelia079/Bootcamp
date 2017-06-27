#include <stdio.h>
int main() {
int arr [4] = {1, 85, 739,7};
printf("1st %x ", *arr);
int * cur = arr;
printf("2nd %x ", *cur);
cur++;
printf("3rd %x ", *cur);
(*cur)++;
printf("4th %x ", *cur);
return 0;
}
