#include "Grid.h"

int main()
{
	Grid<int> myIntGrid(2,2);
	Grid<double> myDoubleGrid;
	myIntGrid.setElementAt(1, 1, 11);

	myDoubleGrid = myIntGrid;
	Grid<double> newDoubleGrid(myIntGrid);

	return 0;
}
