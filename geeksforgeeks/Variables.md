# C programming language: variable

## Variable

the name associated with some memory location to store data of different types

### Aspects of defining

```c
type name = value;
type name2, value2;
```

1. Variable Declaration

- informing compiler name of the variable, and type of the value it will hold
- in C programming language, definition and declaration for a variable takes place at the same time

to only declare variables;

```c
extern type name;
```

2. Variable Definition

`type name;`

- compiler automatically allocates memory and value for it

3. Variable Initialization

`name = value;`

- the process where the user assigns some meaningful value to the variable

### Naming rules

- must only contain alphabets, digits, and underscore
- must start with an alphabet or an underscore
- no whitespace is allowed
- must not be any reserved word or keyword

### Types

1. Local Variables

```c
void age(){
	int my_age = 10; // can be used inside age() only
}
```

- declared inside a function or a block of code
- scope: block or function in which it is declared

2. Global Variables

```c
int id = 1;

int idIs(){
	return id; // can access global variable `id`
}
```

- declared outside the function or a block of code
- scope: whole program
- can access from anywhere after declaration


`When local and global variable have same name`
- local variable will be given by compiler
- can access a global variable`extern`

```c
int id = 1;

int main(){
	int id = 0;
	void studentA(){
		extern int id; //global variable `id`
		if(id == 1) // true
	}
}
```

3. Static Variables

- can be defined only once, using the static keyword
- scope: depends on the region where it is declared
- default value of static variables is `0`
- lifetime: end of the program
- can retain its value for multiple function calls

```c
void yearIs(){
	static int year = 2022;
	year += 1;
	printf("year is %d", year);
}

int main(){
	yearIs(); // "year is 2023"
	printf("Year passed");
	yearIs(); // "year is 2024"
	printf("Year passed");
	yearIs(); // "year is 2025"
	return 0;
}
```

4. Automatic Variables

```c
auto type name;
type name; // in local scope
```

- in C, all the `local variables` are `automatic variables` by default
- exception: static variable with local scope
- scope: local
- lifetime: till the end of the block

5. Extern Variables

`extern type name;`

- variables that can be shared between multiple C files

6. Register Variables

`register type name = value;`

- variables that are stored in the CPU register instead of the conventional storage place like RAM
- scope: local 
- lifetime: till the end of the block or a function
- default value: garbage value