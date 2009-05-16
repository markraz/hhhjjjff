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
	, entryName(_T("unnamed"))
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
	entryName=entryName.MakeLower();


		CString attr;
		POSITION pos=oldCStrLAttr.GetHeadPosition();
		while (pos != NULL)
		{
			attr=oldCStrLAttr.GetNext(pos);
			ourCLBCtrl.AddString(attr);
		}
		oldCStrLAttr.RemoveAll();

}


BEGIN_MESSAGE_MAP(ourCEntryDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &ourCEntryDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &ourCEntryDlg::OnBnClickedButton2)
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
	CString str=attrName+'('+attrType+')';
	ourCLBCtrl.AddString(str);
	CStrLAttr.AddTail(str);
	//ZDID
}

void ourCEntryDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//ZTODO:以画出的图形的删除待解决  obj有remove函数
	int iIndex=ourCLBCtrl.GetCurSel();
	if(iIndex<0)
		return;
	ourCLBCtrl.DeleteString(iIndex);
	CStrLAttr.RemoveAt(CStrLAttr.FindIndex(iIndex));
}


// E:\Visual Studio 2005\Projects\bb\drawcli\ourCDlg.cpp : 实现文件
//



// ourCRelationDlg 对话框

IMPLEMENT_DYNAMIC(ourCRelationDlg, CDialog)

ourCRelationDlg::ourCRelationDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ourCRelationDlg::IDD, pParent)
	, relationName(_T("unnamed"))
	, attrName(_T(""))
	, attrType(_T(""))
{

}

ourCRelationDlg::~ourCRelationDlg()
{
}

void ourCRelationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, relationName);
	DDV_MaxChars(pDX, relationName, 30);
	DDX_Text(pDX, IDC_EDIT2, attrName);
	DDV_MaxChars(pDX, attrName, 30);
	DDX_CBString(pDX, IDC_COMBO1, attrType);
	DDV_MaxChars(pDX, attrType, 30);
	DDX_Control(pDX, IDC_LIST1, ourCLBCtrl);
	DDX_Control(pDX, IDC_COMBO2, ourCCBCtrl1);
	DDX_Control(pDX, IDC_COMBO3, ourCCBCtrl2);
	CComboBox *pCB=(CComboBox*)GetDlgItem(IDC_COMBO1);//ZDO
	pCB->SetCurSel(0);//ZDO:SetCurSel函数可改变标签控件当前选定的项目

		CString attr;
		POSITION pos=oldCStrLAttr.GetHeadPosition();
		while (pos != NULL)
		{
			attr=oldCStrLAttr.GetNext(pos);
			ourCLBCtrl.AddString(attr);
		}
		oldCStrLAttr.RemoveAll();


		pos=CStrLEntry.GetHeadPosition();
		while (pos != NULL)
		{
			attr=CStrLEntry.GetNext(pos);
			ourCCBCtrl1.AddString(attr);
			ourCCBCtrl2.AddString(attr);
		}
		CStrLEntry.RemoveAll();
}


BEGIN_MESSAGE_MAP(ourCRelationDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &ourCRelationDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &ourCRelationDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDOK, &ourCRelationDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// ourCRelationDlg 消息处理程序



void ourCRelationDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString str=attrName+'('+attrType+')';
	ourCLBCtrl.AddString(str);
	CStrLAttr.AddTail(str);
}

void ourCRelationDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//ZTODO:以画出的图形的删除待解决
	int iIndex=ourCLBCtrl.GetCurSel();
	if(iIndex<0)
		return;
	ourCLBCtrl.DeleteString(iIndex);
	CStrLAttr.RemoveAt(CStrLAttr.FindIndex(iIndex));
}

void ourCRelationDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	int iIndex1=ourCCBCtrl1.GetCurSel();
	int iIndex2=ourCCBCtrl2.GetCurSel();
	if(iIndex1>=0&&iIndex2>=0)
	{
		POSITION pos=CPtrLEntry.FindIndex(iIndex1);
		if(pos!=NULL)
			pRectLeft=(CDrawRect*)CPtrLEntry.GetAt(pos);
			

		pos=CPtrLEntry.FindIndex(iIndex2);
		if(pos!=NULL)
			pRectRight=(CDrawRect*)CPtrLEntry.GetAt(pos);
			
	}
	else
	{
		pRectLeft=NULL;
		pRectRight=NULL;
	}
	OnOK();
}
// ourCDlg.cpp : 实现文件
//


// ourExportDlg 对话框

IMPLEMENT_DYNAMIC(ourExportDlg, CDialog)

ourExportDlg::ourExportDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ourExportDlg::IDD, pParent)
	, ourCreateSQL(_T(""))
{

}

ourExportDlg::~ourExportDlg()
{
}

void ourExportDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, ourCreateSQL);
}


BEGIN_MESSAGE_MAP(ourExportDlg, CDialog)
END_MESSAGE_MAP()


// ourExportDlg 消息处理程序
