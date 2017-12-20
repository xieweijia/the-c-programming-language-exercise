/*
 * Exercise 1-8
 * Write a program to count blanks, tabs, and newlines.
 * 在新行的开头输入:ctrl+z, 结束统计
 */

#include <stdio.h>

int space = 0;
int tab = 0;
int newline = 0;

int main() {
	int c;
	while ((c = getchar()) != EOF) {
		switch (c) {
			case ' ':
				space++;
				break;
			case '\t':
				tab++;
				break;
			case '\n':
				newline++;
				break;
		}
	}
	printf("space:%d, tab:%d, newline:%d\n", space, tab, newline);
}