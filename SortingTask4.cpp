#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::vector<int> a = { -100, -50, -5, 1, 10, 15 };
    
	for (int i = a.size() - 1; i >= 0; i--)
	{
		int maxind = 0;
		for (int j = 0; j <= i; j++)
		{
			if (fabs(a[maxind]) < fabs(a[j]))
				maxind = j;
		}

		int temp = a[i];
		a[i] = a[maxind];
		a[maxind] = temp;
	}
	for (int j = 0; j < a.size(); j++)
	{
		std::cout << a[j] << " ";
	}
}