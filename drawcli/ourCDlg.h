#pragma once
#include "afxwin.h"
//#include "drawobj.h"

class CDrawRect;
// ourCEntryDlg 对话框

class ourCEntryDlg : public CDialog
{
	DECLARE_DYNAMIC(ourCEntryDlg)

public:
	ourCEntryDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ourCEntryDlg();

// 对话框数据
	enum { IDD = IDD_ENTRY_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnCbnSelchangeCombo1();

public:
	CString entryName;
	CString attrName;
	CString attrType;
	CListBox ourCLBCtrl;
	CStringList CStrLAttr;
	CStringList oldCStrLAttr;
public:
	afx_msg void OnBnClickedButton2();
};
#pragma once


// ourCRelationDlg 对话框

class ourCRelationDlg : public CDialog
{
	DECLARE_DYNAMIC(ourCRelationDlg)

public:
	ourCRelationDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ourCRelationDlg();

// 对话框数据
	enum { IDD = IDD_RELATION_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString relationName;
	CString attrName;
	CString attrType;
	CListBox ourCLBCtrl;
	CStringList CStrLAttr;
	CStringList oldCStrLAttr;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
public:
	CComboBox ourCCBCtrl1;
	CComboBox ourCCBCtrl2;
	CDrawRect *pRectLeft;
	CDrawRect *pRectRight;
	CStringList CStrLEntry;
	CPtrList CPtrLEntry;
public:
	afx_msg void OnBnClickedOk();
};
