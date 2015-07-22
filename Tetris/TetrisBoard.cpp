#include "stdafx.h"
#include "TetrisBoard.h"


TetrisBoard::TetrisBoard()
: m_boardFigurePtr(NULL),
boardWidth(100), boardHeight(200),
boardCols(10), boardRows(20)
{

}


TetrisBoard::~TetrisBoard()
{
	//  Simply delete the board
	DeleteBoard();
}

void TetrisBoard::CreateBoard(void)
{
	//  If there is already a board, delete it
	if (m_boardFigurePtr != NULL)
		DeleteBoard();
}

void TetrisBoard::DeleteBoard(void)
{
	if (m_boardPtr != NULL)
	{
		for (int row = 0; row < boardRows; row++)
		{
			if (m_boardPtr[row] != NULL)
			{//usuwanie pojedynczych wierszy o ile nie sa NULL aby nie wykonywac niepotrzebnych operacji
				delete[] m_boardPtr[row];
				m_boardPtr[row] = NULL;
			}
		}
		/*usuwanie calej tablicy nie tylko wierszy*/
		delete[] m_boardFigurePtr;
		m_boardFigurePtr = NULL;
	}
}

int TetrisBoard::GetBoardWidth(void) const
{
	return boardWidth;
}

void TetrisBoard::SetBoardWidth(int boardWidth)
{
	this->boardWidth = boardWidth;
}

int TetrisBoard::GetBoardHeight(void) const
{
	return boardHeight;
}

void TetrisBoard::SetBoardHeight(int boardHeight)
{
	this->boardHeight = boardHeight;
}

int TetrisBoard::GetBoardCols(void) const
{
	return boardCols;
}

int TetrisBoard::GetBoardRows(void) const
{
	return boardRows;
}