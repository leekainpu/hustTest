#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int TenCheck(char *str)
{
	int i;
	if (*str == '0'){	//不是十位数，进行八位制判别
		return 1;
	}
	for (i = 0; i<strlen(str)-1; i++){
		if (*(str + i)<'0' || *(str + i)>'9'){
			printf("No\n");
			return 0;
		}
	}
	if (*(str + i) != 'u' && *(str + i) != 'U' && *(str + i) != 'l' && *(str + i) != 'L'){	//对最后一个字符进行检查
		if (*(str + i) < '0' || *(str + i) > '9')
			printf("No\n");
		else printf("Yes\n");
	}
	else
		printf("Yes\n");
	return 0;
}
int EgtCheck(char *str)
{
	int i;
	if (*(str + 1) == 'X' || *(str + 1) == 'x'){	//不是八位数，进行十六位制判别
		return 1;
	}
	for (i = 1; i<strlen(str) - 1; i++){
		if (*(str + i)<'0' || *(str + i)>'7'){
			printf("No\n");
			return 0;
		}
	}
	if (*(str + i) != 'u' && *(str + i) != 'U' && *(str + i) != 'l' && *(str + i) != 'L'){	//对最后一个字符进行检查
		if (*(str + i) < '0' || *(str + i) > '7')
			printf("No\n");
		else printf("Yes\n");
	}
	else
		printf("Yes\n");
	return 0;
}
int SxtnCheck(char *str)
{
	int i;
	if (*(str + 1) != 'X' && *(str + 1) != 'x'){	//不是八位数，进行十六位制判别
		printf("No\n");
		return 1;
	}
	for (i = 2; i<strlen(str) - 1; i++){
		if (*(str + i) >= '0' && *(str + i) <= '9' || *(str + i) >= 'a' &&
			*(str + i) <= 'f' || *(str + i) >= 'A' && *(str + i) <= 'F'){
		}
		else
			printf("No\n");
	}
	if (*(str + i) == 'u' || *(str + i) == 'U' || *(str + i) == 'l' || *(str + i) == 'L' ||
		*(str + i) >= '0' && *(str + i) <= '9' ||
		*(str + i) >= 'a' && *(str + i) <= 'f' ||
		*(str + i) >= 'A' && *(str + i) <= 'F'){	//对最后一个字符进行检查
		printf("Yes\n");
	}
	else
		printf("No\n");
	return 0;
}
int main()
{
	char num[21];
	int i = 0123;
	while (scanf("%s", num) != EOF){
		if (TenCheck(num)){
			if (EgtCheck(num))
				SxtnCheck(num);
		}
	}
	return 0;
}
