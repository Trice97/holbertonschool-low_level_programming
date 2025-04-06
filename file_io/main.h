#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* For size_t */
#include <sys/types.h> /* For ssize_t */



int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);


#endif /* MAIN_H */
