#ifndef MAIN_H
#define MAIN_H

/**
 * File: Alx
 * Auth: Panashe W Matarutse
 * Desc: Header files containing prototypes for all funxtions
 *	used in 0x0B-malloc_free directory
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
