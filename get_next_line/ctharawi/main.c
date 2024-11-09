#include <stdio.h>
#include <fcntl.h>
#include "./get_next_line.h"

int main(void)
{
  int   fd;
  int   count;
  char  *str;

  fd = open("moodeng.txt", O_RDONLY);
  count = 1;
  while ((str = get_next_line(fd)))
  {
    printf("line %d : %s", count++, str);
    free(str);
  }
  printf("\n");
  close(fd);
  return (0);
}
