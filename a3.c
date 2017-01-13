#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int num_arr[argc];

  int i, j;

  for(i = 0; i < argc; i++) {
    num_arr[i] = atoi(argv[i]);
  }

  int max_1 = num_arr[0]; 
  int max_2 = num_arr[1];
  int mul = max_1 * max_2;

  for(i = 0; i < argc; i++) {
    for(j = i + 1; j < argc; j++) {
      if((num_arr[i] * num_arr[j]) > mul) {
	mul = num_arr[i] * num_arr[j];
	max_1 = num_arr[i];
	max_2 = num_arr[j];
      }
    }
  }
  printf("%d %d\n", max_1, max_2);
}
