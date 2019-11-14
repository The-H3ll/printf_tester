# printf_tester

To use Make sure to add all u *.h that u use for ure printf.
gcc -Wall -Wextra -Werror  main_ptrintf_tester.c *.a
./a.out > ft_printf.txt
diff -c -s ft_printf.txt  printf_tester.txt
