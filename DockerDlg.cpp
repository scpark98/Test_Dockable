// DockerDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Test_Dockable.h"
#include "afxdialogex.h"
#include "DockerDlg.h"


// CDockerDlg 대화 상자

IMPLEMENT_DYNAMIC(CDockerDlg, CDialogEx)

CDockerDlg::CDockerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DOCKER, pParent)
{

}

CDockerDlg::~CDockerDlg()
{
}

void CDockerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDockerDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDockerDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CDockerDlg::OnBnClickedCancel)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()


// CDockerDlg 메시지 처리기

void CDockerDlg::OnBnClickedOk()
{
}

void CDockerDlg::OnBnClickedCancel()
{
}

void CDockerDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
	CRect rc;
	GetClientRect(&rc);

	dc.FillSolidRect(rc, RGB(240, 120, 120)); // 배경색 설정
}

void CDockerDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//DefWindowProc(WM_NCLBUTTONDOWN, HTCAPTION, MAKEWORD(point.x, point.y));

	CDialogEx::OnLButtonDown(nFlags, point);
}
