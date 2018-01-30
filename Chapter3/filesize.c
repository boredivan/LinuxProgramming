/* filesize.c - prints size of passwd file */
#include<stdio.h>
#include<sys/stat.h>

intmain()
{
	struct stat infobuf;			/* place to store info */
	if(stat("/etc/passwd", &infobuf) == -1)	/* get info */
		perror(
}
