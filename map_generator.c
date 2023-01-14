#include "Libft/libft.h"
#ifndef H
#define H 100;
#endif
#ifndef W
#define W 100;
#endif
#ifndef C
#define C 10;
#endif

int main(void)
{
	int height = H;
	int width = W;
	int px = 1;
	int py = 1;
	int Collectible = C;
	int Exit = 1;
	int col;
	char *str = my_malloc((height * width + 1) * sizeof(char));

	int i = 0;
	while (i < height * width)
	{
		if (i < width || (i + 1) % width == 0 || i % width == 0 || i > height * (width - 1))
			str = ft_strjoin(str, "1");
		else
			str = ft_strjoin(str, "8");
		i++;
	}
	i = px % width + py * width;
	while (i < height * width)
	{
		if (i / width == py && i % width == px)
		{
			str[i] = 'P';
			int j = i;
			j++;
			int pos = i;
			while (j < width * height)
			{
				int move = rand() % 4;
				if (move == 0 && (pos + 1) % width < width - 1 && (pos + 1) < width * (height - 1) && str[pos + 1] == '8')
				{
					col = rand() % 10;
					if (col && Collectible > 1 )
					{
	
						str[pos + 1] = 'C';
						Collectible--;
					
					}
					else
						str[pos + 1] = '0';
					pos++;
				}
				if (move == 1 && pos + width < width * height && (pos + width) < width * (height - 1) && str[pos + width] == '8')
				{
					col = rand() % 2;
					if (col && Collectible > 1 )
					{
						str[pos + width] = 'C';
						Collectible--;
					
					}
					else
						str[pos + width] = '0';
					pos += width;
				}
				if (move == 2 && (pos - 1) % width > 1 && (pos - 1) < width * (height - 1) && str[pos - 1] == '8')
				{
					col = rand() % 10;
					if (col && Collectible > 1 )
					{
						str[pos - 1] = 'C';
						Collectible--;
					}
					else
						str[pos - 1] = '0';
					pos--;
				}
				if (move == 3 && (pos - width) % width > width && (pos - width) / width < height && str[pos - width] == '8')
				{
					col = rand() % 2;
					if (col && Collectible > 1 )
					{
						str[pos - width] = 'C';
						Collectible--;
					
					}
					else
						str[pos - width] = '0';
					pos -= width;
				}
				j++;
			}
		}
		i++;
	}

	i = height * width - width;
	while (i > 0)
	{
		if (i / width == py && i % width == px)
		{
			int j = i;
			j++;
			int pos = i;
			while (j < width * height)
			{
				int move = rand() % 4;
				// ft_printf("(%d, %d)\n", move % width, move / height);
				if (move == 0 && (pos + 1) % width < width - 1 && (pos + 1) < width * (height - 1) && str[pos + 1] == '8')
				{
					col = rand() % 2;
					if (col && Collectible > 1 )
					{
						str[pos + 1] = 'C';
						Collectible--;
			
					}
					else
						str[pos + 1] = '0';
					pos++;
				}
				if (move == 1 && pos + width < width * height && (pos + width) < width * (height - 1) && str[pos + width] == '8')
				{
					col = rand() % 2;
					if (col && Collectible > 1 )
					{
						str[pos + width] = 'C';
						Collectible--;
					
					}
					else
						str[pos + width] = '0';
					pos += width;
				}
				if (move == 2 && (pos - 1) % width > 1 && (pos - 1) < width * (height - 1) && str[pos - 1] == '8')
				{
					col = rand() % 2;
					if ( col && Collectible > 1 )
					{
						str[pos - 1] = 'C';
						Collectible--;
					
					}
					else
						str[pos - 1] = '0';
					pos--;
				}
				if (move == 3 && (pos - width) % width > width && (pos - width) / width < height && str[pos - width] == '8')
				{
					col = rand() % 2;
					if ( col && Collectible > 1 )
					{
						str[pos - width] = 'C';
						Collectible--;
					
					}
					else
						str[pos - width] = '0';
					pos -= width;
				}
				j++;
			}
		}
		i--;
	}
	i = px % width + py * width;

	while (i < height * width)
	{
		if (i / width == py && i % width == px)
		{
			int j = i;
			j++;
			int pos = i;
			while (j < width * height)
			{
				int move = rand() % 4;
				// ft_printf("(%d, %d)\n", move % width, move / height);
				if (move == 0 && (pos + 1) % width < width - 1 && (pos + 1) < width * (height - 1) && str[pos + 1] == '8')
				{
					col = rand() % 2;
					if ( col && Collectible > 1 )
					{
						str[pos + 1] = 'C';
				Collectible--;
					}
					else
						str[pos + 1] = '0';
					pos++;
				}
				if (move == 1 && pos + width < width * height && (pos + width) < width * (height - 1) && str[pos + width] == '8')
				{
					col = rand() % 2;
					if ( col && Collectible > 1 )
					{
						str[pos + width] = 'C';
						Collectible--;
				
					}
					else
						str[pos + width] = '0';
					pos += width;
				}
				if (move == 2 && (pos - 1) % width > 1 && (pos - 1) < width * (height - 1) && str[pos - 1] == '8')
				{
					col = rand() % 2;
					if (col && Collectible > 1 )
					{
						str[pos - 1] = 'C';
						Collectible--;
					
					}
					else
						str[pos - 1] = '0';
					pos--;
				}
				if (move == 3 && (pos - width) % width > width && (pos - width) / width < height && str[pos - width] == '8')
				{
					col = rand() % 2;
					if ( col && Collectible > 1 )
					{
						str[pos - width] = 'C';
						Collectible--;
					
					}
					else
						str[pos - width] = '0';
					pos -= width;
				}
				j++;
			}
		}
		i++;
	}
	i = height * width - width;
	while (i > 0)
	{
		if (i / width == py && i % width == px)
		{
			// str[i] = 'P';
			int j = i;
			j++;
			int pos = i;
			while (j < width * height)
			{
				int move = rand() % 4;
				// ft_printf("(%d, %d)\n", move % width, move / height);
				if (move == 0 && (pos + 1) % width < width - 1 && (pos + 1) < width * (height - 1) && str[pos + 1] == '8')
				{
					col = rand() % 2;
					if ( col && Collectible > 1 )
					{
						str[pos + 1] = 'C';
						Collectible--;
						
					}
					else
						str[pos + 1] = '0';
					pos++;
				}
				if (move == 1 && pos + width < width * height && (pos + width) < width * (height - 1) && str[pos + width] == '8')
				{
					col = rand() % 2;
					if (col && Collectible > 1 )
					{
						str[pos + width] = 'C';
						Collectible--;
						
					}
					else
						str[pos + width] = '0';
					pos += width;
				}
				if (move == 2 && (pos - 1) % width > 1 && (pos - 1) < width * (height - 1) && str[pos - 1] == '8')
				{
					col = rand() % 2;
					if (col && Collectible > 1 )
					{
						str[pos - 1] = 'C';
						Collectible--;
				
					}
					else
						str[pos - 1] = '0';
					pos--;
				}
				if (move == 3 && (pos - width) % width > width && (pos - width) / width < height && str[pos - width] == '8')
				{
					col = rand() % 2;
					if ( col && Collectible > 1 )
					{
						str[pos - width] = 'C';
						Collectible--;

					}
					else
						str[pos - width] = '0';
					pos -= width;
				}
				j++;
			}
		}
		i--;
	}
	i = px % width + py * width + 1;

	while (i < height * width)
	{
		if (i / width == py && i % width == px)
		{
			int j = i;
			j++;
			int pos = i;
			while (j < width * height)
			{
				int move = rand() % 4;
				// ft_printf("(%d, %d)\n", move % width, move / height);
				if (move == 0 && (pos + 1) % width < width - 1 && (pos + 1) < width * (height - 1) && str[pos + 1] == '8')
				{
					col = rand() % 2;
					if (Exit )
					{
						str[pos + 1] = 'E';
						Collectible--;
						break;
					}
					else
						str[pos + 1] = '0';
					pos++;
				}
				if (move == 1 && pos + width < width * height && (pos + width) < width * (height - 1) && str[pos + width] == '8')
				{
					col = rand() % 2;
					if (Exit )
					{
						str[pos + width] = 'E';
						Collectible--;
						break;
					}
					else
						str[pos + width] = '0';
					pos += width;
				}
				if (move == 2 && (pos - 1) % width > 1 && (pos - 1) < width * (height - 1) && str[pos - 1] == '8')
				{
					col = rand() % 2;
					if (Exit )
					{
						str[pos - 1] = 'E';
						Collectible--;
						break;
					}
					else
						str[pos - 1] = '0';
					pos--;
				}
				if (move == 3 && (pos - width) % width > width && (pos - width) / width < height && str[pos - width] == '8')
				{
					col = rand() % 2;
					if (Exit && j < (width * height) / abs(1 - Collectible))
					{
						str[pos - width] = 'E';
						Collectible--;
						break;
					}
					else
						str[pos - width] = '0';
					pos -= width;
				}
				j++;
				if (rand() % 10 > 5 && Exit)
				{
					str[pos] = 'E';
					Exit--;
				}
			}
		}
		i++;
	}
	i = px % width + py * width;
	str[i] = 'P';
	i = 0;
	while (i < height * width)
	{
		char *str1 = "01";
		int num = rand() % 2;
		if (str[i] == '8')
			str[i] = str1[num];
		i++;
	}
	i = 0;
	// ft_printf("\n");
	// str = ft_strjoin(str, "\n");
	i = 0;
	while (str[i])
	{
		ft_printf("%c", str[i]);
		if ((i + 1) % width == 0)
			ft_printf("\n");
		i++;
	}
	// while(1);
}