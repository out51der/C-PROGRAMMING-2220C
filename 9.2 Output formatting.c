%(flags)(width)(.precision)specifier


//

Table 9.2.1: Floating-point formatting.
Sub-specifier	Description	Example
width	Specifies the minimum number of characters to print. If the formatted value has more characters than the width, 
the value will not be truncated. If the formatted value has fewer characters than the width, 
the output will be padded with spaces (or 0's if the '0' flag is specified).	

printf("Value: %7.2f", myFloat);
Value:   12.34
.precision	:

Specifies the number of digits to print following the decimal point. If the precision is not specified, a default precision of 6 is used.	

printf("%.4f", myFloat);
12.3400

printf("%3.4e", myFloat);
1.2340e+01
flags	-: 

Left aligns the output given the specified width, padding the output with spaces.
+: Prints a preceding + sign for positive values. Negative numbers are always printed with the - sign.
0: Pads the output with 0's when the formatted value has fewer characters than the width.
space: Prints a preceding space for positive value.	

printf("%+f", myFloat);
+12.340000
printf("%08.2f", myFloat);
00012.34
