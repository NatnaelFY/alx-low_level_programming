#ifndef _MAIN_H_
#define _MAIN_H_
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *int_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);
int onlyNumbers(char *c);
void multiply(char* s1, char* s2);
void print_int(unsigned long int n);
int _atoi(const char *s);
void _puts(char *str);
#endif