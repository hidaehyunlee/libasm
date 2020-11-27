#include "libasm.h"
# define BLUE "\x1b[34m"
# define CYAN "\x1b[36m"
# define RESET "\x1b[0m"

void	test_ft_strlen(void)
{
	char	str[1000];

	printf(BLUE"______TESTING <ft_strlen>______\n"RESET);
	printf(CYAN"[case 1]"RESET"\nstring을 입력하세요: \n");
	scanf("%s", str);
	printf("원본함수: %lu\n 나의함수: %zu\n", strlen(str), ft_strlen(str));
}

void	test_ft_strcmp(void)
{
	char	s1[1000];
	char	s2[1000];

	printf(BLUE"______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1]"RESET" \n첫 번째 문자열을 입력하세요: \n");
	scanf("%s", s1);
	printf("두 번째 문자열을 입력하세요: \n");
	scanf("%s", s2);
	printf("원본함수: %d\n 나의함수: %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
}

void	test_ft_strcpy(void)
{
	char s1[1000];
	char s2[1000];
	char *d;
	char *d2;

	printf(BLUE"______TESTING <ft_strcpy>______\n"RESET);
	printf(CYAN"[case 1]"RESET" \n원본 문자열을 입력하세요: \n");
	scanf("%s", s1);
	printf("복사할 문자열을 입력하세요: ");
	scanf("%s", s2);
	d = strdup(s1);
	d2 = strdup(s2);
	printf("원본함수: %s\n 나의함수: %s\n", strcpy(s1, s2), ft_strcpy(d, d2));
	free(d);
	free(d2);
}

void	test_ft_write(void)
{
	char buff[1024];

	printf(BLUE"______TESTING <ft_wrtie>______\n"RESET);
	printf(CYAN"[case 1]"RESET" \n문자열을 입력하세요: \n");
	scanf("%s", buff);
	ft_write(1, buff, ft_strlen(buff));
}


int		main(void)
{
	// test_ft_strlen();
	// test_ft_strcmp();
	// test_ft_strcpy();
	test_ft_write();
	return (1);
}	
