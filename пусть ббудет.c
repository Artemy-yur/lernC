
int var;
var = 100;
char ch;
double d1, d2, d3, d4;
char bibi[] = "Marke pigor";
d1 = 10.0f;
d2 = 5.5f;
d3 = 1e25;
d4 = 0.512f;
int age = getchar();
int size_float = sizeof(d3);
int size_char = sizeof(bibi);

ch = 'd';
// int "D"

printf("Ya pidors = %c, %d \n", ch, ch);
printf("Float %f %f %f %f \n", d1, d2, d3, d4);
printf("%d, %s, last check%d\n\nage: %d \n \n \n", size_float, bibi, size_char, age);
putchar(age);
return 0;