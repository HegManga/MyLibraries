
#include <stdio.h>
#include <stdlib.h>

/*
https://www.scaler.com/topics/c/error-handling-in-c/
 
1. Operation not permitted:
*   Sometimes while performing operations of file handling in C, 
* 	we try to read from a file or change permissions of a file by accessing it. 
* 	If we don't have ownership rights or system rights to access a file, 
* 	then we get this particular error message.

2. No such file or directory: 
* 	This error message occurs whenever we try to access a file or directory that doesn't exists. 
* 	It also occurs when we specify wrong file destination path.

3. No such process: 
* 	When we perform some operations that are not supported during file handling in C, 
* 	it gives no such process error.

4. Interrupted System call: 
* 	If we try to read user's input and if there is no input present, 
* 	then the system calling process will not return any value and will be blocked forever. 
* 	This results in interrupted system calls.

5. I/O error: 
* 	I/O stands for input/output errors that occur when 
* 	system is not able to perform basic operations like 
* 	reading from a file or copying data from one file to another.

6. No such device or address: 
* 	When we specify incorrect device path or address 
* 	while opening or accessing them, this error occurs.
* 	For example: If we are trying to access a device driver using its path but in actual, 
* 	it has been removed from the system.

7. Argument list too long: 
* 	This error generally occurs when we work with large number of files.
* 	For example: If we need to get count of no. of files in a directory 
* 	(consisting of large number of files) that starts with string 
* 	- "Scaler", then due to limited buffer space it will show an error message 
* 	- "Argument list too long" as no. of files in that directory will be equal to the arguments list.

8. Exec format error: 
* 	This error occurs when we try to execute a file 
* 	that is not executable or has an invalid executable-file format.

9. Bad file number: 
* 	This error occurs generally when we try to write to a file
* 	which is opened for read-only purpose.

10. No child process: 
* 	If a process has no further sub-process or child process, 
* 	then the code returns -1 value and we get no child process error message.

11. Try again: 
* 	An attempt to create a process fails, when there are no more 
* 	process slots or not enough memory available. We then get try again error.

12. Out of memory: 
* 	This error occurs when there is not enough memory available to execute a process.

13. Permission denied: 
* 	This error occurs when we try to read from a file that is not opened. 
* 	It suggests that an attempt was made to access a file in a way that 
* 	is incompatible with the file's attributes.
  */

#define OPERATION_NOT_PERMITTED 1
#define NO_SUCH_FILE_OR_DIRECTORY 2
#define NO_SUCH_PROCESS 3
#define INTERRUPTED_SYSTEM_CALL 4
#define I/O_ERROR 5
#define NO_SUCH_DEVICE_OR_ADDRESS 6
#define ARGUMENT_LIST_TOO_LONG 7
#define EXEC_FORMAT_ERROR 8
#define BAD_FILE_NUMBER 9
#define NO_CHILD_PROCESSES 10
#define TRY_AGAIN 11
#define OUT_OF_MEMORY 12
#define PERMISSION_DENIED 13

typedef struct err{
	void* ret;
	unsigned int error_code;
}erret;

int main(int argc, char **argv)
{
		
	return 0;
}

