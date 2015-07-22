
// TetrisDoc.h : interface of the CTetrisDoc class
//


#pragma once
#include "TetrisBoard.h"



class CTetrisDoc : public CDocument
{
protected: // create from serialization only
	CTetrisDoc();
	DECLARE_DYNCREATE(CTetrisDoc)

// Attributes
public:

// Operations
public:
	/*Funcke aby miec dostep do funckcji TetrisBoard*/
	void CreateBoard(void) { m_board.CreateBoard(); }
	int GetBoardWidth(void) { return m_board.GetBoardWidth(); }
	int GetBoardHeight(void) { return m_board.GetBoardHeight(); }
	int GetBoardCols(void) { return m_board.GetBoardCols(); }
	int GetBoardRows(void) { return m_board.GetBoardRows(); }
// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CTetrisDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	TetrisBoard m_board;


// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
