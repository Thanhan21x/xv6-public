
#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int main(void) {
  struct pstat ps;

  if (getpinfo(&ps) < 0) { // have only one argument?
    printf(2, "getpinfo failed\n");
    exit();
  }
  for (int i = 0; i < NPROC; i++) {
    if (ps.inuse[i]) {
      printf(1, "PID: %d | tickets: %d | ticks: %d\n",
                ps.pid[i], ps.tickets[i],ps.ticks[i]);
    }
  }

  exit();
}
