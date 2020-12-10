#include "libasm.h"

int main()
{
	char s[50];

	printf(BLUE"\n______TESTING <ft_strlen>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strlen = %zu | ", ft_strlen(""));
	printf("strlen = %zu\n", strlen(""));
	printf(CYAN"[case 2] "RESET"ft_strlen = %zu | ", ft_strlen("Hello, World!"));
	printf("strlen = %zu\n", strlen("Hello, World!"));
	printf(BLUE"\n______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcpy = %s | " ft_strcpy(s, ""));
	printf("strcpy = %s\n", strcpy(s, ""));
	printf(CYAN"[case 2] "RESET"ft_strcpy = %s | ", ft_strcpy(s, "Hello, World!"));
	printf("strcpy = %s\n", strcpy(s, "Hello, World!"));
	printf(BLUE"\n______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcmp = %d | ", ft_strcmp("a", "a"));
	printf("strcmp = %d\n", strcmp("a", "a"));
	printf(CYAN"[case 2] "RESET"ft_strcmp = %d | ", ft_strcmp("a" ,"b"));
	printf("strcmp = %d\n", strcmp("a", "b"));
	printf(BLUE"\n______TESTING <ft_wrtie>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_write = %zd | ", ft_write(1 , "Hello, World!", 13));
	printf("write = %zd\n", write(1 , "Hello, World!", 13));
	printf(CYAN"[case 2] "RESET"ft_write = %zd | ", ft_write(1 , "Hello, World!", 8));
	printf("wrtie = %zd\n", write(1 , "Hello, World!", 8));
	printf(BLUE"\n______TESTING <ft_read>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_read = %zd | ", ft_read(0 , s, 100));
	printf("read = %zd\n", read(0 , s, 100));
	printf(BLUE"\n______TESTING <ft_strdup>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strdup = %s | ", ft_strdup(""));
	printf("strdup = %s\n", strdup(""));
	printf(CYAN"[case 2] "RESET"ft_strdup = %s | ", ft_strdup("Hello, World!"));
	printf("strdup = %s\n", strdup("Hello, World!"));

	return (1);
}
