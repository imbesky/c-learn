# Types, Operators and exepressions 

## Name 

### Variable and Constant 

- first character of variable nust be a letter
    - `_` is included as letter, but library routines use names starting with it, thus don't start variable name with this
- lower case for variable, upper case for symbolic constant 

#### Internal 

at least first 31 characters of an internal name should be significant
  
#### External and Function 

- number may be less than 31
- external: standard guarantees uniqueness for 6 characters and a single case 

## Data types and sizes 

### Basic data type 

- char: single byte character
- int: integer
- float: single-precision floating point, one distinct size
- double: double-precision floating point, two distinct size 

#### Qualifier 

- short int: at least 2byte
- long int: at least 4byte
- long double: three distict size 

#### Signed and unsigned 

may ve applied to char or any integer 

- unsigned: always positive or zero
    - 0 ~ 2^(number of bits) - 1
- signed: -2^(number of bits - 1) ~ 2^(number of bits - 1) - 1 

## Constant 

### Integer 

#### Long 

written with terminal `l` or `L` 

#### Unsigned 

- written with terminal `u` or `U`
- suffix `ul` or `UL` 

#### Float 

- double: default, not suffixed
- float: suffixed `f` or `F`
- long double: `l` or `L` 

#### Octal 

leading `0` 

#### Hexadecimal 

leading `0x` or `0X` 

#### Escape sequence 

a single character 

`\a` `\b` `\f` `\n` `\r` `\t` `\v` `\\` \?` `\'` `\"` `\ooo` `\xhh` `\0` 

### String 

delimitted by `"` 

- array of characters with `\0` at the end
    - thus 'a' is not equal as "a" 

### Enumeration 

`enum constant_name {name1 name2}` 

- implicitly, value of name1 is 0 and increase by 1 after that
- values can be specified explicitly
    - if not all values are specified, unspecified values continue the progression from the last specified value
- names in different enumerations must be distinct
- provide key to associate constant values with names 

## Declarations 

specify type, and contains a list of one or more variables of that type 

- `type name1, name2 ...;`
- all variables must be declared before use 

### Initialization 

- initialization during declaration, except automatic variable, is only done once
    - before the execution of program
    - initializer must be a constant
- explicitly initialized automatic variable is initialized each time the function or block it is in is entered
    - initializer can be any expression
- external and static variables are initialized to `0` by default
- automatic variables for which is no explicit initializer have undefined value
    - ex: garbage value 

### `const` 

can be applied to the declaration of any variable 

- specify that its value will not be changed
- for array, means that the elements will not be entered
- for array arguments, indicated that the function does not change that array 

## Operator 

### Binary arithmetic operator 

`+` `-` `*` `/` `%` 

### Relational operator 

`>` `>=` `<` `<=` 

### Equality operator 

`==` `!=` 

### Logical operator 

`&&` `||` 

### Precedence 

- relational > equality > `&&` > `||` > assignment 

## Type conversion 

### Automatic, implicit conversion 

narrower operand -> wider operand 

- ex: in `integer + float`,  `integer` -> `float` 

#### Char conversion 

at ASCII, 

1. to convert char number into integer, substract `0`
    - can check if char is number or not by `isdigit(char)`
2. to convert upper case char to lower case,
substract `A` and add `a` 

### Explicit conversion 

can be forced by unary operator, cast 

- `(type) expression` 

## Increment  decrement operator 

- `++`: add 1
- `--`:  add 1
- can be either prefix of postfix 

## Bitwise operator 

- `&`: AND
- `|`: inclusive OR
- `^`: exclusive OR
- `<<`: left shift
- `>>`: right shift
- `~`: one's complement 

## Assignment operators and exepressions 

`+=` `-=` `*=` `/=` `%=` `<<=` `>>=` `&=` `^=` `|=` 

- `expr1 = (expr1) op (expr2)` 

## Conditional exepression 

### Ternary operator 

`expr ? if true : if false` 

## Precedence and order 

![table](precednece.png)
