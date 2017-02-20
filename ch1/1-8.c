#include <stdio.h>
int main(int argc, char const *argv[]) {

  int blanks, tabs, newlines;
  int c;

  blanks = tabs = newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      blanks++;
    } else if (c == '\t') {
      tabs++;
    } else if (c == '\n') {
      newlines++;
    }
  }

  printf("The number of blanks is %d\n", blanks);
  printf("The number of tabs is %d\n", tabs);
  printf("The number of newlines %d\n", newlines);

  return 0;
}
