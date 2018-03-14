/* spwd.c: a simplified version of pwd
 *
 * starts in current directory and recursively
 * climbs up to root of filesystem, prints top part
 * then prints current part
 *
 * uses readdir() to get info about each thing
 *
 * bug: prints an empty string if run from "/"
 */
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<dirent.h>

ino_t get_inode(char *);
void printpathto(ino_t);
void inum_to_name(ino_t, char *, int);

<<<<<<< HEAD
int main()
{
	printpathto(get_inode("."));		/* print path to here */
	putchar('\n');				/* then add newline */
=======
int main(void)
{
	printpathto(get_inode("."));			/* print path to here */
	putchar('\n');					/* then add newline */
>>>>>>> cc56402179485c2b969b61d3fd65752b70a7f436
	return 0;
}

void printpathto(ino_t this_inode)
<<<<<<< HEAD
/*
 * prints path leading down to an object with this inode
 * kind of recursive
=======
/* 
 * prints path leading down to an object with this inode
 * kindof recursive
>>>>>>> cc56402179485c2b969b61d3fd65752b70a7f436
 */
{
	ino_t my_inode;
	char its_name[BUFSIZ];
	if(get_inode("..") != this_inode)
	{
<<<<<<< HEAD
		chdir("..");					/* up one dir */
=======
		chdir("..");					/* upt one dir */
>>>>>>> cc56402179485c2b969b61d3fd65752b70a7f436
		inum_to_name(this_inode, its_name, BUFSIZ);	/* get its name */
		my_inode = get_inode(".");			/* print head */
		printpathto(my_inode);				/* recursively */
		printf("/%s", its_name);			/* now print */
								/* name of this */
	}
<<<<<<< HEAD
=======

>>>>>>> cc56402179485c2b969b61d3fd65752b70a7f436
}

void inum_to_name(ino_t inode_to_find, char *namebuf, int buflen)
/*
 * looks through current directory for a file with this inode
 * number and copies its name into namebuf
 */
{
<<<<<<< HEAD
	DIR *dir_ptr;				/* the directory */
	struct dirent *direntp;			/* each entry */
=======
	DIR *dir_ptr;					/* the directory */
	struct dirent * direntp;			/* each entry */
>>>>>>> cc56402179485c2b969b61d3fd65752b70a7f436
	dir_ptr = opendir(".");
	if(dir_ptr == NULL){
		perror(".");
		exit(1);
	}
	/*
	 * search directory for a file with specified inum
	 */
	while((direntp = readdir(dir_ptr)) != NULL)
		if(direntp->d_ino == inode_to_find)
		{
			strncpy(namebuf, direntp->d_name, buflen);
<<<<<<< HEAD
			namebuf[buflen-1] = '\0';		/* just in case */
			closedir(dir_ptr);
			return;
		}
	fprintf(stderr, "error looking for inum %d\n", inode_to_find);
	exit(1);
=======
			namebuf[buflen-1] = '\0'; /* just in case */
			closedir(dir_ptr);
			return;
		}
		fprintf(stderr, "error looking for inum %d\n", inode_to_find);
		exit(1);
>>>>>>> cc56402179485c2b969b61d3fd65752b70a7f436
}

ino_t get_inode(char *fname)
/*
 * returns inode number of the file
 */
{
	struct stat info;
	if(stat(fname, &info) == -1){
<<<<<<< HEAD
		fprintf(stderr, "Cannmot stat ");
=======
		fprintf(stderr, "Cannot stat ");
>>>>>>> cc56402179485c2b969b61d3fd65752b70a7f436
		perror(fname);
		exit(1);
	}
	return info.st_ino;
}
