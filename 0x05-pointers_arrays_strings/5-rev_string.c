/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	/*find string length without null char*/
	for (l = 0; s[1] != '\0'; ++l)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < l / 2; ++1)
	{
		ch = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l - 1 - i] = ch;
	}
}