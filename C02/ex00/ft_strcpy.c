#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;

    }
    dest[i] = '\0';
    return (dest);

}

int main()
{
    char dest[] = "isilay";
    char src[] = "bababa";

    printf("%s",ft_strcpy(dest, src));
}