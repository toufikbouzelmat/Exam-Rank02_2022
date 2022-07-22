#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    int *ns;
    int len;

    len = ft_strlen(src);
    ns = (char *)malloc(sizeof(char) * (len + 1));
    if (!ns)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        ns[i] = src[i];
        i++;
    }
    ns[len] = '\0';
    return (ns);
}