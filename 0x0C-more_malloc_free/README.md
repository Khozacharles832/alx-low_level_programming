0x0C-more_malloc_free

Description - How to use the exit function
	    - What are the functions calloc and realloc from the standard librar and how to use them.

0. TRUST NO ONE
	. Write a function that alllocates memory using malloc
	. Prototype: void *malloc_checked(unsigned int b);
	. Returns a pointer to the allocated memory
	. If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.

1. STRING_NCAT
	. Write a function that concatenates two strings
	. Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
	. The returned pointer shall point to the newly allocated space in memory which contains s1, followed by the first n bytes of s2, and the NULL 
	. If the function fails, it should return NULL
	. if n is greater to the length of s2, then use the entire s2 string
	. If NULL is passed, treat it as empty string

2. _CALLOC
	. Write a function that allocates memory for an array using malloc
	. Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
	. The _calloc function should allocate for an array of nmemb elements of size bytes each, and returns a pointer to the allocated memory
	. The memory is set to zero
	. If nmmemb or size is 0, then _calloc returns NULL
	. If malloc fails then _calloc returns NULL
	
3. ARRAY_RANGE
	. Write a function that creates an array of integers
	. Prototype: int *array_range(int min, int x);
	. The array created should contain all the values from min (included) to max (included) ordered from min to max
	. Return a pointer to the newly allocated array
	. if min > max, return NULL
	. if malloc fails return NULL
