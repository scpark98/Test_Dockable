
// Test_DockableDlg.h: 헤더 파일
//

#pragma once

#include "DockerDlg.h"

// CTestDockableDlg 대화 상자
class CTestDockableDlg : public CDialogEx
{
// 생성입니다.
public:
	CTestDockableDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEST_DOCKABLE_DIALOG };
#endif

	bool			m_float = false; // 도킹 여부를 저장하는 변수	
	CDockerDlg		m_docker; // DockerDlg 객체	


	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnWindowPosChanged(WINDOWPOS* lpwndpos);
};
