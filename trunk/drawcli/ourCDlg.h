#pragma once
#include "afxwin.h"
//#include "drawobj.h"

class CDrawRect;
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
	CStringList CStrLAttr;
	CStringList oldCStrLAttr;
public:
	afx_msg void OnBnClickedButton2();
};
#pragma once


// ourCRelationDlg �Ի���

class ourCRelationDlg : public CDialog
{
	DECLARE_DYNAMIC(ourCRelationDlg)

public:
	ourCRelationDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ourCRelationDlg();

// �Ի�������
	enum { IDD = IDD_RELATION_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
