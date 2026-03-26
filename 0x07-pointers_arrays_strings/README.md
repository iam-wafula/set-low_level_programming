# 0x07. C - Even More Pointers, Arrays and Strings

## Task 0: _memset

### Requirements
- Allowed editors: `vi`, `vim`, `emacs`, `nano`
- All files compiled on Ubuntu 20.04 LTS using `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Coding style: Betty style
- No global variables
- Maximum 5 functions per file
- No use of `printf`, `puts`, etc.; only `_putchar` for output
- All function prototypes in `main.h`

### Description
Write a function that fills memory with a constant byte.

**Prototype:**
```c
char *_memset(char *s, char b, unsigned int n);
