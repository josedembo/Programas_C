# Type Casting And Type Conversion

Type conversion or typecasting of variables refers to changing a variable of one data type into another. While **type conversion is done implicitly**, **casting has to be done explicitly by the programmer**.

## Type Conversion
For example, type conversion
is automatically done when we assign an integer value to a floating point variable. Consider the
following code:
```
float x;
int y = 3;
x = y;
``` 

## Type Casting
Typecasting is also known as forced conversion, The code to perform typecasting can be given as:
```
float salary = 10000.00;
int sal;
sal = (int) salary;
```

When floating point numbers are converted to integers, the digits after the decimal are truncated.