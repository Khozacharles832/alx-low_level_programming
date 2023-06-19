0x0E-structures_typedef

OBJECTIVES . What are structures, when, why and how to use them
	   . How to use typedef

1. Poppy
	. Define a new type struct_dog with this elements
	. name, type = char*
	. age, type = int
	. owner, type = char*

1. A dog is the only thing on earth that loves you more than you love yourself
	. Write a function that initialise a variable of type struct dog
	. prototype: void init_dog(struct_dog *d, char *name, float age, char *owner);

2. A dog will teach you unconditional love, if you can have that in your life, things wont be too bad
	. Write a function that prints a struct dog
	. prototype: void print_dog(struct_dog *d);
	. if an element of d is NULL, print (nil)
	. if name is NULL print name: nil
	. if d is NULL print nothing

3. Outside a dog, a book is a mans best friend, inside a dog is too dark to read
	. Define a new type dog_t as a new name for the type struct dog

4. A door is what a dog is perpetually on the wrong side of
	. Write a function that creates a new dog
	. prototype: dog_t *new_dog(char *name, float age, char *owner);
	. You have to store a copy of name and owner
	. Return NULL if the function fails

5. How many legs does a dog have if you call his tail a leg, four, saying his tail is a leg doesnt make it a leg
	. Write a function that frees a dog
	. prototype: void free_dog(dog_t *d) 
