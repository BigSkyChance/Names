#include <string.h>
#include "ReadNames.h"
#include "BubbleSort.h"

void BubbleSort(char A[][MaxCharsPerName + 1], int NumNames)
{
	
	int		Row;
	bool	Sorted;
	char	Temp [MaxCharsPerName + 1];

	Row = MaxCharsPerName;

	do {
		Sorted = true;
		for (Row = 0; Row < NumNames; Row++)
			if ((_strcmpi(A[Row], A[Row + 1]) > 0))
			{
				for (int Col = 0; Col < MaxCharsPerName + 1; Col++)
					Temp[Col] = A[Row] [Col];
				for (int Col = 0; Col < MaxCharsPerName + 1; Col++)
					A[Row][Col] = A[Row + 1][Col];
				for (int Col = 0; Col < MaxCharsPerName + 1; Col++)
					A[Row + 1][Col] = Temp[Col];
				Sorted = false;
			}

	} while (!Sorted);

}
