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

	printf(BLUE"______TESTING <ft_strcmp>______\n");
	printf(CYAN"[case 1]"RESET" \n첫 번째 문자열을 입력하세요: \n");
	scanf("%s", s1);
	printf("두 번째 문자열을 입력하세요: \n");
	scanf("%s", s2);
	printf("원본함수: %d\n 나의함수: %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));

}

int		main(void)
{
	test_ft_strlen();
	test_ft_strcmp();
	return (1);
}	
