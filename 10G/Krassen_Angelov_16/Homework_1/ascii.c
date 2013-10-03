#include <stdio.h>
int main()
{
int c = 0;
for(c = 0;c < 256; c++)
{
printf("%c %d", c, c);
}
return 0;
}
