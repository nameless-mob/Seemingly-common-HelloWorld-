#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomS(int, int);
int num;

int main()
{
	/*h == h || H	, c == comma ',' , s == space ' '*/
	int x = 0, cnth = 0, cntc = 0, cnts = 0;
	/*乱数初期化*/
	unsigned int now = (unsigned int)time(0);srand(now);rand(); rand(); rand(); rand(); rand();

	x = rand();
	x = randomS(x, 2);

	/* h 判定*/
	if (x != 0) x = 32;
	else cnth = 1;

	/*出力*/
	putchar(x + 72);

	/* ellow 出力*/
	x = 100;
	putchar(x + 1);
	putchar(x + 8);
	putchar(x + 8);
	putchar(x + 11);
	putchar(x + 19);

hellowworld:
	/* ',' 判定と出力*/
	x = rand();
	x = randomS(x, 2);
	if (x == 0)
	{
		putchar(x + 44);
		cntc = 1;
	}
	/* ' ' 判定と出力*/
	x = rand();
	x = randomS(x, 2);
	if (x == 0)
	{
		putchar(x + 32);
		cnts = 1;
	}
	/* hellowworld を阻止*/
	if (cntc + cnth + cnts == 0) goto hellowworld;

	/* w 判定*/
	if ((cnth == 1) && (cnts == 0))
	{
		x = rand();
		x = randomS(x, 2);
		if (x == 0)
		{
			/* Hellowworld を阻止*/
			if (cntc == 0) goto hellowworld;
		}
		else x = 32;
	}
	else x = 0;

	/* w 出力*/
	putchar(119 - x);

	/* orld 出力*/
	x = 110;
	putchar(x + 1);
	putchar(x + 4);
	putchar(x - 2);
	putchar(x - 10);

	/* ! 判定と出力*/
	x = rand();
	x = randomS(x, 2);
	if (x == 0)putchar(x + 33);

	/*改行*/
	putchar(10);

	fflush(stdin);getchar();
	return 0;

}


int randomS(int base, int radix)
{
	int x[31] = { '0' }, i = 0;
	num = base;

	do
	{
		x[i] = num % radix;
		num = num / radix;
		i++;
	} while (num != 0);
	for (i = 0;i < 31;i++) num = num + x[i];
	return num % radix;
}

