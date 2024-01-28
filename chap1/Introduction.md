# Introduction

## Basic

C program

### Function

`return_type funtion_name(argument1, 2, ...){}`

#### Statements

specify computing operations to be done

- every individual tatements should be terminated by `;`

#### Argument

list of values provided by the calling function

- method of communicating data between functions
- parentheses `(argument1, 2, ...)` after the function name surround argument list

#### Function call

by naming, followed by parenthesized list of arguments

#### `main()`

the function that program begins execution

- every program must have `main`

```
int main(){
}
```

### Variable

store values used during the computation

### `#include <stdio.h>`

tells the complier to include information about the `standard input/output library`

## Variables and Arithmetic

### Comment

`/**/`

- ignored by complier
- for one line, `//`

### Declaration

announces the properties of variables

- consist of name and a list of variables
- all variables must be declared before they are used

####  Method

- declaration: `type name;`
- declaration + initialization: `type name = value;`

### `While`

`while(condition){
  //body: some code to run
}`

1. test condition in parentheses
2. if true, execute the body of the loop and return to 1
3. if false, terminate

### Indent

emphasize logical structure of the program

-  does not affect compiler

### Number symbols for printing

#### ` %d`

represents the location of the number(decimal integer)

- `%(number)d`: the number should be at least (number) long

#### `%f`

represents the location of the number(float)

- `%Nf`: number should be at least N long
- `%.Nf`: print N characters after decimal point

## Statement

### `for`

```
for(initialization; condition; increment step){
  // body
}
```

- appropriate for loops in which the initialization and increment are single statements and logically related

## Symbolic constants

way to avoid magic number

- names are conventionally written in upper case

### `#define`

`#define name value`

- defines a *symbolic name* or *symbolic constant*
- no `;` behind the declaration line
- value can be either number or any sequence of characters
- located under header import line

## Character input and output

- *text stream*: sequence of characters divided into lines
    - each line consists of zero or more characters followed by a newline character
- library is responsible to make input or output stream comfirm this model

### Methods

#### `getchar()`

reads the next input character form a text tream and returns that as value

#### `putchar(v)`

prints the content of the integer variable `v`

### File copying

```
#include <stdio.h>

main(){
  int c;
  while((c = getchar()) != EOF){ // End Of File
    putchar(c);
  }
}
```

- EOF: integer defined in <stdio.h>

### Character counting

with while
```
#include <stdio.h>

main(){
  int count = 0;
  while(getchar() != EOF){
    ++count;
  }
}
```

with for
```
#include <stdio.h>

main(){
  int count;
  for (count = 0;getchar() != EOF;++count)
}
```

- use the appropriate integer type to avoid overflow

### Line counting

```
#include <stdio.h>

main(){
  int count, c;
  for(count = 0;(c = getchar()) != EOF;){
    if (c == '\n'){
      ++count;
    }
  }
}
```

### Word counting

'\n', '\t', ' ' 일 때를 세면 됨

## Arrays

`type name[];`

### Char-Int conversion

char 가 숫자일 경우

- char - '0' = int
- int + '0' = char

## Functions

enables to ignore the implementation and only use the result

- function definitions can appear in any order

## Arguments

call by value: all function arguments are passed by value

- given values are temporary variables, rather than the originals

### Call by reference

to enable the called function modify a variable that is used as an argument, caller must provide the pointer of the variable

- using arrays as argument will be always this type

## External variables and scope

###  Local variables

declared within function 

- private or local to that function
- other functions cannot directly access to them
- existence only when the function is called and disappears when the function is exited
- does not retian values from one call to next; must be explicitly set upon each entry

### External variables

defined external to all functions,
declared in each function that wants to access it

- define: `type name;`
    - definition: place where the variable is created or assigned storage
    - can be in other source file of the function that wants to use variable
- declare: `extern type name;`
    - declaration: places where the nature of the variable is stated but no storage is allocated
- gloablly accessible; accessed by name by any function
- remain in existence permanently; retain their values after the termination of the function that set them

#### Example

```
#include <stdio.h>

int a;

int main(){
  extern int a; // declare external variable
  a = 9;
  printf("a is %d", a);
}

void increase_a(){
  ++a;
}
```