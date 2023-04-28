#include <ctype.h>
#include <stdio.h>

void emojify_str(char *msg) {
	char	current_char = *msg;
	while (current_char) {
		if (isalpha(current_char))
			printf(":alphabet-white-%c:", tolower(current_char));
		else if (isdigit(current_char))
			printf(":t%c%c:", current_char,
				(current_char == '3' ? 'a' : '\0'));//Really slack, why no :t3: ???
		else if (current_char == '.')
			printf(":black_circle:");
		else if (isspace(current_char))
			printf(":sussy:");
		else
			printf("%c", current_char);
		++msg;
		current_char = *msg;
	}
	printf("\n");
	fflush(NULL);
}

int main(int argc, char **argv) {
	int i = 1;

	while (i < argc) {
		emojify_str(argv[i]);
		++i;
	}
	return 0;
}

