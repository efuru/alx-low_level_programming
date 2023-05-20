#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int main(int argc, char *argv[]);
void reverse(char *str, int len);
void validate_arguments(int argc, char *argv[]);
char *long_multiplication(char *num1, char *num2);

#endif
