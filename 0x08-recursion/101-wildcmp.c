/**
 * wildcmp - Compares two strings and returns 1 if identical, otherwise return 0.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
else if (!*s1)
return (wildcmp(s1, s2 + 1));
else
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
{
if (!*s1)
return	(1);
else
return (wildcmp(s1 + 1, s2 + 1));
}
else
return	(0);
}
