/*
 * Exercise 1-13.
 * Write a program to print a histgram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
 */

#include <stdio.h>
#include <ctype.h>

void updatecounts(int counts[], int len, int wordlen);
int getpeak(int counts[], int len);
void painth(int counts[], int len);
void paintv(int counts[], int len);

int main() {
	int len = 100;
	int counts[len];
	int i;
	for (i = 0; i < len; counts[i++] = 0)
		;
	int isIn = 0;
	int wordlen = 0;
	char c;
	while ((c = getchar()) != EOF) {
		
	}
}




