#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int l;
    char buf[85], s[165];
    scanf("%d %80s", &l, buf);
    int n = strlen(buf);
    strcat(s, buf);
    strcat(s, buf);
    l %= n;
    for(int i = l; i < l + n; ++i){
        printf("%c", s[i]);
    }
    return 0;
}