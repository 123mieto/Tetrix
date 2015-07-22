#include "stdafx.h"
#include "TetrisFigure.h"


TetrisFigure::TetrisFigure()
{
	tetrisFigureClr[0] = RGB(0, 0, 0);
	tetrisFigureClr[1] = RGB(255, 0, 0);
	tetrisFigureClr[2] = RGB(255, 255, 64);
	tetrisFigureClr[3] = RGB(0, 0, 255);
	tetrisFigureClr[4] = RGB(64, 64, 64);
	tetrisFigureClr[5] = RGB(255, 0, 255);
}


TetrisFigure::~TetrisFigure()
{
}
