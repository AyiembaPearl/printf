#ifndef MAIN_H
#define MAIN_H

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>

int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int choose(va_list args, char c);
//int print_i(int i)
int print_d(int num)

#endif
