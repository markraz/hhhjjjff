#pragma once
#include "afxwin.h"


// ourCEntryDlg �Ի���

class ourCEntryDlg : public CDialog
{
	DECLARE_DYNAMIC(ourCEntryDlg)

public:
	ourCEntryDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ourCEntryDlg();

// �Ի�������
	enum { IDD = IDD_ENTRY_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
