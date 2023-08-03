C - Bit manipulation

1.1. Write a function that prints the binary representation of a number
	.prototype: void print_binary(unsigned long int n);
	.you are not allowed to use arrays
	.you are not allowed to use malloc
	.you are not allowed to use the % or / operators

2.10. Write a function that returns the value of a bit at a given index
	.prototype: int get_bit(unsigned long int n, unsigned int index)
	.Where index is the index, stsarting from 0 of the bit you want to get
	.Returns: the value of the bit at index, or -1 if an error occured

0. Write a function that converts a binary number to an unsigned int.
	.Prototype: unsigned int binary_to_unint(const char *b);
	.Where b is pointing to a string of 0 and 1 chars
	.Return: the converted number or 0 if:
	.there is one or more chars in the string b that is not 1 or 0
	. or n is NULL

1.1 Write a function that prints the binary representation of a number
	.Prototype: void print_binary(unsigned long int n);
	.You are not allowed to use arrays
	.you are not allowed to use malloc
	.You are not allowed to use the % 0r / oprators

2.10 Write a function that returns the value of a bit at a given index
	.Prototype: int get_bit(unsigned long int n, unsigned int index);
	Where index is the index, starting from 0 of the bit you want to get
	

5.101. Write a function that returns the number of bits you would need to flip
	to get from one number to the other
	.prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
	.you are not allowed to use the % or the / operators

6. Endianness
	.Write a function that check the endianess
	.Prototype: int get_endianness(void);
	.Return: 0 if big endian, 1 if little endian
=======
4.100. Write a function that sets the value of a bot to 0 at a given index
	.prototype: int char_bit(unsigned long int *n, unsigned int index);
	.Where index is the index, starting from 0 of the bit you want to set
	.Returns: 1 if it worked or -1 if an error occured

5.101. Write a functon that returns the number of bits you would need to flip to get from one number to another
	.prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
	.You are not allowed to use the % or / operators

6.Endianness
	.Write a function that checks the endianness
	.Prototype: int get_endianness(void);
	.Return: 0 if big endian, 1 if little 
