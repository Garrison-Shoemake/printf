<h1>_printf<h1/>

<h2>`int _printf(const char *format, ...);`<h2/>

  This `_printf` function writes to standard output. ***Format specifiers*** of the below list, notated by a preceding '%', determine how `_printf` will handle arguments of various data types within `*format`. 

  `_printf` returns an integer value of characters printed to standard output, excluding the null byte, `\0`.

<h1>Examples<h2/>

<h3>***String***<h3/><br/>
*Input:`_printf("%s\n", "Wumbo!");`<br/>
*Output: `Wumbo!`<br/>

<h3>***Character***<h3/><br/>
*Input:`_print("Did you have it set to %c for Wumbo?", 'W');`<br/>
*Output:`Did you have it set to W for Wumbo?`<br/>

<h3>***Integer/Decimal***<h3/><br/>
*Input:`_printf("There are %i letters in Wumbo\n", 5);`<br/>
*Output:`There are 5 letters in Wumbo`<br/>
*Input:`_printf("The word wumbo is used %d times in this README\n", 10);<br/>
*Output:`The word wumbo is used 10 times in this README`<br/>

<h3>***%%***<h3/><br/>
*Input:`_printf("There should be a %%wumbo conversion specifier\n");`<br/>
*Output:`There should be a %wumbo conversion specifier`<br/>

<h3>***Binary Conversion***<h3/><br/>
*Input:`_printf("The equivalent to 30 in binary is: %b", 30);`<br/>
*Output:`The equivalent to 30 in binary is: 11110`<br/>


<h1>Authors<h3/><br/>
**Chris Vanndy** - [GitHub](https://github.com/chrisvanndy)<br/>
**Garrison Shoemake** - [GitHub](https://github.com/Garrison-Shoemake)<br/>