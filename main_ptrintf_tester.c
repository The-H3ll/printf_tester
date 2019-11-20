/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ptrintf_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <molabhai@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:15:57 by molabhai          #+#    #+#             */
/*   Updated: 2019/11/19 10:23:52 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int		main(void)
{

	char *s = "My ft_printf";
	char c, x;
	int number = -2147483648;
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

//	fprintf(file, "test with flags [0] %02147483648d with unsigned int %04294967296u\n", nam, num);
//	ft_printf("test with flags [0] %02147483648d with unsigned int %04294967296u\n", nam, num);

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


/*	fprintf(file, "test with flags [-] hexadecimal %-4294967295xx\n", num);
	ft_printf("test with flags [-] hexadecimal %-4294967295xx\n", num);

	fprintf(file, "test with flags [-] hexadecimal %-4294967295xx\n", nam);
	ft_printf("test with flags [-] hexadecimal %-4294967295xx\n", nam);
	
	fprintf(file, "test with flags [-] hexadecimal %02147483648xxx\n", num);
	ft_printf("test with flags [-] hexadecimal %02147483648xxx\n", num);
	
	fprintf(file, "test with flags [-] hexadecimal %02147483648x%0214748xx\n", num, number);
	ft_printf("test with flags [-] hexadecimal %02147483648x%0214748xx\n", num, number);
*/	
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

	fprintf(file, "test with [width_field] %1d\n", hexa);
	ft_printf("test with [width_field] %1d\n", hexa);
	
	fprintf(file, "test with [width_field] d%1dd\n", hexa);
	ft_printf("test with [width_field] d%1dd\n", hexa);
	
	fprintf(file, "test with [width_field] d%5dd\n", hexa);
	ft_printf("test with [width_field] d%5dd\n", hexa);

	fprintf(file, "test with [width_field] d%10d%0d\n", hexa, hexa1);
	ft_printf("test with [width_field] d%10d%0d\n", hexa, hexa1);

	fprintf(file, "test with [width_field] %1x\n", hexa);
	ft_printf("test with [width_field] %1x\n", hexa);
	
	fprintf(file, "test with [width_field] %4xX\n", hexa);
	ft_printf("test with [width_field] %4xX\n", hexa);
	
	fprintf(file, "test with [width_field] %5x%1X\n", hexa, hexa1);
	ft_printf("test with [width_field] %5x%1X\n", hexa, hexa1);

	fprintf(file, "test with [width_field] X%10xx%1Xx\n", hexa, hexa1);
	ft_printf("test with [width_field] X%10xx%1Xx\n", hexa, hexa1);

	fprintf(file, "test with [width_field] %1p\n", s);
	ft_printf("test with [width_field] %1p\n", s);
	
	fprintf(file, "test with [width_field] %5p\n", s);
	ft_printf("test with [width_field] %5p\n", s);
	
	fprintf(file, "test with [width_field] %10p\n", s);
	ft_printf("test with [width_field] %10p\n", s);

	fprintf(file, "test with [width_field] %10pp\n", s);
	ft_printf("test with [width_field] %10pp\n", s);

	fprintf(file, "test with [width_field] p%10pp\n", s);
	ft_printf("test with [width_field] p%10pp\n", s);

	fprintf(file, "test with [width_field] p%100p%1p\n", s, s);
	ft_printf("test with [width_field] p%100p%1p\n", s, s);
	
	fprintf(file, "test with [width_field] p%100p%1p\n", s, s);
	ft_printf("test with [width_field] p%100p%1p\n", s, s);


	fprintf(file, "test with [width_field] %1s\n", s);
	ft_printf("test with [width_field] %1s\n", s);
	
	fprintf(file, "test with [width_field] %5s\n", s);
	ft_printf("test with [width_field] %5s\n", s);
	
	fprintf(file, "test with [width_field] %10s\n", s);
	ft_printf("test with [width_field] %10s\n", s);

	fprintf(file, "test with [width_field] %10ss\n", s);
	ft_printf("test with [width_field] %10ss\n", s);

	fprintf(file, "test with [width_field] s%10ss\n", s);
	ft_printf("test with [width_field] s%10ss\n", s);

	fprintf(file, "test with [width_field] s%100s%1s\n", s, s);
	ft_printf("test with [width_field] s%100s%1s\n", s, s);
	
	fprintf(file, "test with [width_field] s%100s%1s\n", s, s);
	ft_printf("test with [width_field] s%100s%1s\n", s, s);

	fprintf(file, "test with [width_field] s%100s%1sp%100p%1pX%10xx%1Xxnd%10d%0d\n", s, s, s, s, hexa, hexa1, hexa, hexa1);
	ft_printf("test with [width_field] s%100s%1sp%100p%1pX%10xx%1Xxnd%10d%0d\n", s, s, s, s, hexa, hexa1, hexa, hexa1);
	
	fprintf(file, "test with [width_field] %*d\n", 1, hexa);
	ft_printf("test with [width_field] %*d\n", 1, hexa);
	
	fprintf(file, "test with [width_field] d%*dd\n", 1, hexa);
	ft_printf("test with [width_field] d%*dd\n", 1, hexa);
	
	fprintf(file, "test with [width_field] d%*dd\n", 5, hexa);
	ft_printf("test with [width_field] d%*dd\n", 5, hexa);

	fprintf(file, "test with [width_field] d%*d%*d\n", 10, hexa, 0, hexa1);
	ft_printf("test with [width_field] d%*d%*d\n", 10, hexa, 0, hexa1);

	fprintf(file, "test with [width_field] %*x\n", 1, hexa);
	ft_printf("test with [width_field] %*x\n", 1, hexa);
	
	fprintf(file, "test with [width_field] %*xX\n", 4, hexa);
	ft_printf("test with [width_field] %*xX\n", 4, hexa);
	
	fprintf(file, "test with [width_field] %*x%*X\n", 5, hexa, 1, hexa1);
	ft_printf("test with [width_field] %*x%*X\n", 5, hexa, 1, hexa1);

	fprintf(file, "test with [width_field] X%*xx%*Xx\n", 10, hexa, 1, hexa1);
	ft_printf("test with [width_field] X%*xx%*Xx\n", 10, hexa, 1,hexa1);

	fprintf(file, "test with [width_field] %*p\n", 1, s);
	ft_printf("test with [width_field] %*p\n", 1, s);
	
	fprintf(file, "test with [width_field] %*p\n", 5, s);
	ft_printf("test with [width_field] %*p\n", 5, s);
	
	fprintf(file, "test with [width_field] %*p\n", 10, s);
	ft_printf("test with [width_field] %*p\n", 10, s);

	fprintf(file, "test with [width_field] %*pp\n", 10, s);
	ft_printf("test with [width_field] %*pp\n", 10, s);

	fprintf(file, "test with [width_field] p%*pp\n", 10, s);
	ft_printf("test with [width_field] p%*pp\n", 10, s);

	fprintf(file, "test with [width_field] p%*p%*p\n", 100, s, 1, s);
	ft_printf("test with [width_field] p%*p%*p\n", 100, s, 1, s);
	
	fprintf(file, "test with [width_field] p%*p%*p\n", 100, s, 1, s);
	ft_printf("test with [width_field] p%*p%*p\n", 100, s, 1, s);

	fprintf(file, "test with [width_field] %*s\n", 1, s);
	ft_printf("test with [width_field] %*s\n", 1, s);
	
	fprintf(file, "test with [width_field] %*s\n", 5, s);
	ft_printf("test with [width_field] %*s\n", 5, s);
	
	fprintf(file, "test with [width_field] %*s\n",10, s);
	ft_printf("test with [width_field] %*s\n", 10, s);

	fprintf(file, "test with [width_field] %*ss\n", 10,s);
	ft_printf("test with [width_field] %*ss\n", 10,s);

	fprintf(file, "test with [width_field] s%*ss\n", 10, s);
	ft_printf("test with [width_field] s%*ss\n", 10, s);

	fprintf(file, "test with [width_field] s%*s%*s\n", 100, s, 1, s);
	ft_printf("test with [width_field] s%*s%*s\n", 100, s, 1, s);
	
	fprintf(file, "test with [width_field] s%*s%*sp%*p%*pX%*xx%*Xxnd%*d%*d\n", 100 , s, 1, s, 100, s,1, s, 10, hexa, 1,  hexa1, 10, hexa, 0 ,hexa1);
	ft_printf("test with [width_field] s%*s%*sp%*p%*pX%*xx%*Xxnd%*d%*d\n", 100 , s, 1, s, 100, s,1, s, 10, hexa, 1,  hexa1, 10, hexa, 0 ,hexa1);

	fprintf(file, "test with [.] %1.1d\n", hexa);
	ft_printf("test with [.] %1.1d\n", hexa);

	fprintf(file, "test with [.] %0.1d\n", hexa);
	ft_printf("test with [.] %0.1d\n", hexa);

	fprintf(file, "test with [.] %1.0d\n", hexa);
	ft_printf("test with [.] %1.0d\n", hexa);

	fprintf(file, "test with [.] %0.5d\n", hexa);
	ft_printf("test with [.] %0.5d\n", hexa);

	fprintf(file, "test with [.] %5.0d\n", hexa);
	ft_printf("test with [.] %5.0d\n", hexa);

	fprintf(file, "test with [.] %5.5d\n", hexa);
	ft_printf("test with [.] %5.5d\n", hexa);
	
	fprintf(file, "test with [.] %10.5d\n", hexa);
	ft_printf("test with [.] %10.5d\n", hexa);
	
	fprintf(file, "test with [.] %5.10d\n", hexa);
	ft_printf("test with [.] %5.10d\n", hexa);

	fprintf(file, "test with [.] %6.10d\n", hexa);
	ft_printf("test with [.] %6.10d\n", hexa);
	
	fprintf(file, "test with [.] %10.6d\n", hexa);
	ft_printf("test with [.] %10.6d\n", hexa);

	fprintf(file, "test with [.] %1.1d\n", hexa1);
	ft_printf("test with [.] %1.1d\n", hexa1);

	fprintf(file, "test with [.] %0.1d\n", hexa1);
	ft_printf("test with [.] %0.1d\n", hexa1);

	fprintf(file, "test with [.] %1.0d\n", hexa1);
	ft_printf("test with [.] %1.0d\n", hexa1);

	fprintf(file, "test with [.] %0.5d\n", hexa1);
	ft_printf("test with [.] %0.5d\n", hexa1);

	fprintf(file, "test with || [.] %5.0d\n", hexa1);
	ft_printf("test with || [.] %5.0d\n", hexa1);

	fprintf(file, "test with [.] %5.5d\n", hexa1);
	ft_printf("test with [.] %5.5d\n", hexa1);
	
	fprintf(file, "test with [.] %10.5d\n", hexa1);
	ft_printf("test with [.] %10.5d\n", hexa1);
	
	fprintf(file, "test with [.] %5.10d\n", hexa1);
	ft_printf("test with [.] %5.10d\n", hexa1);

	fprintf(file, "test with [.] %6.10d\n", hexa1);
	ft_printf("test with [.] %6.10d\n", hexa1);
	
	fprintf(file, "test with [.] %10.6d\n", hexa1);
	ft_printf("test with [.] %10.6d\n", hexa1);

	fprintf(file, "test with [.] %1.1d%1.1d\n", hexa1, hexa);
	ft_printf("test with [.] %1.1d%1.1d\n", hexa1, hexa);

	fprintf(file, "test with [.] %0.1d%0.1d\n", hexa1, hexa);
	ft_printf("test with [.] %0.1d%0.1d\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %5.1d%5.1d\n", hexa1, hexa);
	ft_printf("test with [.] %5.1d%5.1d\n", hexa1, hexa);

	fprintf(file, "test with [.] %1.5d%1.5d\n", hexa1, hexa);
	ft_printf("test with [.] %1.5d%1.5d\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %5.5d%5.5d\n", hexa1, hexa);
	ft_printf("test with [.] %5.5d%5.5d\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %10.5d%10.5d\n", hexa1, hexa);
	ft_printf("test with [.] %10.5d%10.5d\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %5.10d%5.10d\n", hexa1, hexa);
	ft_printf("test with [.] %5.10d%5.10d\n", hexa1, hexa);
	
	fprintf(file, "test with [.] || %10.10ddd%10.10ddd\n", hexa1, hexa);
	ft_printf("test with [.] || %10.10ddd%10.10ddd\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %1.100ddd%1.100ddd\n", hexa1, hexa);
	ft_printf("test with [.] %1.100ddd%1.100ddd\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %.1d\n", hexa);
	ft_printf("test with [.] %.1d\n", hexa);

	fprintf(file, "test with [.] %.5d\n", hexa);
	ft_printf("test with [.] %.5d\n", hexa);

	fprintf(file, "test with [.] %.0d\n", hexa);
	ft_printf("test with [.] %.0d\n", hexa);

	fprintf(file, "test with [.] %.10d\n", hexa);
	ft_printf("test with [.] %.10d\n", hexa);

	fprintf(file, "test with [.] %.6d\n", hexa);
	ft_printf("test with [.] %.6d\n", hexa);

	fprintf(file, "test with [.] %.1d\n", hexa1);
	ft_printf("test with [.] %.1d\n", hexa1);

	fprintf(file, "test with [.] %.0d\n", hexa1);
	ft_printf("test with [.] %.0d\n", hexa1);

	fprintf(file, "test with [.] %.5d\n", hexa1);
	ft_printf("test with [.] %.5d\n", hexa1);

	fprintf(file, "test with [.] %.10d\n", hexa1);
	ft_printf("test with [.] %.10d\n", hexa1);

	fprintf(file, "test with [.] %.10d\n", hexa1);
	ft_printf("test with [.] %.10d\n", hexa1);
	
	fprintf(file, "test with [.] %.6d\n", hexa1);
	ft_printf("test with [.] %.6d\n", hexa1);

	fprintf(file, "test with [.] %.1d%.1d\n", hexa1, hexa);
	ft_printf("test with [.] %.1d%.1d\n", hexa1, hexa);

	fprintf(file, "test with [.] %.5d%.5d\n", hexa1, hexa);
	ft_printf("test with [.] %.5d%.5d\n", hexa1, hexa);

	fprintf(file, "test with [.] %.10d%.10d\n", hexa1, hexa);
	ft_printf("test with [.] %.10d%.10d\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %.100ddd%.100ddd\n", hexa1, hexa);
	ft_printf("test with [.] %.100ddd%.100ddd\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %.1x\n", hexa);
	ft_printf("test with [.] %.1x\n", hexa);

	fprintf(file, "test with [.] %.5x\n", hexa);
	ft_printf("test with [.] %.5x\n", hexa);

	fprintf(file, "test with [.] %.0x\n", hexa);
	ft_printf("test with [.] %.0x\n", hexa);

	fprintf(file, "test with [.] %.10x\n", hexa);
	ft_printf("test with [.] %.10x\n", hexa);

	fprintf(file, "test with [.] %.6x\n", hexa);
	ft_printf("test with [.] %.6x\n", hexa);

	fprintf(file, "test with [.] %.1x\n", hexa1);
	ft_printf("test with [.] %.1x\n", hexa1);

	fprintf(file, "test with [.] %.0x\n", hexa1);
	ft_printf("test with [.] %.0x\n", hexa1);

	fprintf(file, "test with [.] %.5x\n", hexa1);
	ft_printf("test with [.] %.5x\n", hexa1);

	fprintf(file, "test with [.] %.10x\n", hexa1);
	ft_printf("test with [.] %.10x\n", hexa1);

	fprintf(file, "test with [.] %.10x\n", hexa1);
	ft_printf("test with [.] %.10x\n", hexa1);
	
	fprintf(file, "test with [.] %.6x\n", hexa1);
	ft_printf("test with [.] %.6x\n", hexa1);

	fprintf(file, "test with [.] %.1x%.1d\n", hexa1, hexa);
	ft_printf("test with [.] %.1x%.1d\n", hexa1, hexa);

	fprintf(file, "test with [.] %.5x%.5d\n", hexa1, hexa);
	ft_printf("test with [.] %.5x%.5d\n", hexa1, hexa);

	fprintf(file, "test with [.] %.10x%.10d\n", hexa1, hexa);
	ft_printf("test with [.] %.10x%.10d\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %.100xdd%.100ddd\n", hexa1, hexa);
	ft_printf("test with [.] %.100xdd%.100ddd\n", hexa1, hexa);
	
	
	fprintf(file, "test with [.] %1.1x\n", hexa);
	ft_printf("test with [.] %1.1x\n", hexa);

	fprintf(file, "test with [.] %0.1x\n", hexa);
	ft_printf("test with [.] %0.1x\n", hexa);

	fprintf(file, "test with [.] %1.0x\n", hexa);
	ft_printf("test with [.] %1.0x\n", hexa);

	fprintf(file, "test with [.] %0.5x\n", hexa);
	ft_printf("test with [.] %0.5x\n", hexa);

	fprintf(file, "test with [.] %5.0x\n", hexa);
	ft_printf("test with [.] %5.0x\n", hexa);

	fprintf(file, "test with [.] %5.5x\n", hexa);
	ft_printf("test with [.] %5.5x\n", hexa);
	
	fprintf(file, "test with [.] %10.5x\n", hexa);
	ft_printf("test with [.] %10.5x\n", hexa);
	
	fprintf(file, "test with [.] %5.10x\n", hexa);
	ft_printf("test with [.] %5.10x\n", hexa);

	fprintf(file, "test with [.] %6.10x\n", hexa);
	ft_printf("test with [.] %6.10x\n", hexa);
	
	fprintf(file, "test with [.] %10.6x\n", hexa);
	ft_printf("test with [.] %10.6x\n", hexa);


	fprintf(file, "test with [.] %1.1x\n", hexa1);
	ft_printf("test with [.] %1.1x\n", hexa1);

	fprintf(file, "test with [.] %0.1x\n", hexa1);
	ft_printf("test with [.] %0.1x\n", hexa1);

	fprintf(file, "test with [.] %1.0x\n", hexa1);
	ft_printf("test with [.] %1.0x\n", hexa1);

	fprintf(file, "test with [.] %0.5x\n", hexa1);
	ft_printf("test with [.] %0.5x\n", hexa1);

	fprintf(file, "test with || [.] %5.0x\n", hexa1);
	ft_printf("test with || [.] %5.0x\n", hexa1);

	fprintf(file, "test with [.] %5.5x\n", hexa1);
	ft_printf("test with [.] %5.5x\n", hexa1);
	
	fprintf(file, "test with [.] %10.5x\n", hexa1);
	ft_printf("test with [.] %10.5x\n", hexa1);
	
	fprintf(file, "test with [.] %5.10x\n", hexa1);
	ft_printf("test with [.] %5.10x\n", hexa1);

	fprintf(file, "test with [.] %6.10x\n", hexa1);
	ft_printf("test with [.] %6.10x\n", hexa1);
	
	fprintf(file, "test with [.] %10.6x\n", hexa1);
	ft_printf("test with [.] %10.6x\n", hexa1);
	

	fprintf(file, "test with [.] %.1X\n", hexa);
	ft_printf("test with [.] %.1X\n", hexa);

	fprintf(file, "test with [.] %.5X\n", hexa);
	ft_printf("test with [.] %.5X\n", hexa);

	fprintf(file, "test with [.] %.0X\n", hexa);
	ft_printf("test with [.] %.0X\n", hexa);

	fprintf(file, "test with [.] %.10X\n", hexa);
	ft_printf("test with [.] %.10X\n", hexa);

	fprintf(file, "test with [.] %.6X\n", hexa);
	ft_printf("test with [.] %.6X\n", hexa);

	fprintf(file, "test with [.] %.1X\n", hexa1);
	ft_printf("test with [.] %.1X\n", hexa1);

	fprintf(file, "test with [.] %.0X\n", hexa1);
	ft_printf("test with [.] %.0X\n", hexa1);

	fprintf(file, "test with [.] %.5X\n", hexa1);
	ft_printf("test with [.] %.5X\n", hexa1);

	fprintf(file, "test with [.] %.10X\n", hexa1);
	ft_printf("test with [.] %.10X\n", hexa1);

	fprintf(file, "test with [.] %.10X\n", hexa1);
	ft_printf("test with [.] %.10X\n", hexa1);
	
	fprintf(file, "test with [.] %.6X\n", hexa1);
	ft_printf("test with [.] %.6X\n", hexa1);

	fprintf(file, "test with [.] %.1X%.1d\n", hexa1, hexa);
	ft_printf("test with [.] %.1X%.1d\n", hexa1, hexa);

	fprintf(file, "test with [.] %.5X%.5d\n", hexa1, hexa);
	ft_printf("test with [.] %.5X%.5d\n", hexa1, hexa);

	fprintf(file, "test with [.] %.10X%.10d\n", hexa1, hexa);
	ft_printf("test with [.] %.10X%.10d\n", hexa1, hexa);
	
	fprintf(file, "test with [.] %.100Xdd%.100ddd\n", hexa1, hexa);
	ft_printf("test with [.] %.100Xdd%.100ddd\n", hexa1, hexa);


	fprintf(file, "test with [.] %1.1X\n", hexa1);
	ft_printf("test with [.] %1.1X\n", hexa1);

	fprintf(file, "test with [.] %0.1X\n", hexa1);
	ft_printf("test with [.] %0.1X\n", hexa1);

	fprintf(file, "test with [.] %1.0X\n", hexa1);
	ft_printf("test with [.] %1.0X\n", hexa1);

	fprintf(file, "test with [.] %0.5X\n", hexa1);
	ft_printf("test with [.] %0.5X\n", hexa1);

	fprintf(file, "test with || [.] %5.0X\n", hexa1);
	ft_printf("test with || [.] %5.0X\n", hexa1);

	fprintf(file, "test with [.] %5.5X\n", hexa1);
	ft_printf("test with [.] %5.5X\n", hexa1);
	
	fprintf(file, "test with [.] %10.5X\n", hexa1);
	ft_printf("test with [.] %10.5X\n", hexa1);
	
	fprintf(file, "test with [.] %5.10X\n", hexa1);
	ft_printf("test with [.] %5.10X\n", hexa1);

	fprintf(file, "test with [.] %6.10X\n", hexa1);
	ft_printf("test with [.] %6.10X\n", hexa1);
	
	fprintf(file, "test with [.] %10.6X\n", hexa1);
	ft_printf("test with [.] %10.6X\n", hexa1);
	
	fprintf(file, "test with [.] %1.1X\n", hexa);
	ft_printf("test with [.] %1.1X\n", hexa);

	fprintf(file, "test with [.] %0.1X\n", hexa);
	ft_printf("test with [.] %0.1X\n", hexa);

	fprintf(file, "test with [.] %1.0X\n", hexa);
	ft_printf("test with [.] %1.0X\n", hexa);

	fprintf(file, "test with [.] %0.5X\n", hexa);
	ft_printf("test with [.] %0.5X\n", hexa);

	fprintf(file, "test with [.] %5.0X\n", hexa);
	ft_printf("test with [.] %5.0X\n", hexa);

	fprintf(file, "test with [.] %5.5X\n", hexa);
	ft_printf("test with [.] %5.5X\n", hexa);
	
	fprintf(file, "test with [.] %10.5X\n", hexa);
	ft_printf("test with [.] %10.5X\n", hexa);
	
	fprintf(file, "test with [.] %5.10X\n", hexa);
	ft_printf("test with [.] %5.10X\n", hexa);

	fprintf(file, "test with [.] %6.10X\n", hexa);
	ft_printf("test with [.] %6.10X\n", hexa);
	
	fprintf(file, "test with [.] %10.6X\n", hexa);
	ft_printf("test with [.] %10.6X\n", hexa);

	fprintf(file, "test with [.] %.1u\n", hexa);
	ft_printf("test with [.] %.1u\n", hexa);

	fprintf(file, "test with [.] %.5u\n", hexa);
	ft_printf("test with [.] %.5u\n", hexa);

	fprintf(file, "test with [.] %.0u\n", hexa);
	ft_printf("test with [.] %.0u\n", hexa);

	fprintf(file, "test with [.] %.10u\n", hexa);
	ft_printf("test with [.] %.10u\n", hexa);

	fprintf(file, "test with [.] %.6u\n", hexa);
	ft_printf("test with [.] %.6u\n", hexa);

	fprintf(file, "test with [.] %.1u\n", hexa);
	ft_printf("test with [.] %.1u\n", hexa);

	fprintf(file, "test with [.] %.0u\n", hexa);
	ft_printf("test with [.] %.0u\n", hexa);

	fprintf(file, "test with [.] %.5u\n", hexa);
	ft_printf("test with [.] %.5u\n", hexa);

	fprintf(file, "test with [.] %.10u\n", hexa);
	ft_printf("test with [.] %.10u\n", hexa);

	fprintf(file, "test with [.] %.10u\n", hexa);
	ft_printf("test with [.] %.10u\n", hexa);
	
	fprintf(file, "test with [.] %.6u\n", hexa);
	ft_printf("test with [.] %.6u\n", hexa);

	fprintf(file, "test with [.] %.1u%.1d\n", hexa, hexa);
	ft_printf("test with [.] %.1u%.1d\n", hexa, hexa);

	fprintf(file, "test with [.] %.5u%.5d\n", hexa, hexa);
	ft_printf("test with [.] %.5u%.5d\n", hexa, hexa);

	fprintf(file, "test with [.] %.10u%.10d\n", hexa, hexa);
	ft_printf("test with [.] %.10u%.10d\n", hexa, hexa);
	
	fprintf(file, "test with [.] %.100udd%.100ddd\n", hexa, hexa);
	ft_printf("test with [.] %.100udd%.100ddd\n", hexa, hexa);
	
	fprintf(file, "test with [.] %1.1u\n", hexa);
	ft_printf("test with [.] %1.1u\n", hexa);

	fprintf(file, "test with [.] %0.1u\n", hexa);
	ft_printf("test with [.] %0.1u\n", hexa);

	fprintf(file, "test with [.] %1.0u\n", hexa);
	ft_printf("test with [.] %1.0u\n", hexa);

	fprintf(file, "test with [.] %0.5u\n", hexa);
	ft_printf("test with [.] %0.5u\n", hexa);

	fprintf(file, "test with [.] %5.0u\n", hexa);
	ft_printf("test with [.] %5.0u\n", hexa);

	fprintf(file, "test with [.] %5.5u\n", hexa);
	ft_printf("test with [.] %5.5u\n", hexa);
	
	fprintf(file, "test with [.] %10.5u\n", hexa);
	ft_printf("test with [.] %10.5u\n", hexa);
	
	fprintf(file, "test with [.] %5.10u\n", hexa);
	ft_printf("test with [.] %5.10u\n", hexa);

	fprintf(file, "test with [.] %6.10u\n", hexa);
	ft_printf("test with [.] %6.10u\n", hexa);
	
	fprintf(file, "test with [.] %10.6u\n", hexa);
	ft_printf("test with [.] %10.6u\n", hexa);

	fprintf(file, "test with [.] %1.1u\n", nam);
	ft_printf("test with [.] %1.1u\n", nam);

	fprintf(file, "test with [.] %0.1u\n", nam);
	ft_printf("test with [.] %0.1u\n", nam);

	fprintf(file, "test with [.] %1.0u\n", nam);
	ft_printf("test with [.] %1.0u\n", nam);

	fprintf(file, "test with [.] %0.5u\n", nam);
	ft_printf("test with [.] %0.5u\n", nam);

	fprintf(file, "test with || [.] %5.0u\n", nam);
	ft_printf("test with || [.] %5.0u\n", nam);

	fprintf(file, "test with [.] %5.5u\n", nam);
	ft_printf("test with [.] %5.5u\n", nam);
	
	fprintf(file, "test with [.] %10.5u\n", nam);
	ft_printf("test with [.] %10.5u\n", nam);
	
	fprintf(file, "test with [.] %5.10u\n", nam);
	ft_printf("test with [.] %5.10u\n", nam);

	fprintf(file, "test with [.] %6.10u\n", nam);
	ft_printf("test with [.] %6.10u\n", nam);
	
	fprintf(file, "test with [.] %10.6u\n", nam);
	ft_printf("test with [.] %10.6u\n", nam);
	
	fprintf(file, "test with [.] %.1s\n", s);
	ft_printf("test with [.] %.1s\n", s);

	fprintf(file, "test with [.] %.5s\n", s);
	ft_printf("test with [.] %.5s\n", s);

	fprintf(file, "test with [.] %.0s\n", s);
	ft_printf("test with [.] %.0s\n", s);

	fprintf(file, "test with [.] %.10s\n", s);
	ft_printf("test with [.] %.10s\n", s);

	fprintf(file, "test with [.] %.6s\n", s);
	ft_printf("test with [.] %.6s\n", s);

	fprintf(file, "test with [.] %.1s\n", s);
	ft_printf("test with [.] %.1s\n", s);

	fprintf(file, "test with [.] %.0s\n", s);
	ft_printf("test with [.] %.0s\n", s);

	fprintf(file, "test with [.] %.5s\n", s);
	ft_printf("test with [.] %.5s\n", s);

	fprintf(file, "test with [.] %.10s\n", s);
	ft_printf("test with [.] %.10s\n", s);

	fprintf(file, "test with [.] %.10s\n", s);
	ft_printf("test with [.] %.10s\n", s);
	
	fprintf(file, "test with [.] %.6s\n", s);
	ft_printf("test with [.] %.6s\n", s);

	fprintf(file, "test with [.] %.1s%.1d\n", s, hexa);
	ft_printf("test with [.] %.1s%.1d\n", s, hexa);

	fprintf(file, "test with [.] %.5s%.5d\n", s, hexa);
	ft_printf("test with [.] %.5s%.5d\n", s, hexa);

	fprintf(file, "test with [.] %.10s%.10d\n", s, hexa);
	ft_printf("test with [.] %.10s%.10d\n", s, hexa);
	
	fprintf(file, "test with [.] %.100sdd%.100ddd\n", s, hexa);
	ft_printf("test with [.] %.100sdd%.100ddd\n", s, hexa);
	
	fprintf(file, "test with [.] %1.1s\n", s);
	ft_printf("test with [.] %1.1s\n", s);

	fprintf(file, "test with [.] %1.0s\n", s);
	ft_printf("test with [.] %1.0s\n", s);

	fprintf(file, "test with [.] %5.0s\n", s);
	ft_printf("test with [.] %5.0s\n", s);

	fprintf(file, "test with [.] %5.5s\n", s);
	ft_printf("test with [.] %5.5s\n", s);
	
	fprintf(file, "test with [.] %10.5s\n", s);
	ft_printf("test with [.] %10.5s\n", s);
	
	fprintf(file, "test with [.] %5.10s\n", s);
	ft_printf("test with [.] %5.10s\n", s);

	fprintf(file, "test with [.] %6.10s\n", s);
	ft_printf("test with [.] %6.10s\n", s);
	
	fprintf(file, "test with [.] %10.6s\n", s);
	ft_printf("test with [.] %10.6s\n", s);

	fprintf(file, "test with [.] %20.6s\n", s);
	ft_printf("test with [.] %20.6s\n", s);
	
	fprintf(file, "%1.d\n", hexa);
	ft_printf("%1.d\n", hexa);
	
	fprintf(file, "%5.d\n", hexa);
	ft_printf("%5.d\n", hexa);
		
	fprintf(file, "%10.d\n", hexa);
	ft_printf("%10.d\n", hexa);
	
	fprintf(file, "%1.x\n", hexa);
	ft_printf("%1.x\n", hexa);
	
	fprintf(file, "%5.x\n", hexa);
	ft_printf("%5.x\n", hexa);
		
	fprintf(file, "%10.x\n", hexa);
	ft_printf("%10.x\n", hexa);
	
	fprintf(file, "%1.X\n", hexa);
	ft_printf("%1.X\n", hexa);
	
	fprintf(file, "%5.X\n", hexa);
	ft_printf("%5.X\n", hexa);
		
	fprintf(file, "%10.X\n", hexa);
	ft_printf("%10.X\n", hexa);
	
	fprintf(file, "%1.u\n", hexa);
	ft_printf("%1.u\n", hexa);
	
	fprintf(file, "%5.u\n", hexa);
	ft_printf("%5.u\n", hexa);
		
	fprintf(file, "%10.u\n", hexa);
	ft_printf("%10.u\n", hexa);
	
	fprintf(file, "%1.s\n", s);
	ft_printf("%1.s\n", s);
	
	fprintf(file, "%5.s\n", s);
	ft_printf("%5.s\n", s);
		
	fprintf(file, "%10.s\n", s);
	ft_printf("%10.s\n", s); 
	return (0);
}