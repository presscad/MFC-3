#pragma once


// CClearDlg �Ի���

class CClearDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CClearDlg)

public:
	CClearDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CClearDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CLEAR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
