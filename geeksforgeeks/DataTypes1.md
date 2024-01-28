# C programming language: data types (1)

Collection of data with values having fixed values, meaning its characteristics.

- each variable in C has an associated data type
- specifies the type of data that the variable can store
- each data type requires different amounts of memory and has some specific operations

## User Defined Data Types

defined by user

## Derived Types

derived from the primitive or built-in datatypes

## Primitive Data Types

### 1. Integer

store the integer numbers

- octal values, hexadecimal values, and decimal values can be stored in int data type in C. 
- Range:  -2,147,483,648 to 2,147,483,647
- Size: 4 bytes
- Format Specifier: `%d`

![table](img/ints.png)

#### Unsigned int

store the data values from zero to positive numbers

- can¡¯t store negative values like signed int
- attach `U` or `u` in the back of the number

#### Short int

store values from -32,768 to 32,767

- lesser in size than the int by 2 bytes

#### Long int:

store values greater than int

- larger version of the int datatype
- attach `L` or `l` in the back of the number

#### Unsigned short int

similar in relationship with short int as unsigned int with int

### 2. Character

store only a single character

- requires a single byte of memory in almost all compilers

- Range: -128 to 127 (signed) or 0 to 255(unsigned)
- Size: 1 byte
- Format Specifier: `%c`

### 3. Floating point

store floating-point values

- in C, store decimal and exponential values
- store decimal numbers (numbers with floating point values) with single precision

- Range: 1.2E-38 to 3.4E+38
- Size: 4 bytes
- Format Specifier: `%f`

### 4. Double floating point

- in C, store decimal numbers (numbers with floating point values) with double precision
- in C, used to define numeric values which hold numbers with decimal values
- has more precision but occupies twice the memory compared to float
- easily accommodate about 16 to 17 digits after or before a decimal point

- Range: 1.7E-308 to 1.7E+308
- Size: 8 bytes
- Format Specifier: `%lf`

### 5. void

specify that no value is present

- does not provide a result value to its caller
- has no values and no operations
- used in multiple ways as function return type, function arguments as void, and pointers to void

#### Void pointer

pointer that has no associated data type with it

- can hold an address of any type and can be typecasted to any type
- in C, used to implement generic functions
- cannot be dereferenced

## Literals

Constant values that are assigned to the constant variables.

- represent fixed values that cannot be modified
- contain memory but do not have references as variables

### 1. Integer literal

Type of literal for an integer whose value is directly represented in source code.

#### Express types

1. Prefixes which indicates the base
	- 0x10 indicates the value 16 in hexadecimal having prefix 0x
2. Suffixes which indicates the type
	- 12345678901234LL indicates the value 12345678901234 as an long long integer having suffix LL

#### Prefixes

1. Decimal-literal(base 10)
	- non-zero decimal digit followed by zero or more decimal digits(0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
	- 4, 54, 633
2. Octal-literal(base 8)
	- zero followed by zero or more octal digits(0, 1, 2, 3, 4, 5, 6, 7)
	- 045, 076, 06210
3. Hex-literal(base 16)
	- 0x or 0X followed by one or more hexadecimal digits(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, A, b, B, c, C, d, D, e, E, f, F)
	- 0x23A, 0Xb4C, 0xFEA
4. Binary-literal(base 2)
	- 0b or 0B followed by one or more binary digits(0, 1)
	- 0b101, 0B111

#### Suffixes

1. int
	- no suffix are required
	- default assigned as int data type
2. unsigned int
	- character u or U at the end of integer constant
3. long int
	- character l or L at the end of integer constant
4. unsigned long int
	- character ul or UL at the end of integer constant
5. long long int
	- character ll or LL at the end of integer constant
6. unsigned long long int
	- character ull or ULL at the end of integer constant

### 2. Floating-Point literal

represent and store real numbers


#### Form

floating-point literals can be stored either in decimal form or exponential form

- decimal form: one must include the decimal point, exponent part, or both
	- otherwise, error
- exponential form: one must include the integer part, fractional part, or both
	- otherwise, error

#### Parts of real number

- integer part
- real part
- fractional part
- exponential part

### 3. Character literal

used to store a single character within a single quote

- need character array to store multiple characters

#### Types

1. char type
	- used to store normal character literal or narrow-character literals
		- supported by both C and C++
2. wchar_t type
	- store character in wchar_t which is followed by L
	- represents a wide-character literal
	- supported only in C++ and not in C.

### 4. String literal

store multiple characters and uses a double quote to store the same

- accommodate the special characters and escape sequences mentioned in the table above

### 5. Boolean

represent the boolean datatypes

- only availible in cpp

#### Values

1. true
	- This must not be considered equal to int 1
2. false
	- This must not be considered equal to int 1

### Compound Literals

`(type){initialize list}`

- allows to create unnamed objects with given list of initialized values
- useful when passing structures variables to functions; can pass a structure object without defining it

#### Examples

``` c
int numbers = (int[]){1,2,3};
printf("%d, %d, %d", numbers[0], numbers[1], numbers[2]); // "1, 2, 3"
```

``` c
struct Point{
	int x, y, z;
}

void print(struct Point p){
	printf("coordinate is (%d,%d,%d)", p.x, p.y, p.z);
}

int main(){
	print((struct Point){1,7,6}); // "coordinate is (1,7,6)"
}
```