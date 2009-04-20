// ourCDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "DrawCli.h"
#include "ourCDlg.h"
#include "drawtool.h"




// ourCEntryDlg 对话框

IMPLEMENT_DYNAMIC(ourCEntryDlg, CDialog)

ourCEntryDlg::ourCEntryDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ourCEntryDlg::IDD, pParent)
	, entryName(_T("Unnamed"))
	, attrName(_T(""))
	, attrType(_T(""))
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
	DDX_Text(pDX, IDC_EDIT2, attrName);
	DDV_MaxChars(pDX, attrName, 30);
	DDX_CBString(pDX, IDC_COMBO1, attrType);
	DDX_Control(pDX, IDC_LIST1, ourCLBCtrl);

	CComboBox *pCB=(CComboBox*)GetDlgItem(IDC_COMBO1);//ZDO
	pCB->SetCurSel(0);//ZDO:SetCurSel函数可改变标签控件当前选定的项目


}


BEGIN_MESSAGE_MAP(ourCEntryDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &ourCEntryDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// ourCEntryDlg 消息处理程序

void ourCEntryDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	OnOK();
}

void ourCEntryDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//ZDO:在listbox中添加属性信息
	UpdateData(TRUE);
	CString str=attrType;
	int n=12-attrType.GetLength();
	while(n--)
	{
		str+=" ";
	}
	str+=attrName;
	//str.Format();
	ourCLBCtrl.AddString(str);
	//ZDID
}
