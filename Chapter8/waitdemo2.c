/* waitdemo2.c - shows how parent gets child status
 */
#include<stdio.h>

#define DELAY 5

int main(void)
{
	int newpid;
	void child_code(), parent_code();

	printf("before: mypid is %d\n", getpid());

	if((newpid = fork()) == -1)
		perror("fork");
	else if (newpid == 0)
		child_code(DELAY);
	else
		parent_code(newpid);
}
/* 
 * new process takes a nap and then exits
 */
void child_code(int delay)
