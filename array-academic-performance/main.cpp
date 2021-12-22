#include <iostream>
using namespace std;

int main()
{
	const int groupsAmount = 7;
	double perfomance[groupsAmount], averagePerfomance = 0;
	int minPos = 0;
	cout << "Fill perfomances:" << endl;
	for (int i = 0; i < groupsAmount; i++)
	{
		cout << i + 1 << ") ";
		cin >> perfomance[i];

		if (perfomance[i] < perfomance[minPos])
		{
			minPos = i;
		}
		averagePerfomance += perfomance[i];
	}
	averagePerfomance /= groupsAmount;
	cout << endl << "The index of the group with the lowest perfomance is: " << minPos << " and it has " << perfomance[
			minPos] << " points" << endl << "Average perfomance = " << averagePerfomance << endl <<
		"Points to reach average perfomance =  " << averagePerfomance - perfomance[minPos];
	return 0;
}
