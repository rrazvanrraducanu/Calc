
// CalcDlg.h : header file
//

#pragma once


// CCalcDlg dialog
class CCalcDlg : public CDialogEx
{
// Construction
public:
	CCalcDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	double m_edit1;
	CEdit m_e1;
	double m_edit2;
	CEdit m_e2;
	double m_edit3;
	afx_msg void OnClickedButton1();
};
