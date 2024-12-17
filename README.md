
# **ft_printf: Custom Implementation of printf()**

## **Project Description**
The objective of this project is to implement a simplified version of the `printf()` function in C.
This project will help you understand variadic functions and improve your skills in structured and modular programming.

Once completed, you will be allowed to integrate `ft_printf()` into your **Libft** library for future C projects.

---

## **Requirements**

### **Mandatory Part**

1. **Program Name**: `libftprintf.a`  
2. **Files to Submit**:  
   - `Makefile`  
   - Header files (`*.h`)  
   - Source files (`*.c`)  

3. **External Functions Allowed**:  
   - `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`  

4. **Compilation Flags**:  
   ```bash
   -Wall -Wextra -Werror
   ```

5. **Function Prototype**:  
   ```c
   int ft_printf(const char *, ...);
   ```

6. **Library Creation**:  
   Use the `ar` command to create the library `libftprintf.a` at the root of your repository. The use of `libtool` is forbidden.

7. **Conversions to Implement**:
   - `%c` : Prints a single character.  
   - `%s` : Prints a string.  
   - `%p` : Prints a pointer address in hexadecimal format.  
   - `%d` : Prints a decimal number (base 10).  
   - `%i` : Prints an integer in base 10.  
   - `%u` : Prints an unsigned decimal number.  
   - `%x` : Prints a number in hexadecimal (lowercase).  
   - `%X` : Prints a number in hexadecimal (uppercase).  
   - `%%` : Prints a percent sign.  

---

## **Testing**

Verify the implementation of `ft_printf`:

```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Pointer: %p\n", (void *)123456);
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Unsigned: %u\n", 123);
    ft_printf("Hex Lower: %x\n", 255);
    ft_printf("Hex Upper: %X\n", 255);
    ft_printf("Percent: %%\n");

    return 0;
}
```

Compile with:
```bash
gcc -Wall -Wextra -Werror main.c libftprintf.a -o test
./test
```