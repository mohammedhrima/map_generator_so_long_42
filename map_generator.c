#include "Libft/libft.h"
#include <time.h>
#ifndef H
#define H 100;
#endif
#ifndef W
#define W 100;
#endif

int main(void)
{
	srand(time(0));
	int height = H;
	int width = W;
	int px = 1;
	int py = 1;
	char *str = my_malloc((height * width + 1));

	int i = 0;
	int j = 0;
	while (i < width * height)
	{
		if (i < width || (i + 1) % width == 0 || i % width == 0 || i / width >= height - 1)
			str = ft_strjoin(str, "1");
		else
			str = ft_strjoin(str, "8");
		i++;
	}
	i = 0;
	while (i < height * width)
	{
		char *str1 = "01";
		int num = rand() % 2;
		if (str[i] == '8')
			str[i] = str1[num];
		i++;
	}
	////////////////////////
	i = px % width + py * width;
	str[i] = 'P'; // add player
	///////////////////////
	i++;
	while (i % width < width * 0.1)
	{
		str[i] = '0';
		i++;
	}
	// str[i] = 'C';
	j = i;
	while (j % width < width * 0.4)
	{
		str[j] = '0';
		j++;
	}

	while (i / width < height * 0.15)
	{
		str[i] = '0';
		i += width;
	}
	str[j] = 'C';
	j = i - width;
	while (j % width > 3)
	{
		str[j] = '0';
		j--;
	}
	while (i % width < width * 0.35)
	{
		str[i] = '0';
		i++;
	}
	str[j] = 'C';
	j = i + 2 * width;
	while (j % width < width * 0.6)
	{
		str[j] = '0';
		j++;
	}
	while (i / width < height * 0.55)
	{
		str[i] = '0';
		i += width;
	}
	str[j] = 'C';
	j = i - width;
	while (j % width > width * 0.1)
	{
		str[j] = '0';
		j--;
	}
	str[j] = 'C';
	j += width + 1;
	while (j / width < height * 0.7 && j % width < width - 2)
	{
		str[j] = '0';
		j += width;
	}

	while (i % width < width * 0.65 && i % width < width - 2)
	{
		str[i] = '0';
		i++;
	}
	str[j] = 'C';
	j = i + 2 * width;
	while (j % width < width * 0.9 && j % width < width - 2)
	{
		str[j] = '0';
		j++;
	}

	while (i / width < height * 0.6 && i % width < width - 2)
	{
		str[i] = '0';
		i += width;
	}
	while (i % width < width * 0.8 && i % width < width - 2)
	{
		str[i] = '0';
		i++;
	}
	while (i / width < height * 0.8)
	{
		str[i] = '0';
		i += width;
	}
	str[j] = 'C';
	j = i - width;
	while (j % width > width * 0.1 && j % width < width - 2)
	{
		str[j] = '0';
		j--;
	}
	str[j] = 'C';
	j = i - width;
	while (j / width > height * 0.1)
	{
		str[j] = '0';
		j -= width;
	}
	str[j] = 'C';
	while (i % width < width * 0.95 && i % width < width - 2)
	{
		str[i] = '0';
		i++;
	}
	str[i] = 'E';
	//=========================================================================
	// printf map
	i = 0;
	int fd = open("./map.ber", O_RDWR | O_CREAT | O_TRUNC, 0777);
	while (str && str[i])
	{
		write(fd, str + i, 1);
		if ((i + 1) % width == 0)
			write(fd, "\n", 1);
		i++;
	}
}