#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
	int  distance = 100;
	char char_distance = 100;
	// This is also a comment
	
	printf("You are %d miles away.\n", distance);
	printf("You are %d miles away.\n", distance+2);
	printf("You are %d miles away.\n", distance+char_distance);
	printf("You are 100 miles away.");
	printf("\nYou are %d miles away.\n", distance);
	printf("You are %d miles away.\n", char_distance);
	
	return 0;
	}
