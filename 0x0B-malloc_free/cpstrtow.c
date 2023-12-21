#include <stdlib.h>

char **strtow(char *str)
{
	char **star, *cpy;
	int a, b, l;

	if (str == 0)
	{
		return 0;
	}

	for (a = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == 0))
		{
			l++;
		//	printf("%d %c\n", l, str[a]);
		}
	}
//	printf("%d\n", l);

	star = (char **) malloc(sizeof (char *) * (l + 1));
	if (star == 0)
	{
		return 0;
	}

	for (a = 0, b = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && str[a] != 0)           {                                               l++;
		//	printf("%d\n", l);         
		}                                        //   printf("%d\n", l);
		if (str[a] == ' ' && l > 0)
		{                                               star[b] = malloc(sizeof (char) * l + 1);
		//	printf("%s\n  %d\n", star[b], b);
			l = 0;
			b++;
		}
	}
	if (l > 0)
	{
		star[b] = malloc(sizeof (char) * l + 1);
	//	printf("%s\n  %d\n", star[b], b);
		l = 0;
	}


	for (a = 0, b = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && str[a] != 0)
		{
			l++;
		//	printf("%d\n", l);
		}
		printf("%d\n", l);
		if (str[a] == ' ' && l > 0)
		{
	//		star[b] = malloc(sizeof (char) * l + 1);
	//		printf("%s\n  %d\n", star[b], b);
			if (star[b] == 0)
			{
				return 0;
			}
			for (cpy = star[b]; l > 0; l--)
			{
				*cpy++ = str[a - l];
			}
		//	printf("%s\n  %s\n  %d\n", cpy, star[b], b);
//			*cpy++ = ' ';
			*cpy++ = 0;
			free(star[b]);
			b++; 
		}
	}
	if (l > 0)                                  {                                               for (cpy = star[b]; l > 0; l--)             {                                               *cpy++ = str[a - l];                    }                                           *cpy++ = 0;                                 free(star[b]);                              b++;                                    }
	star[b] = 0;
	//printf("%d\n %s\n %s\n %s\n %s\n", b, star[0], star[1], star[2], star[3]);
//	printf("%s\n", star[b]);
	free(star[b]);
	free(star);
	return star;
//	(void)cpy;
}
