#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  //printf(1, "Read count: %d \n", getreadcount());
  //exit();
  char buf[10];
  int fd = open("README", 0);
  if(fd < 0){
    printf(1, "open failed\n");
    exit();
  }

  printf(1, "Initial readcount: %d\n", getreadcount());
  read(fd, buf, 5);
  read(fd, buf, 5);
  printf(1, "After two reads: %d\n", getreadcount());

  close(fd);
  exit();
}
