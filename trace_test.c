
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  if (argc < 2) {
    printf(1, "Usage: trace_test <filename>\n");
    exit();
  }

  const char *fname = argv[1];

  // Start tracing this file
  if (trace(fname) < 0) {
    printf(1, "trace() failed\n");
    exit();
  }

  printf(1, "Trace file: %s\n", fname);

  // Open the file a few times to generate trace activity
  for (int i = 0; i < 3; i++) {
    int fd = open(fname, O_RDONLY);
    if (fd < 0) {
      printf(1, "Failed to open %s\n", fname);
      exit();
    }
    printf(1, "[%d] opened %s successfully\n", i + 1, fname);
    close(fd);
  }
  exit();
}

