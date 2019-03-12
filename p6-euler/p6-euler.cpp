
#include <iostream>



int main(int argc, char **argv)
{
	unsigned long long p6_answ = 0;
	unsigned long long sum_of_squares = 0, square_of_sum = 0;

	for (unsigned long long i = 1; i <= 100; ++i)
	{
		sum_of_squares += i * i;
		square_of_sum += i;
	}

	square_of_sum *= square_of_sum;

	p6_answ = square_of_sum - sum_of_squares;

	std::cout << "The answer to the sixth problem of ProjectEuler.Net is " << p6_answ << ".\n";

	return 0;
}