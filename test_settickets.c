#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
  int pid1 = fork();
  if (pid1 == 0) {
    settickets(50);
    while(1) {
      printf(1, "Process 1 is running\n");
      sleep(100);
    }
  }

  int pid2 = fork();
  if (pid2 == 0) {
    settickets(200);
    while(1) {
      printf(1, "Process 2 is running\n");
      sleep(100);
    }
  }
}
