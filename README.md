
pigtime
=======

A small graph database. 

How to use?
-----------

Download the `pigtime.c` and `pigtime.h` the put those at you programme's
folder, then add this statement to you source C file:

``` C
#include "pigtime.h"
```

If your programme's language is C++, you need to use a extend statement:

``` C++
extern "C" {
#include "pigtimes.h"
}
```

TODO
----

- write test file
- write main source file and header file
  - `bool pg_inited(void)` ... OK
  - `void pg_init(void)`
  - `PgNode`
  - `PgNode pg_get()`(get the root node or other nodes)

