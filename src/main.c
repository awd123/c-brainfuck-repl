#include <stdio.h>

int main(void) {
	const char *DELIMITER = NULL;
	char mem_array[] = {0};
	char *p = mem_array;
	char line[1000];

	puts("Welcome to the C Brainf*** REPL version 0.0.3");

	void repl(void) {
		int i;

		while (1) {
			printf("%c", 62);
			fgets(line, 1000, stdin);

			for (i = 0; i < sizeof(line); i++) {
				char t = line[i];

				if (t == '>') {
					p++;
				} else if (t == '<') {
					p--;
				} else if (t == '+') {
					*p++;
				} else if (t == '-') {
					*p--;
				} else if (t == '.') {
					printf("\n%c", *p);
				} else if (t == ',') {
					scanf("%c", &*p);
				} else if (line[0..3] == "quit") {
					break;
				}
			};
		}
	}

	repl();

	return 0;
}
