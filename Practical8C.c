#include <stdio.h>
#include <string.h>
void removeChar(char* s, char c)
{
 
    int j, n = strlen(s);
    for (int i = j = 0; i < n; i++)
        if (s[i] != c)
            s[j++] = s[i];
 
    s[j] = '\0';
}
 
int main()
{
    char s[] = "Nabhag Motivaras";
    removeChar(s, 'a');
    printf("%s\n",s);
    return 0;
}