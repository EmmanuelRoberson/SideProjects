#include <iostream>

int LetToNum(char a)
{
	int x = (int)a;
	// use this in case the ternary operators dont work
	//if (x >= 97 && x <= 122)
	//	int tmp = ((x - 97) / 3) + 1;
	//else if (x >= 48 && x < 57)
	//	int tmp = ((x - 48));
	//return tmp;

	// if character doesnt fit any of these descriptions, then its defaulted to 0
	int tmp1 = (x >= 97 && x <= 122) ? ((x - 97) / 3) + 1 : 0, tmp2;
	int ret = (x >= 97 && x <= 122) ? tmp1: tmp2 = (x >= 48 && x < 57) ? (x - 48) : 0;

	return ret;
}



int* PhoneNumberConverter(char* arr)
{
	int size;
	for (int i = 0; arr[i] != '\n'; i++)
		size = i;

	int* tmp = new int[size + 1];
	tmp[size+1] = '\n';
	for (int i = 0; arr[i] != '\n'; i++)
	{
		tmp[i] = LetToNum(arr[i]);
	}
	return tmp;
}

//a - 97
//z - 122

int main()
{
	char numba[] = { '1','8','0','0', 'c','a','l','l','n','o','w', '\n'};
	char* cOne800callnow = &numba[0];
	int* iOne800callnow = PhoneNumberConverter(cOne800callnow);
	for (int i = 0; iOne800callnow[i] != '\n'; i++)
		std::cout << iOne800callnow[i] << " ";
	system("pause");
}