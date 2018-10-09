#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100
#define BOARD_WIDTH	79
#define BOARD_HEIGHT 24

int main (int argc, char *argv[]) {
  int i, j;

  srand(time(NULL));

  for (i = 0; i < BOARD_HEIGHT; ++i) {
    for (j = 0; j < BOARD_WIDTH; ++j) {
      if (rand() % 2 == 0) {
        printf("o");
      } else {
        printf("o");
      }
    }
    printf("\n");
  }
}
