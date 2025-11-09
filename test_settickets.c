#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
  int pid = getpid();
  printf(1, "Process %d setting tickets to 20...\n", pid);

  if (settickets(20) < 0) 
    printf(1, "settickets failed!\n");
  else
    printf(1, "settickets success!\n");

  int child_pid = fork();
  printf(1, "created child with pid = %d\n", child_pid);
  if (child_pid == 0) {
    printf(1, "child process pid: %d\n", getpid());
    settickets(200);
    while (1) {
      for (int j = 0; j < 10000000000; j++) {
        ;
      }
      printf(1, "child process running\n");
    }
  }
  
  int child_pid_1 = fork();
  printf(1, "created child with pid = %d\n", child_pid_1);
  if (child_pid_1 == 0) {
    printf(1, "child process pid: %d\n", getpid());
    settickets(800);
    while (1) {
      for (int j = 0; j < 10000000000; j++) {
        ;
      }
      printf(1, "child process 1 running\n");
    }
  }
 
  exit();
}
