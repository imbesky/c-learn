#include <stdio.h> 
#include <stdbool.h>

#define MAX_LENGTH 1000 

int main(){
	char c;
	char next_c;
	char content[MAX_LENGTH] = "";
	bool single_line_comment = false;
	bool multi_line_comment = false;
	int i = 0;

	while((c = getchar()) != EOF){
		if(c == '/'){
			next_c = getchar();
			if (next_c == '/') {
				single_line_comment = true;
				continue;
			}
			if(next_c == '*'){
				multi_line_comment = true;
				continue;
			}
			content[i] = c;
			content[i + 2] = next_c;
			i += 2;
			continue;
		}
		if (single_line_comment) {
			if (c == '\n') {
				single_line_comment = false;
			}
			continue;
		}
		if(multi_line_comment){
			if(c == '*'){
				next_c = getchar();
				if(next_c == '/'){
					multi_line_comment = false;
				}
			}
			continue;
		}
		content[i] = c;
		++i;
	}
	printf("\n");
	for (i = 0; i < MAX_LENGTH; i++) {
		printf("%c", content[i]);
	}
	printf("\n");
	return 0;
}