#include <stdio.h>

char argbuf[32];
int win;

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("usage: ex1 argument\n");
    return 1;
  }
  char *arg = argv[1];
  int i;
  for (i = 0; arg[i] != 0; i++)
    argbuf[i] = arg[i];

  if (win)
    printf("win\n");
  else
    printf("lose\n");

  return 0;
}
