#include <stdio.h>
#include <string.h>
int main()
{
    char *strings[] = {"battleship" ,"boot", "cannno",NULL};
    char *s;
	printf("��������ҵ�ѡ�");
	scanf("%s" ,s);
	int i = 0;
	while (strings[i] != NULL)	
	{
		if (strcmp(strings[i], s) == 0)
		{
			printf("FOUND\n");
			return 0;
		
		}
	    i++;
	}
	printf("NOT FOUND\n");
	return 1;
}