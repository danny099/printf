# Printf 📜

#NAME
     _printf

     — Print diferents types of data

#SYNOPSIS
     #include"holberton.h"

     int_printf(const char *format, ...);

#DESCRIPTION
     _printf It is a function in charge of printing different types of formats, for example char, int, string later we will explain more in depth how to do it

   -Return -value

            the return value if is sucessfull return the number of caracters sends

            if the return is wrong return -1

   -The -conversion -specifier

   -d, -i:  The  int  argument  is  converted to signed decimal notation.  The precision, if any, gives the minimum number of digits that must appear; if the converted value requires fewer digits, it is  padded  on  the left with
            zeros.  The default precision is 1.  When 0 is printed with an explicit precision 0, the out put is empty.

   -c:      If no l modifier is present, the int argument is converted to an unsigned char, and the resulting character  is written.  If an l modifier is present, the wint_t (wide character) argument is converted to a multibyte
            sequence by a call to the wcrtomb(3) function, with a conversion state starting in  the  initial state, and the resulting multibyte string is written.

   -s:      If no l modifier is present: The const char * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but not including) a terminating null
            byte (' '); if a precision is specified, no more than the number specified are written. If a precision is given, no null byte need be present; if the precision is not specified, or is greater than the size of the array,
            the array must contain a terminating null byte.

   -%:      A '%' is written.  No argument is converted.  The complete conversion specification is '%%'.  El

#EXAMPLES
     print a string

     #include "holberton.h"

     int main()

     {

     char *var = "hello";

     return (_printf("%s", var));

     print a char

     #include "holberton.h"

     int main()

     {

     char *var = 'H';

     return (_printf("%c", var));

     }

![](https://www.holbertonschool.com/holberton-logo.png)
