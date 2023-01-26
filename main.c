/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwenolaleroux <gwenolaleroux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:51:22 by gle-roux          #+#    #+#             */
/*   Updated: 2023/01/26 13:51:54 by gwenolalero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*int	main(void) //Makefile
{
	return (0);
}*/

/*int	main(void) //ft_atoi
{
    char chaine1[] = "\t ---+--+1234ab567";
    char chaine2[] = "---+--+1234ab567";
    char chaine3[] = "1234ab567";
    char chaine4[] = "\t \n\f---+--+1234ab567";
    char chaine5[] = "---+\t --+1234ab567";
	char chaine6[] = "\t \n\f-1234ab567";


    printf("%d\n", ft_atoi(chaine1));
	printf("%d\n", atoi(chaine1));
    printf("%d\n", ft_atoi(chaine2));
	printf("%d\n", atoi(chaine2));
    printf("%d\n", ft_atoi(chaine3));
	printf("%d\n", atoi(chaine3));
    printf("%d\n", ft_atoi(chaine4));
	printf("%d\n", atoi(chaine4));
    printf("%d\n", ft_atoi(chaine5));
	printf("%d\n", atoi(chaine5));
	printf("%d\n", ft_atoi(chaine6));
	printf("%d\n", atoi(chaine6));
    return (0);
}*/

/* int	main(void) //ft_bzero
{
	char str1[50] = "Halloween";
	char str2[50] = "Pumpkin";
	char str3[50] = "Trick or treat!";

	printf("str1 = %s\n", str1);
	ft_bzero(str1, 2);
	printf("str1 = %s\n", str1);
	bzero(str1, 5);
	printf("str1 bzero = %s\n", str1);
	printf("str2 = %s\n", str2);
	ft_bzero(str2, 5);
	printf("str2 = %s\n", str2);
	bzero(str2, 5);
	printf("str2 bzero = %s\n", str2);
	printf("str3 = %s\n", str3);
	ft_bzero(str3, 8);
	printf("str3 = %s\n", str3);
	bzero(str3, 5);
	printf("str3 bzero = %s\n", str3);
	return (0);
} */

/*int	main(void) //ft_calloc
{
	char *dest1;
	char *dest2;
    dest1 = ft_calloc(26, 1);
    printf("%p\n", dest1);
	free (dest1);
	dest2 = calloc(26, 1);
    printf("%p\n", dest2);
	free (dest2);
}*/

/*int	main(void) //ft_isalnum
{
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", isalnum('4'));
	printf("%d\n", ft_isalnum('7'));
	printf("%d\n", isalnum('7'));
	printf("%d\n", ft_isalnum('F'));
	printf("%d\n", isalnum('F'));
	printf("%d\n", ft_isalnum('y'));
	printf("%d\n", isalnum('y'));
	printf("%d\n", ft_isalnum('~'));
	printf("%d\n", isalnum('~'));
	printf("%d\n", ft_isalnum('!'));
	printf("%d\n", isalnum('!'));
	return (0);
}*/

/*int	main(void) //ft_isalpha
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", isalpha('a'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", isalpha('z'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", isalpha('Z'));
	printf("%d\n", ft_isalpha('7'));
	printf("%d\n", isalpha('7'));
	printf("%d\n", ft_isalpha('!'));
	printf("%d\n", isalpha('!'));
	return (0);
}*/

/*int	main(void) //ft_isascii
{
	printf("%d\n", ft_isascii('7'));
	printf("%d\n", isascii('7'));
	printf("%d\n", ft_isascii('z'));
	printf("%d\n", isascii('z'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", isascii('A'));
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", isascii('\n'));
	printf("%d\n", ft_isascii('~'));
	printf("%d\n", isascii('~'));
	printf("%d\n", ft_isascii('!'));
	printf("%d\n", isascii('!'));
	return (0);
}*/

/*int	main(void) //ft_isdigit

{
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", isdigit('0'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", isdigit('9'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", isdigit('A'));
	printf("%d\n", ft_isdigit('z'));
	printf("%d\n", isdigit('z'));
	printf("%d\n", ft_isdigit('~'));
	printf("%d\n", isdigit('~'));
	printf("%d\n", ft_isdigit('!'));
	printf("%d\n", isdigit('!'));
	return (0);
}*/

/*int	main(void) //ft_isprint
{
	int	c1 = 'H';
	int	c2 = 7;
	int	c3 = '9';
	int	c4 = 127;
	int	c5 = '~';

	printf("%d\n", ft_isprint(c1));
	printf("%d\n", isprint(c1));
	printf("%d\n", ft_isprint(c2));
	printf("%d\n", isprint(c2));
	printf("%d\n", ft_isprint(c3));
	printf("%d\n", isprint(c3));
	printf("%d\n", ft_isprint(c4));
	printf("%d\n", isprint(c4));
	printf("%d\n", ft_isprint(c5));
	printf("%d\n", isprint(c5));
	return (0);
}*/

/* int	main(void) //ft_itoa
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(-1245));
	printf("%s\n", ft_itoa(-45));
	printf("%s\n", ft_itoa(40985));
	return(0);
} */

/*int	main(void)//ft_lstnew
{
	t_list	*lst;
	char	str[] = "Halloween is the new Christmas";

	lst = ft_lstnew((void *)str);
	printf("%s\n", lst->content);
	//t_list	*lst2;
	//int		i;
	//i = 42;
	//lst2 = ft_lstnew((void *)i);
	//printf("%s\n", lst2->content);
	return (0);
}*/

/*int	main(void) //ft_memchr
{
	char	chaine1[50] = "pumpkin";
	char	chaine2[50] = "Epic Fail";
	char	chaine3[50] = "Halloween is the new Christmas";
	char	chaine4[50] = "Icewindale";
	char	chaine5[50] = "Crit!";

	printf("%p\n", ft_memchr(chaine1, 'p', 5));
	printf("%p\n", memchr(chaine1, 'p', 5));
	printf("%p\n", ft_memchr(chaine2, 'i', 3));
	printf("%p\n", memchr(chaine2, 'i', 3));
	printf("%p\n", ft_memchr(chaine3, 'w', 20));
	printf("%p\n", memchr(chaine3, 'w', 20));
	printf("%p\n", ft_memchr(chaine4, '\0', 15));
	printf("%p\n", memchr(chaine4, '\0', 15));
	printf("%p\n", ft_memchr(chaine5, '?', 6));
	printf("%p\n", memchr(chaine5, '?', 6));
	return (0);
}*/

/*int	main(void) //ft_memcmp
{
	char	s11[50] = "123456";
	char	s12[50] = "Pumpkin";
	char	s13[50] = "Halloween";
	char	s14[50] = "";
    char	s15[50] = "Let's roll initiative";
	char	s21[50] = "Pump";
	char	s22[50] = "13456";
	char	s23[50] = "Halloween";
	char	s24[50] = "";
    char	s25[50] = "Let's play initiative";

	printf("%d\n", ft_memcmp(s11, s21, 6));
	printf("%d\n", memcmp(s11, s21, 6));
	printf("%d\n", ft_memcmp(s12, s22, 7));
	printf("%d\n", memcmp(s12, s22, 7));
	printf("%d\n", ft_memcmp(s13, s23, 5));
	printf("%d\n", memcmp(s13, s23, 5));
	printf("%d\n", ft_memcmp(s14, s24, 0));
	printf("%d\n", memcmp(s14, s24, 0));
    printf("%d\n", ft_memcmp(s15, s25, 15));
	printf("%d\n", memcmp(s15, s25, 15));
	return (0);
}*/

/*int	main(void) //ft_memcpy
{
	char	src1[9] = "Halloween";
	char	src2[14] = "Trick or treat";
	char	src3[50] = "";
	char	src4[50] = "Beholder";
	char	dest1[7] = "Pumpkin";
	char	dest2[50] = "Halloween is the new Christmas";
	char	dest3[50] = "Pumpkin";
	char	dest4[50] = "";

	printf("%s\n", ft_memcpy(dest1, src1, 4));
	printf("%s\n", memcpy(dest1, src1, 4));
	printf("%s\n", ft_memcpy(dest2, src2, 10));
	printf("%s\n", memcpy(dest2, src2, 10));
	printf("%s\n", ft_memcpy(dest3, src3, 15));
	printf("%s\n", memcpy(dest3, src3, 15));
	printf("%s\n", ft_memcpy(dest4, src4, 3));
	printf("%s\n", memcpy(dest4, src4, 3));
	return (0);
}*/

/*int	main(void) //ft_memmove
{
	//char	src1[20] = "Halloween";
	char	src2[14] = "Trick or treat";
	char	src3[10] = "";
	char	src4[50] = "Beholder";
	//char	dest1[7] = "Pumpkin";
	//char	dest2[50] = "Halloween is the new Christmas";
	char	dest3[7] = "Pumpkin";
	char	dest4[50] = "";

	printf("%s\n", src1);
	printf("%s\n", ft_memmove(src1 + 2, src1, 9));
	printf("%s\n", memmove(src1 + 2, src1, 9));
	printf("%s\n", src2);
	printf("%s\n", ft_memmove(src2 + 5, src2, 7));
	printf("%s\n", memmove(src2 + 5, src2, 7));
	printf("%s\n", ft_memmove(dest3, src3, 5));
	printf("%s\n", memmove(dest3, src3, 5));
	printf("%s\n", ft_memmove(dest4, src4, 3));
	printf("%s\n", memmove(dest4, src4, 3));
	return (0);
}*/

/* int	main(void) //ft_memset
{
	char	buffer1[9] = "Halloween";
	char	buffer2[14] = "Trick or treat";
	char	buffer3[7] = "Pumpkin";
	char	buffer4[50] = "Halloween is the new Christmas";

	ft_memset(buffer1, 'A', 4);
	puts(buffer1);
	memset(buffer1, 'A', 4);
	puts(buffer1);
	ft_memset(buffer2, 'w', 10);
	puts(buffer2);
	memset(buffer2, 'w', 10);
	puts(buffer2);
	ft_memset(buffer3, '5', 1);
	puts(buffer3);
	memset(buffer3, '5', 1);
	puts(buffer3);
	ft_memset(buffer4, '~', 3);
	puts(buffer4);
	memset(buffer4, '~', 3);
	puts(buffer4);
	return (0);
} */

/*int	main(void) //ft_putchar_fd
{
	ft_putchar_fd('Z', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/

/*int	main(void) //ft_putendl_fd
{
	ft_putendl_fd("Halloween is the new Christmas", 1);
	return (0);
}*/

/* int	main(void) //ft_putnbr_fd
{
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(7, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-6, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(15, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-89, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(124567, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-142267, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	return (0);
} */

/*int	main(void) //ft_putstr_fd
{
	ft_putstr_fd("Halloween is the new Christmas", 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/

/*int	main(void) //ft_split
{
	unsigned int	i;
	char			**tab;
	
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet", ' ');
	if (!tab[0])
		ft_putendl_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
	return (0);
}*/

/*int	main(void) //ft_strchr
{
	char	chaine1[7] = "Pumpkin";
	char	chaine2[9] = "Epic Fail";
	char	chaine3[30] = "Halloween is the new Christmas";
	char	chaine4[20] = "Icewindale";
	char	chaine5[10] = "Crit!";

	printf("%p\n", ft_strchr(chaine1, 'k'));
	printf("%p\n", strchr(chaine1, 'k'));
	printf("%p\n", ft_strchr(chaine2, ' '));
	printf("%p\n", strchr(chaine2, ' '));
	printf("%p\n", ft_strchr(chaine3, 'y'));
	printf("%p\n", strchr(chaine3, 'y'));
	printf("%p\n", ft_strchr(chaine4, '\0'));
	printf("%s\n", ft_strchr(chaine4, '\0'));
	printf("%p\n", strchr(chaine4, '\0'));
	printf("%s\n", strrchr(chaine4, '\0'));
	printf("%p\n", ft_strchr(chaine5, '!'));
	printf("%p\n", strchr(chaine5, '!'));

	return (0);
}*/

/* int	main(void) //ft_strdup
{
    char *src;
    char *dest1;
	char *dest2;

    src = "Test de la fonction strdup";
    dest1 = ft_strdup(src);
    printf("%s\n", dest1);
	free (dest1);
	dest2 = strdup(src);
    printf("%s\n", dest2);
	free (dest2);
} */

/* int	main(void) //ft_striteri -- pas correct -
{
	char str[] = "Let's roll initiative";

	ft_strlcpy(str, "hello my name is", 17);
	printf("%s\n", str);
	ft_striteri(str, ft_toupper);
	printf("%s\n", str);
	if (strcmp("HELLO MY NAME IS", str) != 0)
		ft_putendl_fd("ERROR: ft_striteri failed.", 1);
	ft_striteri(NULL, ft_toupper);
	printf("%s\n", str);
	ft_putendl_fd("OK: ft_striteri passed.", 1);
	ft_putendl_fd("---------", 1);
} */

/*int	main(void) //ft_strjoin
{
	printf("%s\n", ft_strjoin("Let's roll", " initiative !"));
	printf("%s\n", ft_strjoin("", " initiative !"));
	printf("%s\n", ft_strjoin("Let's roll", ""));
	printf("%s\n", ft_strjoin("Let's roll", ""));
	return (0);
}*/

/*int	main(void) //ft_strlcat -- pas correct
{
	char	src1[7] = "Pumpkin";
	char	src2[9] = "Epic Fail";
	char	src3[20] = "is the new Christmas";
	char	src4[0] = "";
	char	src5[11] = "No tomorrow";
	char	src6[7] = "Spooky!";
	char	dest1[50] = "Halloween and ";
	char	dest2[50] = "Natural 20 and ";
	char	dest3[50] = "Halloween ";
	char	dest4[8] = "Beholder";
	char	dest5[3] = "";
	char	dest6[50] = "Halloween is ";

	printf("%zu\n", ft_strlcat(dest1, src1, 22));
	printf("%s\n", dest1);
	printf("%lu\n", strlcat(dest1, src1, 22));
	printf("%s\n", dest1);
	printf("%zu\n", ft_strlcat(dest2, src2, 5));
	printf("%s\n", dest2);
	printf("%lu\n", strlcat(dest2, src2, 5));
	printf("%s\n", dest2);
	printf("%zu\n", ft_strlcat(dest3, src3, 30));
	printf("%s\n", dest3);
	printf("%lu\n", strlcat(dest3, src3, 30));
	printf("%s\n", dest3);
	printf("%zu\n", ft_strlcat(dest4, src4, 3));
	printf("%s\n", dest4);
	printf("%lu\n", strlcat(dest4, src4, 3));
	printf("%s\n", dest4);
	printf("%zu\n", ft_strlcat(dest5, src5, 3));
	printf("%s\n", dest5);
	printf("%lu\n", strlcat(dest5, src5, 3));
	printf("%s\n", dest5);
	printf("%zu\n", ft_strlcat(dest6, src6, 0));
	printf("%s\n", dest6);
	printf("%lu\n", strlcat(dest6, src6, 0));
	printf("%s\n", dest6);
	return (0);
}*/

int	main(void) //ft_strlcpy
{
	char	src1[9] = "Halloween";
	char	src2[9] = "Epic Fail";
	char	src3[0] = "";
	char	src4[8] = "Beholder";
	char	dest1[7] = "Pumpkin";
	char	dest2[30] = "Halloween is the new Christmas";
	char	dest3[7] = "Pumpkin";
	char	dest4[0] = "";

	printf("%zu\n", ft_strlcpy(dest1, src1, 7));
	printf("%lu\n", strlcpy(dest1, src1, 7));
	printf("%zu\n", ft_strlcpy(dest2, src2, 5));
	printf("%lu\n", strlcpy(dest2, src2, 5));
	printf("%zu\n", ft_strlcpy(dest3, src3, 15));
	//printf("%lu\n", strlcpy(dest3, src3, 15));
	printf("%zu\n", ft_strlcpy(dest4, src4, 3));
	//printf("%lu\n", strlcpy(dest4, src4, 3));
	return (0);
}

/*int	main(void) //ft_strlen
{
	char	*chaine1;
	char	*chaine2;
	char	*chaine3;
	char	*chaine4;

	chaine1 = "Halloween";
	chaine2 = "Epic Fail!";
	chaine3 = "     Xanathar";
	chaine4 = "";
	printf("%zu\n", ft_strlen(chaine1));
	printf("%zu\n", strlen(chaine1));
	printf("%zu\n", ft_strlen(chaine2));
	printf("%zu\n", strlen(chaine2));
	printf("%zu\n", ft_strlen(chaine3));
	printf("%zu\n", strlen(chaine3));
	printf("%zu\n", ft_strlen(chaine4));
	printf("%zu\n", strlen(chaine4));
	return (0);
}*/

/*//ft_strmapi
char f(unsigned int i, char c)
{
	i = 0;
	
	char str;
	str = c + 2;
	return (str);
}
int	main(void)
{
	char str1[] = "AbcDe";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}*/

/*int	main(void) //ft_strncmp
{
	char	s11[50] = "Etheric";
	char	s12[50] = "123456";
	char	s13[50] = "";
	char	s14[50] = "Beholder";
	char	s21[50] = "Eternals";
	char	s22[50] = "13456";
	char	s23[50] = "Pumpkin";
	char	s24[50] = "";

	printf("%d\n", ft_strncmp(s11, s21, 2));
	printf("%d\n", strncmp(s11, s21, 2));
	printf("%d\n", ft_strncmp(s12, s22, 0));
	printf("%d\n", strncmp(s12, s22, 0));
	printf("%d\n", ft_strncmp(s13, s23, 5));
	printf("%d\n", strncmp(s13, s23, 5));
	printf("%d\n", ft_strncmp(s14, s24, 4));
	printf("%d\n", strncmp(s14, s24, 4));
	return (0);
}*/

/*int	main(void) //ft_strnstr
{
    char haystack[] = "This is the way";
    char needle1[] = "";
    char needle2[] = "Needle";
    char needle3[] = "the";
	char needle4[] = "the";

    printf("%p\n", ft_strnstr(haystack, needle1, 0));
	printf("%s\n", ft_strnstr(haystack, needle1, 0));
	printf("%p\n", strnstr(haystack, needle1, 0));
	printf("%s\n", strnstr(haystack, needle1, 0));
	printf("%p\n", ft_strnstr(haystack, needle2, 15));
	printf("%s\n", ft_strnstr(haystack, needle2, 15));
	printf("%p\n", strnstr(haystack, needle2, 15));
	printf("%s\n", strnstr(haystack, needle2, 15));
    printf("%p\n", ft_strnstr(haystack, needle3, 10));
	printf("%s\n", ft_strnstr(haystack, needle3, 10));
	printf("%p\n", strnstr(haystack, needle3, 10));
	printf("%s\n", strnstr(haystack, needle3, 10));
	printf("%p\n", ft_strnstr(haystack, needle4, 15));
	printf("%s\n", ft_strnstr(haystack, needle4, 15));
	printf("%p\n", strnstr(haystack, needle4, 15));
	printf("%s\n", strnstr(haystack, needle4, 15));
    return(0);
}*/

/*int	main(void) //ft_strrchr
{
	char	chaine1[50] = "pumpkin";
	char	chaine2[50] = "Epic Fail";
	char	chaine3[50] = "Halloween is the new Christmas";
	char	chaine4[50] = "Icewindale";
	char	chaine5[50] = "Crit!";

	printf("%p\n", ft_strrchr(chaine1, 'p'));
	printf("%s\n", ft_strrchr(chaine1, 'p'));
	printf("%p\n", strrchr(chaine1, 'p'));
	printf("%s\n", strrchr(chaine1, 'p'));
	printf("%p\n", ft_strrchr(chaine2, 'i'));
	printf("%s\n", ft_strrchr(chaine2, 'i'));
	printf("%p\n", strrchr(chaine2, 'i'));
	printf("%s\n", strrchr(chaine2, 'i'));
	printf("%p\n", ft_strrchr(chaine3, 'w'));
	printf("%s\n", ft_strrchr(chaine3, 'w'));
	printf("%p\n", strrchr(chaine3, 'w'));
	printf("%s\n", strrchr(chaine3, 'w'));
	printf("%p\n", ft_strrchr(chaine4, '\0'));
	printf("%s\n", ft_strrchr(chaine4, '\0'));
	printf("%p\n", strrchr(chaine4, '\0'));
	printf("%s\n", strrchr(chaine4, '\0'));
	printf("%p\n", ft_strrchr(chaine5, '?'));
	printf("%s\n", ft_strrchr(chaine5, '?'));
	printf("%p\n", strrchr(chaine5, '?'));
	printf("%p\n", strrchr(chaine5, '?'));
	return (0);
}*/

/*int	main(void) //ft_strtrim
{
	printf("%s\n", ft_strtrim("iiiLet'splay!iii", "i"));
	printf("%s\n", ft_strtrim("", ""));
	printf("%s\n", ft_strtrim("ooooLet's rolloooo", ""));
	//printf("%s\n", ft_strtrim("Let's roll", ""));
	return (0);
}*/

/* int	main(void) //ft_substr
{
    char	chaine[50] = "Let's play initiative";

	printf("%s\n", ft_substr(chaine, 0, 10));
	printf("%s\n", ft_substr(chaine, 6, 4));
	printf("%s\n", ft_substr(chaine, 11, 10));
	printf("%s\n", ft_substr(chaine, 55, 10));
	printf("%s\n", ft_substr(chaine, 3, 25));
	//printf("%s\n", ft_substr("hola", 0, 18446744073709551615));
	return (0);
} */

/*int	main(void) //ft_tolower
{
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", tolower('a'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", tolower('z'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", tolower('Z'));
	printf("%c\n", ft_tolower('7'));
	printf("%c\n", tolower('7'));
	printf("%c\n", ft_tolower('!'));
	printf("%c\n", tolower('!'));
	return (0);
}*/

/*int	main(void) //toupper
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper('a'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", toupper('z'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", toupper('A'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", toupper('Z'));
	printf("%c\n", ft_toupper('7'));
	printf("%c\n", toupper('7'));
	printf("%c\n", ft_toupper('!'));
	printf("%c\n", toupper('!'));
	return (0);
}*/
