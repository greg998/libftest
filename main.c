/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiquiau <ggiquiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:46:06 by ggiquiau          #+#    #+#             */
/*   Updated: 2020/11/24 15:33:42 by ggiquiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>

char func(unsigned int i, char c)
{
	return (c + i);
}

int main(int argc, char **argv)
{
	int a = '!';
	if((isalpha(a) && ft_isalpha(a)) || (!isalpha(a) && !ft_isalpha(a)))
		printf("OK isalpha %d %d\n",isalpha(a),ft_isalpha(a));
	else
		printf("BAD isalpha %d %d\n",isalpha(a),ft_isalpha(a));
	a = 'u';
	if((isalpha(a) && ft_isalpha(a)) || (!isalpha(a) && !ft_isalpha(a)))
		printf("OK isalpha %d %d\n",isalpha(a),ft_isalpha(a));
	else
		printf("BAD isalpha %d %d\n",isalpha(a),ft_isalpha(a));
	a = '!';
	if((isdigit(a) && ft_isdigit(a)) || (!isdigit(a) && !ft_isdigit(a)))
		printf("OK isdigit %d %d\n",isdigit(a),ft_isdigit(a));
	else
		printf("BAD isdigit %d %d\n",isdigit(a),ft_isdigit(a));
	a = '8';
	if((isdigit(a) && ft_isdigit(a)) || (!isdigit(a) && !ft_isdigit(a)))
		printf("OK isdigit %d %d\n",isdigit(a),ft_isdigit(a));
	else
		printf("BAD isdigit %d %d\n",isdigit(a),ft_isdigit(a));

	a = 'x';
	if((isalnum(a) && ft_isalnum(a)) || (!isalnum(a) && !ft_isalnum(a)))
		printf("OK isalnum %d %d\n",isalnum(a),ft_isalnum(a));
	else
		printf("BAD isalnum %d %d\n",isalnum(a),ft_isalnum(a));
	a = '0';
	if((isalnum(a) && ft_isdigit(a)) || (!isalnum(a) && !ft_isalnum(a)))
		printf("OK isalnum %d %d\n",isalnum(a),ft_isalnum(a));
	else
		printf("BAD isalnum %d %d\n",isalnum(a),ft_isalnum(a));
	a = '!';
	if((isalnum(a) && ft_isdigit(a)) || (!isalnum(a) && !ft_isalnum(a)))
		printf("OK isalnum %d %d\n",isalnum(a),ft_isalnum(a));
	else
		printf("BAD isalnum %d %d\n",isalnum(a),ft_isalnum(a));
	a = 128;
	if((isascii(a) && ft_isascii(a)) || (!isascii(a) && !ft_isascii(a)))
		printf("OK isascii %d %d\n",isascii(a),ft_isascii(a));
	else
		printf("BAD isascii %d %d\n",isascii(a),ft_isascii(a));
	a = 127;
	if((isascii(a) && ft_isascii(a)) || (!isascii(a) && !ft_isascii(a)))
		printf("OK isascii %d %d\n",isascii(a),ft_isascii(a));
	else
		printf("BAD isascii %d %d\n",isascii(a),ft_isascii(a));
	a = -127;
	if((isascii(a) && ft_isascii(a)) || (!isascii(a) && !ft_isascii(a)))
		printf("OK isascii %d %d\n",isascii(a),ft_isascii(a));
	else
		printf("BAD isascii %d %d\n",isascii(a),ft_isascii(a));
	a = ' ' - 1;
	if((isprint(a) && ft_isprint(a)) || (!isprint(a) && !ft_isprint(a)))
		printf("OK isprint %d %d\n",isprint(a),ft_isprint(a));
	else
		printf("BAD isprint %d %d\n",isprint(a),ft_isprint(a));
	a = ' ';
	if((isprint(a) && ft_isprint(a)) || (!isprint(a) && !ft_isprint(a)))
		printf("OK isprint %d %d\n",isprint(a),ft_isprint(a));
	else
		printf("BAD isprint %d %d\n",isprint(a),ft_isprint(a));
	a = 127;
	if((isprint(a) && ft_isprint(a)) || (!isprint(a) && !ft_isprint(a)))
		printf("OK isprint %d %d\n",isprint(a),ft_isprint(a));
	else
		printf("BAD isprint %d %d\n",isprint(a),ft_isprint(a));

	a = 'z';
	if(toupper(a) == ft_toupper(a))
		printf("OK toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	else
		printf("BAD toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	a = 'Z';
	if(toupper(a) == ft_toupper(a))
		printf("OK toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	else
		printf("BAD toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	a = 0;
	if(toupper(a) == ft_toupper(a))
		printf("OK toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	else
		printf("BAD toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	a = -128;
	if(toupper(a) == ft_toupper(a))
		printf("OK toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	else
		printf("BAD toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	a = -129;
	if(toupper(a) == ft_toupper(a))
		printf("OK toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	else
		printf("BAD toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	a = 1000;
	if(toupper(a) == ft_toupper(a))
		printf("OK toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	else
		printf("BAD toupper %d %d %c\n",toupper(a),ft_toupper(a),ft_toupper(a));
	a = 'z';
	if(tolower(a) == ft_tolower(a))
		printf("OK tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	else
		printf("BAD tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	a = 'Z';
	if(tolower(a) == ft_tolower(a))
		printf("OK tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	else
		printf("BAD tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	a = -128;
	if(tolower(a) == ft_tolower(a))
		printf("OK tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	else
		printf("BAD tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	a = -129;
	if(tolower(a) == ft_tolower(a))
		printf("OK tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	else
		printf("BAD tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	a = 1000;
	if(tolower(a) == ft_tolower(a))
		printf("OK tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));
	else
		printf("BAD tolower %d %d %c\n",tolower(a),ft_tolower(a),ft_tolower(a));

	char *s = "";
	if(strlen(s) == ft_strlen(s))
		printf("OK strlen %ld %ld\n",strlen(s),ft_strlen(s));
	else
		printf("BAD strlen %ld %ld\n",strlen(s),ft_strlen(s));
	s = "abcdefghij";
	if(strlen(s) == ft_strlen(s))
		printf("OK strlen %ld %ld\n",strlen(s),ft_strlen(s));
	else
		printf("BAD strlen %ld %ld\n",strlen(s),ft_strlen(s));
	const char *s5 = "bonjour";
	int test = 0;
	char *s6 = ft_strdup(s5);
	char *s7 = strdup(s5);
	if (!strcmp(s6,s7))
		test = 1;
	s6[2] = 'u';
	s7[2] = 'u';
	if (strcmp(s6,s5) && test)
		printf("OK strdup %s %s\n",s7,s6);
	else
		printf("OK strdup %s %s\n",s7,s6);
	free(s6);
	free(s7);
	const char *s20 = "bonjour";
	int c = '\0';
	char *s21 = strchr(s20, c);
	char *s22 = ft_strchr(s20, c);
	if((s21 != NULL && s22 != NULL && !strcmp(s21,s22)) ||
			(s21 == NULL && s22 == NULL))
		printf("OK strchr %s %s\n",s21,s22);
	else
		printf("BAD strchr %s %s\n",s21,s22);
	c = 'x';
	char *s23 = strchr(s20, c);
	char *s24 = ft_strchr(s20, c);
	if((s23 != NULL && s24 != NULL && !strcmp(s23,s24)) ||
			(s23 == NULL && s24 == NULL))
		printf("OK strchr %s %s\n",s23,s24);
	else
		printf("BAD strchr %s %s\n",s23,s24);
	c = 'j';
	char *s25 = strchr(s20, c);
	char *s26 = ft_strchr(s20, c);
	if((s25 != NULL && s26 != NULL && !strcmp(s25,s26)) ||
			(s25 == NULL && s26 == NULL))
		printf("OK strchr %s %s\n",s25,s26);
	else
		printf("BAD strchr %s %s\n",s25,s26);
	
	c = '\0';
	char *s27 = strrchr(s20, c);
	char *s28 = ft_strrchr(s20, c);
	if((s27 != NULL && s28 != NULL && !strcmp(s27,s28)) ||
			(s27 == NULL && s28 == NULL))
		printf("OK strrchr %s %s\n",s27,s28);
	else
		printf("BAD strrchr %s %s\n",s27,s28);
	c = 'x';
	char *s29 = strrchr(s20, c);
	char *s30 = ft_strrchr(s20, c);
	if((s29 != NULL && s30 != NULL && !strcmp(s29,s30)) ||
			(s29 == NULL && s30 == NULL))
		printf("OK strrchr %s %s\n",s29,s30);
	else
		printf("BAD strrchr %s %s\n",s29,s30);
	c = 'o';
	char *s31 = strrchr(s20, c);
	char *s32 = ft_strrchr(s20, c);
	if((s31 != NULL && s32 != NULL && !strcmp(s31,s32)) ||
			(s31 == NULL && s32 == NULL))
		printf("OK strrchr %s %s\n",s31,s32);
	else
		printf("BAD strrchr %s %s\n",s31,s32);
	
	const char *s39 = "bonjour";
	const char *s40 = "bonjour";
	size_t n = 5;
	if (strncmp(s39,s40,n) == ft_strncmp(s39,s40,n))
		printf("OK strncmp %d %d\n",strncmp(s39,s40,n),ft_strncmp(s39,s40,n));
	else
		printf("BAD strncmp %d %d\n",strncmp(s39,s40,n),ft_strncmp(s39,s40,n));
	n = 6;
	const char *s41 = "bonjour";
	const char *s42 = "bonjoxr";
	if (strncmp(s41,s42,n) == ft_strncmp(s41,s42,n))
		printf("OK strncmp %d %d\n",strncmp(s41,s42,n),ft_strncmp(s41,s42,n));
	else
		printf("BAD strncmp %d %d\n",strncmp(s41,s42,n),ft_strncmp(s41,s42,n));
	n = 5;
	if (strncmp(s41,s42,n) == ft_strncmp(s41,s42,n))
		printf("OK strncmp %d %d\n",strncmp(s41,s42,n),ft_strncmp(s41,s42,n));
	else
		printf("BAD strncmp %d %d\n",strncmp(s41,s42,n),ft_strncmp(s41,s42,n));
	
	char s45[50];
	char s46[50];
	char *s47 = (char *)memset(s45, 300, 50);
	char *s48 = (char *)ft_memset(s46, 300, 50);
	s47[49] = '\0';
	s48[49] = '\0';
	if (!memcmp(s47,s48,50))
		printf("OK memset %s %s\n",s47,s48);
	else
		printf("BAD memset %s %s\n",s47,s48);
	char s49[50] = "bonjour";
	char s50[50] = "bonjour";
	bzero(s49,50);
	ft_bzero(s50,50);
	if (!memcmp(s49,s50,50))
		printf("OK bzero %s %s\n",s49,s50);
	else
		printf("BAD bzero %s %s\n",s49,s50);

	char array[] = "0123456789";
	char array2[] = "0123456789";
	memmove(array + 5, array + 3, 5);
	ft_memmove(array2 + 5, array2 + 3, 5);
	if (!memcmp(array, array2, 10))
		printf("OK memmove %s %s\n", array, array2);
	else
		printf("BAD memmove %s %s\n", array, array2);
	char array3[] = "0123456789";
	char array4[] = "9876543210";
	memcpy(array3, array4, 5);
	char array5[] = "0123456789";
	ft_memcpy(array5, array4, 5);
	if (!memcmp(array3, array5, 10))
		printf("OK memcpy %s %s\n", array3, array5);
	else
		printf("BAD memcpy %s %s\n", array3, array5);
	char s51[50];
	char s52[50];
	const char *s53 = "bon\200our";
	memset(s51, 'o', 50);
	memset(s52, 'o', 50);
	s51[49] = '\0';
	s52[49] = '\0';
	char *s54 = (char*)memccpy(s51, s53,'\200', 7);
	char *s55 = (char*)ft_memccpy(s52, s53,'\200', 7);
	if (!memcmp(s51, s52,50) && !memcmp(s54, s55,7))
		printf("OK memccpy %s %s %s %s\n", s51, s52, s54, s55);
	else
		printf("BAD memccpy %s %s %s %s\n", s51, s52, s54, s55);
	const char *s56 = "bon\200our";
	char *s57 = (char*)memchr(s56,-128, 7);
	char *s58 = (char*)ft_memchr(s56,-128, 7);
	if (s57 == s58)
		printf("OK memchr %s %s\n", s57, s58);
	else
		printf("BAD memchr %s %s\n", s57, s58);

	char s59[50];
	char s60[50];
	bzero(s59, 50);
	bzero(s60, 50);
	const char *s61 = "bonjour";
	size_t i = strlcpy(s59, s61, 0);
	size_t i2 = ft_strlcpy(s60, s61, 0);
	if (!strcmp(s59,s60) && i == i2)
		printf("OK strlcpy %s %s %ld %ld\n", s59, s60, i, i2);
	else
		printf("BAD strlcpy %s %s %ld %ld\n", s59, s60, i, i2);
	bzero(s59, 50);
	bzero(s60, 50);
	i = strlcpy(s59, s61, 6);
	i2 = ft_strlcpy(s60, s61, 6);
	if (!strcmp(s59,s60) && i == i2)
		printf("OK strlcpy %s %s %ld %ld\n", s59, s60, i, i2);
	else
		printf("BAD strclpy %s %s %ld %ld\n", s59, s60, i, i2);
	bzero(s59, 50);
	bzero(s60, 50);
	strcpy(s59, "abcdef");
	strcpy(s60, "abcdef");
	i = strlcat(s59, s61, 6);
	i2 = ft_strlcat(s60, s61, 6);
	if (!strcmp(s59,s60) && i == i2)
		printf("OK strlcat %s %s %ld %ld\n", s59, s60, i, i2);
	else
		printf("BAD strlcat %s %s %ld %ld\n", s59, s60, i, i2);
	bzero(s59, 50);
	bzero(s60, 50);
	strcpy(s59, "abcdef");
	strcpy(s60, "abcdef");
	i = strlcat(s59, s61, 8);
	i2 = ft_strlcat(s60, s61, 8);
	if (!strcmp(s59,s60) && i == i2)
		printf("OK strlcat %s %s %ld %ld\n", s59, s60, i, i2);
	else
		printf("BAD strlcat %s %s %ld %ld\n", s59, s60, i, i2);
	const char *big = "bonjour";
	const char *little = "jo";
	char *s62 = strnstr(big, little, 4);
	char *s63 = ft_strnstr(big, little, 4);
	if ((s62 != NULL && s63 != NULL && !strcmp(s62, s63)) || (s62 == NULL && s63 == NULL))
		printf("OK strnstr %s %s\n", s62, s63);
	else
		printf("BAD strnstr %s %s\n", s62, s63);
	s62 = strnstr(big, little, 5);
	s63 = ft_strnstr(big, little, 5);
	if ((s62 != NULL && s63 != NULL && !strcmp(s62, s63)) || (s62 == NULL && s63 == NULL))
		printf("OK strnstr %s %s\n", s62, s63);
	else
		printf("BAD strnstr %s %s\n", s62, s63);
	s62 = strnstr(big, "jx", 5);
	s63 = ft_strnstr(big, "jx", 5);
	if ((s62 != NULL && s63 != NULL && !strcmp(s62, s63)) || (s62 == NULL && s63 == NULL))
		printf("OK strnstr %s %s\n", s62, s63);
	else
		printf("BAD strnstr %s %s\n", s62, s63);
	s62 = strnstr(big, "", 5);
	s63 = ft_strnstr(big, "", 5);
	if ((s62 != NULL && s63 != NULL && !strcmp(s62, s63)) || (s62 == NULL && s63 == NULL))
		printf("OK strnstr %s %s\n", s62, s63);
	else
		printf("BAD strnstr %s %s\n", s62, s63);
	
		const char *s80 = "-2147483648";
	int n2 = atoi(s80);
	int n3 = ft_atoi(s80);
	if (n2 == n3)
		printf("OK atoi %d %d\n", n2, n3);
	else
		printf("BAD atoi %d %d\n", n2, n3);
	const char *s81 = "\t \n \f \v \f \r 214748364azk7jzai\n";
	n2 = atoi(s81);
	n3 = ft_atoi(s81);
	if (n2 == n3)
		printf("OK atoi %d %d\n", n2, n3);
	else
		printf("BAD atoi %d %d\n", n2, n3);
	const char *s82 = "\t \n \f \v \f \r- 2147483647azkjzai\n";
	n2 = atoi(s82);
	n3 = ft_atoi(s82);
	if (n2 == n3)
		printf("OK atoi %d %d\n", n2, n3);
	else
		printf("BAD atoi %d %d\n", n2, n3);
	const char *s83 = "u2147483647";
	n2 = atoi(s83);
	n3 = ft_atoi(s83);
	if (n2 == n3)
		printf("OK atoi %d %d\n", n2, n3);
	else
		printf("BAD atoi %d %d\n", n2, n3);




	char *s64 =  ft_substr("bonjour", 2, 30);
	if (!strcmp(s64, "njour"))
		printf("OK substr njour %s\n",s64);
	else
		printf("BAD substr njour %s\n",s64);
	free(s64);
	char *s65 =  ft_substr("bonjour", 2, 1);
	if (!strcmp(s65, "n"))
		printf("OK substr n %s\n",s65);
	else
		printf("BAD substr n %s\n",s65);
	free(s65);
	char *s66 = ft_strjoin("bonjour ","a tous");
	if (!strcmp(s66, "bonjour a tous"))
		printf("OK strjoin bonjour a tous %s\n", s66);
	else
		printf("BAD strjoin bonjour a tous %s\n", s66);
	free(s66);
	char *s67 = ft_strtrim("abxobxuaxb", "bax");
	if (!strcmp(s67, "obxu"))
		printf("OK strtrim obxu %s\n", s67);
	else
		printf("BAD strtrim obxu %s\n", s67);
	free(s67);
	char **s68 = ft_split("   bonjour   a  tous  ", ' ');
	i = 0;
	if (!strcmp(s68[0], "bonjour") && !strcmp(s68[1], "a") && !strcmp(s68[2], "tous"))
		printf("OK split bonjour a tous %s %s %s\n",*s68,s68[1],s68[2]);
	else
		printf("BAD split bonjour a tous %s %s %s\n",*s68,s68[1],s68[2]);
	free(*s68);
	free(s68[1]);
	free(s68[2]);
	free(s68);
	char *s69 = ft_itoa(-2147483648);
	if (!strcmp(s69, "-2147483648"))
		printf("OK itoa -2147483648 %s\n", s69);
	else
		printf("BAD itoa -2147483648 %s\n", s69);
	free(s69);
	char *s70 = ft_itoa(-000);
	if (!strcmp(s70, "0"))
		printf("OK itoa 0 %s\n", s70);
	else
		printf("BAD itoa 0 %s\n", s70);
	free(s70);
	char *s71 = ft_strmapi("aaaaaaaaaa", &func);
	if (!strcmp(s71, "abcdefghij"))
		printf("OK strmapi abcdefghij %s\n", s71);
	else
		printf("BAD strmapi abcdefghij %s\n", s71);
	ft_putchar_fd('b', 2);
	ft_putstr_fd("onjour", 2);
	ft_putendl_fd(" a tous", 2);
	sleep(120);
	return 0;
}	
