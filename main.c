#include "libasm.h"
# define BLUE "\x1b[34m"
# define CYAN "\x1b[36m"
# define RESET "\x1b[0m"

int main()
{
	char s[50];

	printf(BLUE"______TESTING <ft_strlen>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strlen = %zu\n", ft_strlen(""));
	printf(CYAN"[case 2] "RESET"ft_strlen = %zu\n", ft_strlen("Hello, World!"));
	printf(CYAN"[case 3] "RESET"ft_strlen = %zu\n", ft_strlen("안녕 세상아 ! "));

	printf(BLUE"______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcpy = %s\n", ft_strcpy(s, ""));
	printf(CYAN"[case 2] "RESET"ft_strcpy = %s\n", ft_strcpy(s ,"Hello, World!"));
	printf(CYAN"[case 3] "RESET"ft_strcpy = %s\n", ft_strcpy(s, "안녕 세상아 ! "));

	printf(BLUE"______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcmp = %d\n", ft_strcmp("hello", ""));
	printf(CYAN"[case 2] "RESET"ft_strcmp = %d\n", ft_strcmp("test" ,"Hello, World!"));
	printf(CYAN"[case 3] "RESET"ft_strcmp = %d\n", ft_strcmp("Hii bro !", "안녕 세상아 ! "));

	printf(BLUE"______TESTING <ft_wrtie>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_write = %d\n", ft_write(1 , "", 1));
	printf(CYAN"[case 2] "RESET"ft_write = %d\n", ft_write(1 , "Hello, World!", 8));
	printf(CYAN"[case 3] "RESET"ft_write = %d\n", ft_write(1 , "말을 하다가 끊으시면 어떡하나요?\n", 9));

	printf(BLUE"______TESTING <ft_read>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_read = %d\n", ft_read(0 , s, 20));
	printf(CYAN"[case 2] "RESET"ft_read = %d\n", ft_read(0 , s, 8));
	printf(CYAN"[case 3] "RESET"ft_read = %d\n", ft_read(0 , s, -5));

	printf(BLUE"______TESTING <ft_strdup>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strdup = %s\n", ft_strdup(""));
	printf(CYAN"[case 2] "RESET"ft_strdup = %s\n", ft_strdup("Hello, World!"));
	printf(CYAN"[case 3] "RESET"ft_strdup = %s\n", ft_strdup("어이 전공댕이~"));

	return (1);
}