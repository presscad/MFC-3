
// MFC_uart1Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"

#include "../MFC_uart1/CSerialPort/SerialPort.h"






// CMFC_uart1Dlg 对话框
class CMFC_uart1Dlg : public CDialogEx
{
// 构造
public:
	CMFC_uart1Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_UART1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnBnClickedButtonOpen();
	afx_msg void OnBnClickedButtonSend();
	afx_msg void OnBnClickedButtonClear();
	afx_msg void OnBnClickedButtonExit();
	
	afx_msg LONG OnComm(WPARAM ch, LPARAM port);

	afx_msg void OnClose();


private:
	CString m_edit_receive;
	CString m_edit_send;
	CComboBox m_comb_select;
	CComboBox m_comb_baudrate;

	

	CButton m_btn_open;

	CEdit m_edit_send_control;
	CEdit m_edit_receive_control;



};
