<<<<<<< HEAD
#include "main.h"

/**
 * rot13 - Encodes a string using rot13;rotating tthe char 13 spaces
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string.
 */
char *rot13(char *s)
{
/*My code Here !!!!!*/
int i, j;
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char boolean;
for (i = 0; s[i] != '\0'; i++)
{
boolean = 0;
for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
{
if (s[i] == alpha[j])
{
s[i] = r[j];
boolean = 1;
}
}
}
return (s);
}
=======
#include "main.h"

/**
 * rot13 - Encodes a string using rot13;rotating tthe char 13 spaces
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string.
 */

char *rot13(char *s)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (s);
}
>>>>>>> 6404b85d954296dac1cb2f031c2899135b985de1
