#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* FUNCTION_POINTERS_H */
