#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if (argc == 2) {
    printf(1, "Trace file: %s\n", argv[1]);
    trace(argv[1]); //call the syscall wrapper here
  } else {
    printf(1, "Usage: trace /pathname\n");
  }
  exit();
}
