#include "libasm.h"
# define BLUE "\x1b[34m"
# define CYAN "\x1b[36m"
# define RESET "\x1b[0m"

int main()
{
	char s[50];

	printf(BLUE"\n______TESTING <ft_strlen>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strlen = %zu | strlen = %zu\n", ft_strlen(""), strlen(""));
	printf(CYAN"[case 2] "RESET"ft_strlen = %zu | strlen = %zu\n", ft_strlen("Hello, World!"), strlen("Hello, World!"));

	printf(BLUE"\n______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcpy = %s | strcpy = %s\n", ft_strcpy(s, ""), strcpy(s, ""));
	printf(CYAN"[case 2] "RESET"ft_strcpy = %s | strcpy = %s\n", ft_strcpy(s, "Hello, World!"), strcpy(s, "Hello, World!"));

	printf(BLUE"\n______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcmp = %d | strcmp = %d\n", ft_strcmp("a", "a"), strcmp("a", "a"));
	printf(CYAN"[case 2] "RESET"ft_strcmp = %d | strcmp = %d\n", ft_strcmp("a" ,"b"), strcmp("a", "b"));

	printf(BLUE"\n______TESTING <ft_wrtie>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_write = %zd | write = %zd\n", ft_write(1 , "Hello, World!", 13), write(1 , "Hello, World!", 13));
	printf(CYAN"[case 2] "RESET"ft_write = %zd | wrtie = %zd\n", ft_write(1 , "Hello, World!", 8), write(1 , "Hello, World!", 8));

	printf(BLUE"\n______TESTING <ft_read>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_read = %zd | read = %zd\n", ft_read(0 , s, 100), read(0 , s, 100));

	printf(BLUE"\n______TESTING <ft_strdup>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strdup = %s | strdup = %s\n", ft_strdup(""), strdup(""));
	printf(CYAN"[case 2] "RESET"ft_strdup = %s | strdup = %s\n", ft_strdup("Hello, World!"), strdup("Hello, World!"));

	return (1);
}