#include <stdio.h>
#include "printf.h"

void ft_test_for_char(void)
{
	int printf_return = 0;
	int ft_printf_return = 0;

	printf("---- Test cases for flag 'c' : -----\n");

	printf(" 01. Lower case character : 't' \n");
	printf("      standard : ");
	printf_return = printf("%c", 't');
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", 't');
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 02. Upper case character : 'T' \n");
	printf("      standard : ");
	printf_return = printf("%c", 'T');
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", 'T');
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 03. Null character : '\\0' \n");
	printf("      standard : ");
	printf_return = printf("%c", '\0');
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", '\0');
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 04. Out of range ASCII value : '300' \n");
	printf("      standard : ");
	printf_return = printf("%c", 300);
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", 300);
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 05. Negative ASCII value : '-1' \n");
	printf("      standard : ");
	printf_return = printf("%c",-1);
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", -1);
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 06. Non printbale character : '\\t' \n");
	printf("      standard : ");
	printf_return = printf("%c",'\t');
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", '\t');
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 07. No corresponding argument : '' \n");
	printf("      standard : ");
	printf_return = printf("%c");
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c");
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 08. Wide character : L'あ' \n");
	printf("      standard : ");
	printf_return = printf("%c", L'あ');
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", L'あ');
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 09. Mismatch argument : '3.14' \n");
	printf("      standard : ");
	printf_return = printf("%c", 3.14);
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", 3.14);
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 10. Multiple arguments : 'A B C ' \n");
	printf("      standard : ");
	printf_return = printf("%c", 'A', 'B', 'C');
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	ft_printf_return = ft_printf("%c", 'A', 'B', 'C');
	printf("\n        - return value : %d \n", ft_printf_return);

	printf(" 11. Mimic an error : 'A' \n");
	printf("      standard : ");
	fclose(stdout);
	printf_return = printf("%c", 'A');
	freopen("/dev/tty", "w", stdout);
	printf("\n        - return value : %d \n", printf_return);
	printf("      custome  : ");
	fflush(stdout);
	fclose(stdout);
	ft_printf_return = ft_printf("%c", 'A');
	freopen("/dev/tty", "w", stdout);
	printf("\n        - return value : %d \n", ft_printf_return);

}

int main(void)
{
	ft_test_for_char();
	return (0);
}
