#include <stdio.h>
int main()
{
    char line[20]="Hello";
    int N = strlen(line);
    printf("Hello�r�ꪺ����:%d\n", N);

    char line2[20];
    strcpy( line2, line );
    printf("line  �o��: %s\n", line2);

    printf("����r�� strcmp(line, line2) �o�� %d\n",strcmp(line, line2);)
}
