#pragma once
#include "afxwin.h"


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
};
