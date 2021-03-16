#_printf

##`int _printf(const char *format, ...);`

  This `_printf` function writes to standard output. ***Format specifiers*** of the below list, notated by a preceding '%', determine how `_printf` will handle arguments of various data types within `*format`. 

  `_printf` returns an integer value of characters printed to standard output, excluding the null byte, `\0`.

#Examples

###***String***<br/>
-Input:`_printf("%s\n", "Wumbo!");`<br/>
-Output: `Wumbo!`<br/>

###***Character***<br/>
-Input:`_print("Did you have it set to %c for Wumbo?", 'W');`<br/>
-Output:`Did you have it set to W for Wumbo?`<br/>

###***Integer/Decimal***<br/>
-Input:`_printf("There are %i letters in Wumbo\n", 5);`<br/>
-Output:`There are 5 letters in Wumbo`<br/>
-Input:`_printf("The word wumbo is used %d times in this README\n", 10);<br/>
-Output:`The word wumbo is used 10 times in this README`<br/>

###***%%***<br/>
-Input:`_printf("There should be a %%wumbo conversion specifier\n");`<br/>
-Output:`There should be a %wumbo conversion specifier`<br/>

###***Binary Conversion***<br/>
-Input:`_printf("The equivalent to 30 in binary is: %b", 30);`<br/>
-Output:`The equivalent to 30 in binary is: 11110`<br/>


#Authors<br/>
**Chris Vanndy** - [GitHub](https://github.com/chrisvanndy)<br/>
**Garrison Shoemake** - [GitHub](https://github.com/Garrison-Shoemake)<br/>