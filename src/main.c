#include <stdio.h>

int main(int argc, char *argv[]) {
	char mem_array[] = {0}; // memory array
	char *p = mem_array;    // pointer to memory array
	char line[10000];       // command string

	printf("Welcome to the C Brainf%s REPL version 0.1.1\n", argv[1] == "-c" ? "***" : "uck");

	void repl(void) {
		int i; // for iterator

		while (1) {
			printf("%c", 62); // prompt
			fgets(line, 10000, stdin);       // get command

			for (i = 0; i < sizeof(line); i++) {
				char t = line[i]; // current command

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
				} else if (t == '[') {
					while (*p) {
						if (t == ']') break;
					}
				}
			}
		}
	}

	repl();

	return 0;
}
