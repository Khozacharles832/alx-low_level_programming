0x15-file I/O

>>How to create, open, close, read and write files.
>What are file descriptors.
>What are the 3 standard file descriptors, what their purpose and what are their POSIX name.
>How to use I/O system call open, close, read and write.
>What are and how to use the flags, O_RDONLY, O_wronly, O_RDONLY
>What are file permissions, and how to set them when creating a file with the open system call
>What is a system call.
>What is the difference between a function and a system call.

0.Tread carefully, she is near
	.prototype: ssize_t read_textfile(const char *filename, size_t letters);
	.Where letters is the number of letters it should read and print
	.returns the actual number of letters it could read and prints
	.if the file can not be opened or read, return 0.
	.if write fails or does not write the expected amount of bytes, return 0
