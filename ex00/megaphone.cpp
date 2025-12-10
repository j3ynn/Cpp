
#include <iostream>
#include <cctype>

void	end(char *str)
{
	int j = 0;
	char c;

	while (str[j])
	{
		c = std::toupper(str[j]);
		std::cout << c;
		j ++;
	}
}

int main(int ac, char **av)
{
	int i = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (av[i])
	{
		end(av[i]);
		i ++;
	}
	std::cout << "\n";
	return (0);
}
