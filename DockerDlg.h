#pragma once
#include "afxdialogex.h"


// CDockerDlg 대화 상자

class CDockerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDockerDlg)

public:
	CDockerDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDockerDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DOCKER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnPaint();
};
