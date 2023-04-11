#include <list.h>
#include <stdint.h>

typedef struct running_times
{
  int64_t time;
  struct list_elem telem;
} r_t;