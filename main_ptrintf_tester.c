/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ptrintf_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <molabhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:15:57 by molabhai          #+#    #+#             */
/*   Updated: 2019/11/14 05:14:46 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

void	print_l(char *l)
{
	int i;

	i = 0;
	while (l[i] != '\0')
	{
		write(1, &l[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(void)
{

	char *s = "My ft_printf";
	char c, x;
	int number = -2147483648;
	//unsigned int nmbr;
	int hexa = 35698;
	int hexa1 = -35698;
	unsigned int num = 4294967295;
	int nam = 2147483647; 
	FILE *file = fopen("printf_tester.txt", "w");

	c = 'M';
	x = 'L';

	fprintf(file, "My ft_printf can write a simple text\n");
	ft_printf("My ft_printf can write a simple text\n");

	fprintf(file, "%cy ft_printf can write a simple text with char\n", c);
	ft_printf("%cy ft_printf can write a simple text with char\n", c);

	fprintf(file, "%s can write a simple text with string\n", s);
	ft_printf("%s can write a simple text with string\n", s);

	fprintf(file, "%s can write a simple text with string and char %c\n", s, x);	
	ft_printf("%s can write a simple text with string and char %c\n", s, x);

	fprintf(file, "%d can print a simple number\n", number);
	ft_printf("%d can print a simple number\n", number);

	fprintf(file, "%s can write a simple text with string and %c and %d\n", s, c, number);
	ft_printf("%s can write a simple text with string and %c and %d\n", s, c, number);

	fprintf(file, "%s can write a simple text with string and %c and %d and [%p]\n", s, c, number, s);
	ft_printf("%s can write a simple text with string and %c and %d and [%p]\n", s, c, number, s);

	fprintf(file, "%s can write a simple text with string and %c and %d and [%p] also %x\n", s, c, number, s, hexa);
	ft_printf("%s can write a simple text with string and %c and %d and [%p] also %x\n", s, c, number, s, hexa);

	fprintf(file, "%s can write a simple text with string and %c and %d and [%p] also %x can he make %x\n", s, c, number, s, hexa, hexa1);
	ft_printf("%s can write a simple text with string and %c and %d and [%p] also %x can he make %x\n", s, c, number, s, hexa, hexa1);
	
	fprintf(file, "%s can write a simple text with string and %c and %d and [%p] also %x can he make %x %X %X unsigned %u signed %i\n", s, c, number, s, hexa, hexa1, hexa, hexa1, num, nam);
	ft_printf("%s can write a simple text with string and %c and %d and [%p] also %x can he make %x %X %X unsigned %u signed %i\n", s, c, number, s, hexa, hexa1, hexa, hexa1, num, nam);

	fprintf(file, "test with flags [0] %010d\n", hexa);
	ft_printf("test with flags [0] %010d\n", hexa);

	fprintf(file, "test with flags [0] %0100d\n", hexa);
	ft_printf("test with flags [0] %0100d\n", hexa);

	fprintf(file, "test with flags [0] %01000d\n", hexa);
	ft_printf("test with flags [0] %01000d\n", hexa);

	fprintf(file, "test with flags [0] %06d\n", hexa);
	ft_printf("test with flags [0] %06d\n", hexa);

	fprintf(file, "test with flags [0] %05d\n", hexa);
	ft_printf("test with flags [0] %05d\n", hexa);

	fprintf(file, "test with flags [0] %05d\n", hexa);
	ft_printf("test with flags [0] %05d\n", hexa);

	fprintf(file, "test with flags [0] %0d with signed int %010d\n", hexa, hexa1);
	ft_printf("test with flags [0] %0d with signed int %010d\n", hexa, hexa1);
		
	fprintf(file, "test with flags [0] %010d with unsigned int %010u\n", hexa, num);
	ft_printf("test with flags [0] %010d with unsigned int %010u\n", hexa, num);

	fprintf(file, "test with flags [0] %02147483648d with unsigned int %04294967296u\n", nam, num);
	ft_printf("test with flags [0] %02147483648d with unsigned int %04294967296u\n", nam, num);

	fprintf(file, "test with flags [-] signed int %-d\n", hexa);
	ft_printf("test with flags [-] signed int %-d\n", hexa);

	fprintf(file, "test with flags [-] signed int %-dd\n", hexa1);
	ft_printf("test with flags [-] signed int %-dd\n", hexa1);

	fprintf(file, "test with flags [-] signed int %-5dd %-5dd\n", hexa, hexa1);
	ft_printf("test with flags [-] signed int %-5dd %-5dd\n", hexa, hexa1);
	
	fprintf(file, "test with flags [-] unsigned int %-u\n", nam);
	ft_printf("test with flags [-] unsigned int %-u\n", nam);

	fprintf(file, "test with flags [-] unsigned int %-10u\n", nam);
	ft_printf("test with flags [-] unsigned int %-10u\n", nam);

	fprintf(file, "test with flags [-] string %-s\n", s);
	ft_printf("test with flags [-] string %-s\n", s);
	
	fprintf(file, "test with flags [-] string %-ss\n", s);
	ft_printf("test with flags [-] string %-ss\n", s);

	fprintf(file, "test with flags [-] string %-1ss\n", s);
	ft_printf("test with flags [-] string %-1ss\n", s);

	fprintf(file, "test with flags [-] string %-10ss\n", s);
	ft_printf("test with flags [-] string %-10ss\n", s);

	fprintf(file, "test with flags [-] string %-s10s\n", s);
	ft_printf("test with flags [-] string %-s10s\n", s);

	fprintf(file, "test with flags [-] char %-c\n", c);
	ft_printf("test with flags [-] char %-c\n", c);

	fprintf(file, "test with flags [-] char %-cc\n", c);
	ft_printf("test with flags [-] char %-cc\n", c);
	
	fprintf(file, "test with flags [-] char %-1cc\n", c);
	ft_printf("test with flags [-] char %-1cc\n", c);

	fprintf(file, "test with flags [-] char %-10c\n", c);
	ft_printf("test with flags [-] char %-10c\n", c);

	fprintf(file, "test with flags [-] char %-10cc\n", c);
	ft_printf("test with flags [-] char %-10cc\n", c);

	fprintf(file, "test with flags [-] char %-p\n", s);
	ft_printf("test with flags [-] char %-p\n", s);	
	
	fprintf(file, "test with flags [-] char %-1p\n", s);
	ft_printf("test with flags [-] char %-1p\n", s);

	fprintf(file, "test with flags [-] char %-10p\n", s);
	ft_printf("test with flags [-] char %-10p\n", s);	
	
	fprintf(file, "test with flags [-] char %-10pp\n", s);
	ft_printf("test with flags [-] char %-10pp\n", s);	

	fprintf(file, "test with flags [-] char %-pp\n", s);
	ft_printf("test with flags [-] char %-pp\n", s);

	fprintf(file, "test with flags [-] unsigned int %-uu\n", num);
	ft_printf("test with flags [-] unsigned int %-uu\n", num);

	fprintf(file, "test with flags [-] unsigned int %-uu\n", num);
	ft_printf("test with flags [-] unsigned int %-uu\n", num);

	fprintf(file, "test with flags [-] unsigned int %-1u\n", num);
	ft_printf("test with flags [-] unsigned int %-1u\n", num);
	
	fprintf(file, "test with flags [-] signed int %-d signed int2 %-d unsigned int %-u string %-s\n", hexa, hexa1, nam, s);
	ft_printf("test with flags [-] signed int %-d signed int2 %-d unsigned int %-u string %-s\n", hexa, hexa1, nam, s);
	
	fprintf(file, "test with flags [-] signed int %-dd signed int2 %-dd unsigned int %-uu string %-ss\n", hexa, hexa1, nam, s);
	ft_printf("test with flags [-] signed int %-dd signed int2 %-dd unsigned int %-uu string %-ss\n", hexa, hexa1, nam, s);
		
	fprintf(file, "test with flags [-] signed int %-1dd signed int2 %-1dd unsigned int %-1uu string %-1ss\n", hexa, hexa1, nam, s);
	ft_printf("test with flags [-] signed int %-1dd signed int2 %-1dd unsigned int %-1uu string %-1ss\n", hexa, hexa1, nam, s);
	
	fprintf(file, "test with flags [-] signed int %-5dd signed int2 %-5dd unsigned int %-5uu string %-5ss\n", hexa, hexa1, nam, s);
	ft_printf("test with flags [-] signed int %-5dd signed int2 %-5dd unsigned int %-5uu string %-5ss\n", hexa, hexa1, nam, s);
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss\n", hexa, hexa1, nam, s);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss\n", hexa, hexa1, nam, s);
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-c%-10c\n", hexa, hexa1, nam, s, c, c);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-c%-10c\n", hexa, hexa1, nam, s, c, c);
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc\n", hexa, hexa1, nam, s, c, c, c);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc\n", hexa, hexa1, nam, s, c, c, c);
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc %-p\n", hexa, hexa1, nam, s, c, c, c, s);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc %-p\n", hexa, hexa1, nam, s, c, c, c, s);
		
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc %-pp\n", hexa, hexa1, nam, s, c, c, c, s);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc %-pp\n", hexa, hexa1, nam, s, c, c, c, s);
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc%-1pp\n", hexa, hexa1, nam, s, c, c, c, s);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc%-1pp\n", hexa, hexa1, nam, s, c, c, c, s);
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc%-10pp\n", hexa, hexa1, nam, s, c, c, c, s);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc%-10pp\n", hexa, hexa1, nam, s, c, c, c, s);
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc%-20pp\n", hexa, hexa1, nam, s, c, c, c, s);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uu string %-20ss%-10c%cc%-10cc%-20pp\n", hexa, hexa1, nam, s, c, c, c, s);
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uuu string %-20ss%-10c%cc%-10c c%-100pp%p\n", hexa, hexa1, nam, s, c, c, c, s, s);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uuu string %-20ss%-10c%cc%-10c c%-100pp%p\n", hexa, hexa1, nam, s, c, c, c, s, s);

	fprintf(file, "test with flags [*] and [0] %0*d\n", 0, hexa);
	ft_printf("test with flags [*] and [0] %0*d\n", 0, hexa);

	fprintf(file, "test with flags [*] and [0] %0*d\n", 1, hexa);
	ft_printf("test with flags [*] and [0] %0*d\n", 1, hexa);
	
	fprintf(file, "test with flags [*] and [0] %0*d\n", 5, hexa);
	ft_printf("test with flags [*] and [0] %0*d\n", 5, hexa);

	fprintf(file, "test with flags [*] and [0] %0*dd\n", 5, hexa);
	ft_printf("test with flags [*] and [0] %0*dd\n", 5, hexa);

	fprintf(file, "test with flags [*] and [0] %0*dd%0*d\n", 10, hexa, 1, hexa1);
	ft_printf("test with flags [*] and [0] %0*dd%0*d\n", 10, hexa, 1, hexa1);

	fprintf(file, "test with flags [*] and [0] %0*u\n", 1, nam);
	ft_printf("test with flags [*] and [0] %0*u\n", 1, nam);
	
	fprintf(file, "test with flags [*] and [0] %0*u\n", 10, nam);
	ft_printf("test with flags [*] and [0] %0*u\n", 10, nam);
	
	fprintf(file, "test with flags [*] and [0] %0*dd\n", 200, nam);
	ft_printf("test with flags [*] and [0] %0*dd\n", 200, nam);

	fprintf(file, "test with flags [*] and [0] %0*dd\n", 1, hexa1);
	ft_printf("test with flags [*] and [0] %0*dd\n", 1, hexa1);

	fprintf(file, "test with flags [*] and [0] %0*dd\n", 10, hexa1);
	ft_printf("test with flags [*] and [0] %0*dd\n", 10, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*dd\n", 100, hexa1);
	ft_printf("test with flags [*] and [0] %0*dd\n", 100, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*dd\n", 200, hexa1);
	ft_printf("test with flags [*] and [0] %0*dd\n", 200, hexa1);

	fprintf(file, "test with flags [*] and [0] %0*dd%010d\n", 10, hexa, hexa1);
	ft_printf("test with flags [*] and [0] %0*dd%010d\n", 10, hexa, hexa1);

	return (0);
}