#include <iostream>

int main()
{
	int* numar = new int;
	*numar = 10;
	delete numar;




	*numar = 256;

	system("pause");
}