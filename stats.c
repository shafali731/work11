#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(){
	struct stat *s = malloc(sizeof(struct stat));
	stat("stats.c", s);

	printf("Size of file: %d B\n", s->st_size);

	printf("Permissions of file: %d\n", s->st_mode);
	printf("Time last accessed: %s\n", ctime( &s->st_atime ));
	printf("Last time modified: %s\n", ctime( &s->st_mtime ));
	return 0;
}
