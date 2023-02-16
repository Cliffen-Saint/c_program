**Hello World**

**0-preprocessor**

#!/bin/bash
gcc -E $CFILE -o c

====================

**1-compiler**

#!/bin/bash
gcc -S $CFILE -o .o

===================

#!/bin/bash
gcc -S $CFILE

===================

**3-name**

#!/bin/bash
gcc $CFILE -o cisfun

==================

**4-puts.c**

#!/bin/bash
puts("Programming is like building a multilingual puzzle\n");

==================

