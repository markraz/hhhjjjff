// ourCDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DrawCli.h"
#include "ourCDlg.h"
#include "drawtool.h"




// ourCEntryDlg �Ի���

IMPLEMENT_DYNAMIC(ourCEntryDlg, CDialog)

ourCEntryDlg::ourCEntryDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ourCEntryDlg::IDD, pParent)
	, entryName(_T(""))
{

}

ourCEntryDlg::~ourCEntryDlg()
{
}

void ourCEntryDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, entryName);
	DDV_MaxChars(pDX, entryName, 30);
}


BEGIN_MESSAGE_MAP(ourCEntryDlg, CDialog)
END_MESSAGE_MAP()


// ourCEntryDlg ��Ϣ�������

void ourCEntryDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������


	/*CDrawTool::c_drawShape = rect;//ID_APP_ENTRY, ID_DRAW_RECT//ZDO
	UINT nFlags=0;
	CPoint point;
	OnLButtonDown( nFlags,point);*/
	OnOK();
}
