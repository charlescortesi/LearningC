#include <stdio.h>

int main(int argc, char *argv[]){
	
	if(argc != 2){
		printf("ERROR: You need one argument.\n");
		// This is how you abort a program
		return 1;
		}
	
	int i = 0;
	
	for(i = 0; argv[1][i] != '\0'; i++){
		if(argv[1][i] == 'a' || argv[1][i] == 'A'){
				printf("%d: 'A'\n", i);
			}
		else if(argv[1][i] == 'e' || argv[1][i] == 'E'){
				printf("%d: 'E'\n", i);
			}
		else if(argv[1][i] == 'i' || argv[1][i] == 'I'){
				printf("%d: 'I'\n", i);
			}	
		else if(argv[1][i] == 'o' || argv[1][i] == 'O'){
				printf("%d: 'O'\n", i);
			}
		else if(argv[1][i] == 'u' || argv[1][i] == 'U'){
				printf("%d: 'U'\n", i);
			}
		else if(argv[1][i] == 'y' || argv[1][i] == 'Y'){
					if( i > 2 ){
						printf("%d: 'Y'\n",i);
						}
			}
		else{
				printf("%d: %c is not a vowel\n",i,argv[1][i]);
			}
		}
	
	return 0;
	
	}
