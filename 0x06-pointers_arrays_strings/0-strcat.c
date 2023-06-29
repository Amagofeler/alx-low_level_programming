char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move the pointer to the end of dest */
    while (*ptr)
        ptr++;

    /* Copy the characters from src to dest */
    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    /* Add the terminating null byte */
    *ptr = '\0';

    return dest;
}
