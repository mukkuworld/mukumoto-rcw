#pragma once

/**
 * @brief	���V�s���Ǘ�����_�C�A���O�ł��B<br />
  *			�u�I���v�{�^������������ƃ_�C�A���O����A�A�v���P�[�V�������I�����܂��B
 */
class CRecipeApplicationDlg :
	public CDialogEx
{
protected:
	HICON m_hIcon;			//!< �_�C�A���O�֕\������A�C�R��
	CStatic m_staticText;	//!< �_�C�A���O�ŕ������\������R���g���[��

public:
	/** @brief	�_�C�A���O�̃��\�[�XID */
	enum {
		IDD = IDD_RECIPEAPPLICATION_DIALOG
	};

	/** @brief	�R���X�g���N�^�[�ł��B */
	CRecipeApplicationDlg(
		CWnd* pParent = NULL	//!< [in]	�_�C�A���O�̐e�E�B���h�E�BNULL���w�肵���ꍇ�̓X�N���[�����e�ƂȂ�܂��B
		);

protected:
	/* CDialogEx */
	virtual void DoDataExchange( CDataExchange* pDX ) override;
	virtual BOOL OnInitDialog() override;

	// MFC�̃��b�Z�[�W�n���h��
	afx_msg void OnSysCommand( UINT nID, LPARAM lParam );
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	DECLARE_MESSAGE_MAP()

};
