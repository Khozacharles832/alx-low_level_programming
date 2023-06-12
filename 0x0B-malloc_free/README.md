0x0B-malloc_free

DESCRIPTION - What is the difference between automatic and dynamic memory allocation
		. What is malloc and free, how to use them
		. Why and when use them
		. How to check for memory leak using valgrind

0. FLOAT LIKE A BUTTERFLY STING LIKE A BEE
	. Write a functoin that creates an array of chars, and initialise it with a specific char
	. Prototype char *create_array(unsigned int size, char c);
	. Returns NULL if size = 0
	. Returns a pointer to the array, or NUL if it fails

1. THE WOMAN WHO HAS NO IMAGINATION HAS NO WINGS
	. Write a function that returns a pointer to the newly allocated space in memory, which contains a cop of the string given as a parameter
	. Prototype: char *_strdup(char *str);
	. The _strdup() function returns a pointer to a new string which is a duplicate of the string str, memory for the new string can be obtained with
	- malloc and can bet freed with free
	. Returns NULL if str = NULL
	. On success the strdup() function returns a pointer to the duplicated string, it returns NULL if insuficient was available.

2. HE WHO IS NOT COURAGEOUS ENOUGH TO RISK WILL NOT ACCOMPLISH ANYTHING IN LIFE
	. Write a function that concatenates two strings
	. Prototype: char *_str_concat(char *s1, char *s2);
	. The returned ponter should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, & '\0'
	. If NULL is passed treat it as an empty string
	. The string should return NULL on failure 
t
3. IF YOU EVER DREAM OF BEATING ME YOU'D BETTER WAKE UP AND APOLOGISE
	. Write a function that returns a pointer to a 2 dimensional array of integers
	. Prototype: int *alloc_grid(int width, int height);
	. The string should return NULL on failure
	. If the width || height 0 or - return NULL

4. IT'S NOT BRAGGING IF YO CAN BACK IT UP
	. Write a function to free a 2 - dimensional array you previously created by you alloc_grid function
	. Prototype:  void free_grid(int **grid, int height);
	. Note that we will compile with your alloc_grid.c file, make sure it compiles
