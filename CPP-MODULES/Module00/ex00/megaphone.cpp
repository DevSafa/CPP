#include <iostream>

int main(int argc , char *argv[])
{
	int i;
	int j;


	i = 1;
	j = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i])
	{
		while(argv[i][j])
		{
			 std::cout << (char) toupper(argv[i][j]);
			//putchar(toupper(argv[i][j]));
			j++;
		}
		j = 0;
		i++;
	}
	std::cout << std::endl;

	return (0);

}

//g++ -std=c++98 *.cpp -o megaphone