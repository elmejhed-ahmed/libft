/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:38:05 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/04 19:08:54 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t    ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void ft_bzero(void *str, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t ft_dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2,size_t n);
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);
#endif
