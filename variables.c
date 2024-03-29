#include <stdio.h>

/*definimos variables*/
int main()
{
char c = 'y'; /*Tamaño de 1 byte 0...255*/
int  i = 10;  /* Tamaño 2 bytes   -32768 ... 32767*/
short s = -1; /* Tamaño 2 bytes  -128 ... 127*/
unsigned int u = 25; /*Tamaño 2 bytes 0 ... 65535*/
long l = 5932; /* 4 bytes -2147483648 ... 2147483647*/
float f = 72.538; /* 4 bytes*/
double d = 12321.877658; /* 8 bytes*/

printf("%.2lf \n",d);

return (0);
}
