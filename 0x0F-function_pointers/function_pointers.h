#ifndef FUNC_P_H
#define FUNC_P_H

void _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
