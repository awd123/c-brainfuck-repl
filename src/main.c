#include <stdio.h>

int main(void) {
	char mem_array[] = {0};
	char *pointer = mem_array;

	puts("Welcome to the C Brainf*** REPL version 0.0.1");

	void repl(void) {
		while (true) {
			char line[];
			printf("Enter a command: ");

