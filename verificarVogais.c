#include <stdio.h>
int main()
{
    char palavra [50];
    int i, vogais = 0;
    fgets(palavra, 50, stdin);
    for(i=0; palavra[i] != '\0'; i++)
{
    if (palavra [i] == 'a' || palavra[i] == 'e' || palavra [i] == 'i' || palavra[i] == 'o' || palavra [i] == 'u')
{
      vogais++;  
}
}

printf("quantidade de vogais:%d\n", vogais);
return 0;
}