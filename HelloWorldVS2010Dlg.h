
// HelloWorldVS2010Dlg.h : ͷ�ļ�
//

#pragma once


// CHelloWorldVS2010Dlg �Ի���
class CHelloWorldVS2010Dlg : public CDialogEx
{
// ����
public:
	CHelloWorldVS2010Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_HELLOWORLDVS2010_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
