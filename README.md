# _printf

**Prototype:**```int _printf(const char *format, ...);```

This ```_printf``` function writes to standard output. ***Format specifiers*** of the below list, notated by a preceding '%', determine how ```_printf``` will handle arguments of various data types within ```*format```. 

```_printf``` returns an integer value of characters printed to standard output, excluding the null byte, ```\0```.

## Examples
**String**
* Input:```_printf("%s\n", "Wumbo!");```
* Output: ```Wumbo!```

**Character**
* Input: ```_print("Did you have it set to %c for Wumbo?\n", 'W');```
* Output: ```Did you have it set to W for Wumbo?```

**Integer**
* Input: ```_printf("There are %i letters in Wumbo\n", 5);```
* Output: ```There are 5 letters in Wumbo```

**Decimal**
* Input: ```_printf("The word wumbo is used %d times in this README\n", 10);```
* Output: ```The word wumbo is used 10 times in this README```

**%%**
* Input: ```_printf("There should be a %%wumbo conversion specifier\n");```
* Output: ```There should be a %wumbo conversion specifier```

**Binary Conversion**
* Input: ```_printf("The equivalent to 30 in binary is: %b\n", 30);```
* Output: ```The equivalent to 30 in binary is: 11110```

**Unsigned Integer**
* Input: ```_printf("[%u]\n", 2659874123);```
* Output: ```[2659874123]```

**Octal Conversion**
* Input: ```_printf("The number [30] converted to octal is: [%o]\n", 30);```
* Output: ```The number [30] converted to octal is: [36]```

**Hexadecimal Conversion**
* Input: ```_printf("The number [30] converted to hexadecimal is [%x]\n");```
* Output: ```The number [30] converted to hexadecimal is [1e]```
  - _The ```%X``` conversion specifier's input is identical to ```%x```, but that it prints the output in capitals._
  - Input: ```_printf("The number [30] converted to hexadecimal is [%X]\n");```
  - Output: ```The number [30] converted to hexadecimal is [1E]```

## Authors
**Chris Vanndy** - [GitHub](https://github.com/chrisvanndy)
**Garrison Shoemake** - [GitHub](https://github.com/Garrison-Shoemake)
