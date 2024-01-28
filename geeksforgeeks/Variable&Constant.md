# C programming language: variable & constant 

## Scope 

block or the region in the program where a variable is declared, defined, and used 

- cannot access the variable outside the scope; treated as an undeclared identifier
- scope of an identifier is the part of the program where the identifier may directly be accessible
- only refer to a variable in its scope
- all identifiers are lexically(or statically) scoped. 

### Global scope 

refers to the region outside any block or function 

- variables declared in the global scope = global variables
- global variables are visible in every part of the program
- = File Scope; scope of an identifier starts at the beginning of the file and ends at the end of the file
- have external linkage by default; global variables can be accessed in another C source file by using `extern` 

### Local scope 

refers to the region inside a block or a function 

- the space enclosed between the { } braces.
- variables declared within the local scope are called local variables.
- local variables are visible in the block they are declared in and other blocks nested inside that block
- = Block scope
- local variables have internal linkage 

## Linkage 

property that describes how variables should be linked by the linker 

- describes how names can or cannot refer to the same entity throughout the whole program or one single translation unit 

### Translation Unit 

file containing source code, header files and other dependencies 

- sources are grouped together to form a single translation unit
- used by the compiler to produce one single executable object
- important to link the sources together in a meaningful way 

### Linker 

program that takes mutiple machine code files as input and produces an executablr object code 

- link resources together in the linking stage of compilation process
- resolves symbols ans arrages objects in address space

### No linkage

- identifier declared inside block scope except those who have keyword `extern` have no linkage
- cannot acces outside scope
- ex: local class inside funtion, enumeration, enumerator, type does not have linakge
- it will mean another entity if accessed outside the scope
- even identifier with `static` keyword will have no linkage that are declared inside block scope

### Internal linkage

- identifier that implements internal linkage is not accessible outside the translation unit it is declared in
- any identifier within the unit can access an identifier having internal linkage
- identifier with internal linkage is implemented by the keyword `static`, and have global scope
- internally linked identifier is stored in initialized or uninitialized segment of RAM

### External linkage

- identifier implementing external linkage is visible to every translation unit
- shared between translation units and are considered to be located at the outermost level of the program
- can use identifier with external linkage with keyword `extern`
- `extern` identifiers are generally stored in initialized/uninitialized or text segment of RAM

## Scope v.s Linkage 

In C, program that consists of multiple source code files is compiled one at a time 

### Scope 

- property handlrd by complier
- until the compilation process, a variable can be described by it’s scope
- determines visibility of coupled names on a file basis 

### Linkage 

- property handled by linker
- only when the linking process starts, linkage property comes into play
- allows to couple names together on a per file basis

## Global variable

variables declared outside any function

- initialization of these variables occurs automatically to 0 during the time of declaration
- hold their actual values throughout the lifetime of that program
- any function can access a global variable; available for use throughout the running of the entire program
- generally write the global variables before the main() function

### Advantages

1. can be accessed by all the functions present in the program
2. Oone-time declaration is required
3. useful if all the functions are accessing the same data

### Disadvantages

1. value can be changed accidentally as it can be used by any function in the program
2. if we use a large number of global variables, then there is a high chance of error generation in the program