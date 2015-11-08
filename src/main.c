#include <stdio.h>
#include "array.h"
#include "misc.h"
#include "tokenise.h"

int main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
		return 1;
	}

	char *input_filename = argv[1];

	Array tokens;
	tokenise(&tokens, input_filename);

	for (u32 i = 0; i < tokens.size; i++) {
		Token *token = array_ref(&tokens, i);
		printf("%d\n", token->type);
	}

	return 0;
}
