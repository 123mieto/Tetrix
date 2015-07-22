#pragma once
class TetrisBoard
{
public:
	TetrisBoard(void);
	~TetrisBoard(void);
	int GetBoardWidth() const;
	void SetBoardWidth(int boardWidth);
	int GetBoardHeight() const;
	void SetBoardHeight(int boardHeight);
	int GetBoardCols() const;
	int GetBoardRows() const;

	/*function to free memory*/
	void DeleteBoard(void);
	/*Tworzenie planszy i alokowanie pamieci*/
	void CreateBoard(void);

private:

	


	int boardWidth;
	int boardHeight;
	int boardCols;
	int boardRows;
	/*wskaznik obecnej pozycji dodanej figury*/
	int** m_boardFigurePtr;
	/*wskaznik pokazujacy na polozenie na planszy*/
	int** m_boardPtr;

};

