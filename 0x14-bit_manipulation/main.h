#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void binary_print(unsigned long int n);
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

unsigned int _strlen(const char *s);
unsigned int _pow_recursion(unsigned int x, unsigned int y);
void rec_bin(unsigned long int n);

#endif
