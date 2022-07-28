#include <unistd.h>
#include <math.h>
#include <stdio.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int j;
	char c;

	j = 7;
	i = 0;
	while (i < 8)
	{
		if (octet >> i & 1)
		{
			c += pow(2, j);
			j--;
		}
		else
			j--;
		i++;
	}
	return (c);
	
}
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char out = 0;

	out = out | ((octet & 128) >> 7);
	out = out | ((octet & 64) >> 5);
	out = out | ((octet & 32) >> 3);
	out = out | ((octet & 16) >> 1);
	out = out | ((octet & 8) << 1);
	out = out | ((octet & 4) << 3);
	out = out | ((octet & 2) << 5);
	out = out | ((octet & 1) << 7);
	return (out);
}

int main()
{
	unsigned char k = reverse_bits('A');
	int i;

	i = 7;
	while (i >= 0)
	{
		if (k >> i & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}