# random_number_generation
The random function is used to find the random number between any two defined numbers.
In C programming language, the random function has two inbuilt functions: rand() and srand().

# rand() Function:
In C programming language, the rand() function is a library function 
that generates the random number in the range [0, RAND_MAX]. 
When we use the rand() function in a program, we need to implement 
the stdlib.h header file because rand() function is defined in the stdlib.h header life.
Syntax: int rand(void)

The rand() function returns the random integer whose range from 0 to RAMD_MAX is a 
symbolic constant that defines in stdlib.h header file, whose value is greater 
but less than 32767 depending on the C libraries 

# srand() Function
The srand() function is a C library funtion that determines the initial 
point to generate different series of pseudo-random numbers. A srand()
function cannot be used without using a rand() function. The srand() 
function is required to set the value of the seed only once in a program 
to generate the different result of random integers before calling the rand() function.
Syntax: int srand(unsigned int seed)
seed: It is an integer value that contains a seed for a new sequence of 
pseudo-random number
 
