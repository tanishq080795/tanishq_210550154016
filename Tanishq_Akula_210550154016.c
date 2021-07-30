/*
			Question 4
Open the file /usr/share/dictionary in process P1 and send the strings starting with letter 'm' to process P2 using pipes. In process P2 find and print the length of string.

Name:- Tanishq Akula
Roll:- 210550154016
*/

/*
		Algorithm
1. Create two processes using fork().
2. Create a file.txt using touch in the above mentioned directory.
3. Scan the file and print it in file2.txt under process 2 of the second process.
4. Find the length of string using strlen in file2.txt
5. close all the files.
*/
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
int main( ){
   pid_t child_pid;
   child_pid = fork ();
   if (child_pid < 0) {
      printf("fork failed");
      return 1;
   } else if (child_pid == 0) {
      printf ("child process successfully created!\n");
      printf ("child_PID = %d,parent_PID = %d\n",
      getpid(), getppid( ) );
   } else {
      
      printf ("parent process successfully created!\n");
      printf ("child_PID = %d, parent_PID = %d", getpid( ), getppid( ) );
   }
   return 0;
}
