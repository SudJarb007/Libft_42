#ifndef LIBFT_H
# define LIBFT_H

// #include <stdio.h>
#include <unistd.h>
// #include <string.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

int ft_strlen(const char *s);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *src, int size);
char    *ft_strlcat(char *dst, const char *src, int n);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
int ft_atoi(const char *str);
int memcmp(const void *str1, const void *str2, size_t n);
char *ft_strdup(const char *string);
void *ft_calloc(size_t nmemb, size_t size);

# endif