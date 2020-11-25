#include "libasm.h"

void	test_ft_strlen(void)
{
	char	str[1024];

	scanf("%s", str);
	printf("원본함수: %lu\n 나의함수: %zu\n", strlen(str), ft_strlen(str));
}

int		main(void)
{
	test_ft_strlen();
	return (1);
}	
