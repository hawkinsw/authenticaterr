#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void do_admin_tasks(void) {
	char command[10] = {0,};

	fprintf(stderr, "admin>\n");
	fgets(command, 10, stdin);

}

void do_user_tasks(void) {
	char command[10] = {0,};

	fprintf(stderr, "user>\n");
	fgets(command, 10, stdin);

}

void authenticate(void) {
	char password[10] = {0,};

	printf("Password:\n");
	fgets(password, 100, stdin);

	if (!strcmp(password, "53cr3+\n"))
		do_admin_tasks();
	else
		do_user_tasks();
}

int main(int argc, char **argv) {
	authenticate();
	return 0;
}
