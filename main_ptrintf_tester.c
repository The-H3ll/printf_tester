/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ptrintf_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <molabhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:15:57 by molabhai          #+#    #+#             */
/*   Updated: 2019/11/15 19:42:08 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

	fprintf(file, "test with flags [0] %0x\n", hexa);
	ft_printf("test with flags [0] %0x\n", hexa);
	
	fprintf(file, "test with flags [0] %01x\n", hexa);
	ft_printf("test with flags [0] %01x\n", hexa);

	fprintf(file, "test with flags [0] %05xx\n", hexa);
	ft_printf("test with flags [0] %05xx\n", hexa);

	fprintf(file, "test with flags [0] %010x\n", hexa);
	ft_printf("test with flags [0] %010x\n", hexa);
	
	fprintf(file, "test with flags [0] %010xx\n", nam);
	ft_printf("test with flags [0] %010xx\n", nam);
	
	fprintf(file, "test with flags [0] %010xxx\n", num);
	ft_printf("test with flags [0] %010xxx\n", num);
	
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

	fprintf(file, "test with flags [-] unsigned int %-1x\n", hexa);
	ft_printf("test with flags [-] unsigned int %-1x\n", hexa);

	fprintf(file, "test with flags [-] hexadecimal %-5x\n", hexa);
	ft_printf("test with flags [-] hexadecimal %-5x\n", hexa);

	fprintf(file, "test with flags [-] hexadecimal %-10xx\n", num);
	ft_printf("test with flags [-] hexadecimal %-10xx\n", num);

	fprintf(file, "test with flags [-] hexadecimal %-4294967295xx\n", num);
	ft_printf("test with flags [-] hexadecimal %-4294967295xx\n", num);

	fprintf(file, "test with flags [-] hexadecimal %-4294967295xx\n", nam);
	ft_printf("test with flags [-] hexadecimal %-4294967295xx\n", nam);
	
	fprintf(file, "test with flags [-] hexadecimal %02147483648xxx\n", num);
	ft_printf("test with flags [-] hexadecimal %02147483648xxx\n", num);
	
	fprintf(file, "test with flags [-] hexadecimal %02147483648x%0214748xx\n", num, number);
	ft_printf("test with flags [-] hexadecimal %02147483648x%0214748xx\n", num, number);
	
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
	
	fprintf(file, "test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uuu string %-20ss%-10c%cc%-10ccc%-100pp%p\n", hexa, hexa1, nam, s, c, c, c, s, s);
	ft_printf("test with flags [-] signed int %-10dd signed int2 %-8dd unsigned int %-uuu string %-20ss%-10c%cc%-10ccc%-100pp%p\n", hexa, hexa1, nam, s, c, c, c, s, s);

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

	fprintf(file, "test with flags [*] and [0] %0*dd%0*d\n", 10, hexa, 10, hexa1);
	ft_printf("test with flags [*] and [0] %0*dd%0*d\n", 10, hexa, 10, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*i%010i\n", 10, hexa, hexa1);
	ft_printf("test with flags [*] and [0] %0*i%010i\n", 10, hexa, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*u%010u\n", 10, num, hexa1);
	ft_printf("test with flags [*] and [0] %0*u%010u\n", 10, num, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*uu%010uu\n", 10, num, hexa1);
	ft_printf("test with flags [*] and [0] %0*uu%010uu\n", 10, num, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*uuu%010uuu\n", 10, num, hexa1);
	ft_printf("test with flags [*] and [0] %0*uuu%010uuu\n", 10, num, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*x%010x\n", 10, num, hexa1);
	ft_printf("test with flags [*] and [0] %0*x%010x\n", 10, num, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*x%0100xx\n", 100, num, hexa1);
	ft_printf("test with flags [*] and [0] %0*x%0100xx\n", 100, num, hexa1);

	fprintf(file, "test with flags [*] and [0] %0*X%010XX\n", 10, num, hexa1);
	ft_printf("test with flags [*] and [0] %0*X%010XX\n", 10, num, hexa1);
	
	fprintf(file, "test with flags [*] and [0] %0*X%010XX %-10x\n", 10, num, hexa1, hexa);
	ft_printf("test with flags [*] and [0] %0*X%010XX %-10x\n", 10, num, hexa1, hexa);
	
	fprintf(file, "test with flags [*] and [-] signed int %-*d\n", 0, hexa);
	ft_printf("test with flags [*] and [-] signed int %-*d\n", 0, hexa);

	fprintf(file, "test with flags [*] and [-] signed int %-*dd\n", 6, hexa);
	ft_printf("test with flags [*] and [-] signed int %-*dd\n", 6, hexa);	
	
	fprintf(file, "test with flags [*] and [-] signed int %-*dd\n", 10, hexa);
	ft_printf("test with flags [*] and [-] signed int %-*dd\n", 10, hexa);

	fprintf(file, "test with flags [*] and [-] unsigned int %-*udu\n", 0, num);
	ft_printf("test with flags [*] and [-] unsigned int %-*udu\n", 0, num);	

	fprintf(file, "test with flags [*] and [-] unsigned int %-*udu\n", 9, num);
	ft_printf("test with flags [*] and [-] unsigned int %-*udu\n", 9, num);	

	fprintf(file, "test with flags [*] and [-] unsigned int %-*udu\n", 10, num);
	ft_printf("test with flags [*] and [-] unsigned int %-*udu\n", 10, num);

	fprintf(file, "test with flags [*] and [-] unsigned int %-*ud%u\n", 10, num, num);
	ft_printf("test with flags [*] and [-] unsigned int %-*ud%u\n", 10, num, num);

	fprintf(file, "test with flags [*] and [-] unsigned int %-*ud%ud\n", 10, num, num);
	ft_printf("test with flags [*] and [-] unsigned int %-*ud%ud\n", 10, num, num);
	
	fprintf(file, "test with flags [*] and [-] string %-*s\n", 0, s);
	ft_printf("test with flags [*] and [-] string %-*s\n", 0, s);
	
	fprintf(file, "test with flags [*] and [-] string %-*ss\n", 1, s);
	ft_printf("test with flags [*] and [-] string %-*ss\n", 1, s);
	
	fprintf(file, "test with flags [*] and [-] string %-*ss\n", 11, s);
	ft_printf("test with flags [*] and [-] string %-*ss\n", 11, s);

	fprintf(file, "test with flags [*] and [-] string %-*s%s\n", 12, s, s);
	ft_printf("test with flags [*] and [-] string %-*s%s\n", 12, s, s);
	
	fprintf(file, "test with flags [*] and [-] string %-*s%-*s\n", 12, s, 13,s);
	ft_printf("test with flags [*] and [-] string %-*s%-*s\n", 12, s, 13,s);

	fprintf(file, "test with flags [*] and [-] string %-*s%-*s\n", 12, s, 13, s);
	ft_printf("test with flags [*] and [-] string %-*s%-*s\n", 12, s, 13, s);

	fprintf(file, "test with flags [*] and [-] char %-*c\n", 0, x);
	ft_printf("test with flags [*] and [-] char %-*c\n", 0, x);

	fprintf(file, "test with flags [*] and [-] char %-*cc\n", 1, x);
	ft_printf("test with flags [*] and [-] char %-*cc\n", 1, x);

	fprintf(file, "test with flags [*] and [-] char %-*c c\n", 10, x);
	ft_printf("test with flags [*] and [-] char %-*c c\n", 10, x);

	fprintf(file, "test with flags [*] and [-] char %-*c c %-*c\n", 10, x, 1, c);
	ft_printf("test with flags [*] and [-] char %-*c c %-*c\n", 10, x, 1, c);

	fprintf(file, "test with flags [*] and [-] signed int %-*d\n", 0, hexa1);
	ft_printf("test with flags [*] and [-] signed int %-*d\n", 0, hexa1);

	fprintf(file, "test with flags [*] and [-] signed int %-*dd\n", 6, hexa1);
	ft_printf("test with flags [*] and [-] signed int %-*dd\n", 6, hexa1);	

	fprintf(file, "test with flags [*] and [-] signed int %-*dd\n", 10, hexa1);
	ft_printf("test with flags [*] and [-] signed int %-*dd\n", 10, hexa1);

	fprintf(file, "test with flags [*] and [-] hexadecimal int %-*x\n", 0, hexa1);
	ft_printf("test with flags [*] and [-] hexadecimal int %-*x\n", 0, hexa1);

	fprintf(file, "test with flags [*] and [-] hexadecimal int %-*xx\n", 6, hexa1);
	ft_printf("test with flags [*] and [-] hexadecimal int %-*xx\n", 6, hexa1);	

	fprintf(file, "test with flags [*] and [-] hexadecimal int %-*xd%-10x\n", 10, hexa1, hexa);
	ft_printf("test with flags [*] and [-] hexadecimal int %-*xd%-10x\n", 10, hexa1, hexa);

	fprintf(file, "test with flags [*] and [-] hexadecimal int %-*X\n", 0, hexa1);
	ft_printf("test with flags [*] and [-] hexadecimal int %-*X\n", 0, hexa1);

	fprintf(file, "test with flags [*] and [-] hexadecimal int %-*Xx\n", 6, hexa1);
	ft_printf("test with flags [*] and [-] hexadecimal int %-*Xx\n", 6, hexa1);	

	fprintf(file, "test with flags [*] and [-] hexadecimal int %-*Xxd%-10xX\n", 10, hexa1, hexa);
	ft_printf("test with flags [*] and [-] hexadecimal int %-*Xxd%-10xX\n", 10, hexa1, hexa);	

	fprintf(file, "test with flags [*] and [-] %0*X%010XX %-10x hexadecimal int %-*Xxd%-10xX  signed int %-*dd char %-*c c %-*c string %-*s%-*s unsigned int %-*ud%ud\n", 10, num, hexa1, hexa, 10, hexa1, hexa, 10, hexa1, 10, x, 1, c, 12, s, 13, s, 10, num, num);
	ft_printf("test with flags [*] and [-] %0*X%010XX %-10x hexadecimal int %-*Xxd%-10xX  signed int %-*dd char %-*c c %-*c string %-*s%-*s unsigned int %-*ud%ud\n", 10, num, hexa1, hexa, 10, hexa1, hexa, 10, hexa1, 10, x, 1, c, 12, s, 13, s, 10, num, num);

	return (0);
}