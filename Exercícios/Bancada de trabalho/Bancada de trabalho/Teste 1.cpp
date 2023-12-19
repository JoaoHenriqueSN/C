#include <iostream>

int main()

{

	int vetor[]{1,2,3,4,5};
	int *ptr;
	ptr = vetor;
	//ptr++;
	std::cout << *(ptr +2) << '\n';
	system("PAUSE");
	return 0;
}