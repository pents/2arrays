#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <vector>

int A[] = {51,23,616,63,46,0,1};
int B[] = {8125,46,33,32,96,0,11};


int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<int> result;

	for (int i = 0; i < ARRAY_SIZE(A); i++)
	{
		for (int j = 0; j < ARRAY_SIZE(B); j++)
		{
			if (A[i] == B[j]) result.push_back(A[i]);
		}
	}

	cout << "First Array - ";
	for (int i = 0; i < ARRAY_SIZE(A); i++) cout << A[i] << " ";
	cout << "\n";
	cout << "Second Array - ";
	for (int i = 0; i < ARRAY_SIZE(B); i++) cout << B[i] << " ";
	cout << "\n";
	cout << "Intersections - ";
	for (int i = 0; i < result.size(); i++) cout << result[i] << " ";


	getch();
	return 0;
}
