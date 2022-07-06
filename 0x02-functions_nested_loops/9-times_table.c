#include "main.h"

/**
 * times_table - print 9 times-tables from 0
 *
 */
void times_table(void)
{
	int  a, b, c, d, e;
	int i, j, k, l, m, n;

	for (i = 1; i <= 10; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if ( a <= 0)
			{
				_putchar(a);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('\n');
			}
			for (b = 0; b <= 9; b++)
			{
				if ( b >= 0 && b < 9)
				{
					_putchar(b);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('\n');
				}
				for (c = 0; c <= 9; c+=2)
				{
					if (c >= 0 && c < 18)
					{
						_putchar(b);
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar('\n');
					}
					for (d = 0; d <= 9; d+=3)
					{
						if (d >= 0 && d < 27)
						{
							 _putchar(d);
							 _putchar(',');
							 _putchar(' ');
							 _putchar(' ');
							 _putchar('\n');
						}
						for (e = 0; e <= 9; e+=4)
						{
							if (e >= 0 && e < 36)
							{
								_putchar(e);
								_putchar(',');
								_putchar(' ');
								_putchar(' ');
								_putchar('\n');
							}
							for (j = 0; j <= 9; j+=5)
							{
								if (j >= 0 && j < 45)
								{
									_putchar(j);
									_putchar(',');
									_putchar(' ');
									_putchar(' ');
									_putchar('\n');
								}
								for (k = 0; k <= 9; k+=6)
								{
									if (k >= 0 && k < 54)
									{
										_putchar(k);
										_putchar(',');
										_putchar(' ');
										_putchar(' ');
										_putchar('\n');
									}
									for (l = 0; l <= 9; l+=7)
									{
										if (l >= 0 && l < 63)
										{
											_putchar(l);
											_putchar(',');
											_putchar(' ');
											_putchar(' ');
											_putchar('\n');
										}
										for (m = 0; m <= 9; m+=8)
										{
											if (m >= 0 && m < 72)
											{
												_putchar(b);
												_putchar(',');
												_putchar(' ');
												_putchar(' ');
												_putchar('\n');
											}
											for (n = 0; n <= 9; n++)
											{
												if (n >= 0 && n < 81)
												{
													_putchar(b);
													_putchar(',');
													_putchar(' ');
													_putchar(' ');
													_putchar('\n');
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

