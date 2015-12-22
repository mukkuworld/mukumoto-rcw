#pragma once

/**
 * @brief	レシピを管理するダイアログです。<br />
  *			「終了」ボタンを押下するとダイアログを閉じ、アプリケーションを終了します。
 */
class CRecipeApplicationDlg :
	public CDialogEx
{
protected:
	HICON m_hIcon;			//!< ダイアログへ表示するアイコン
	CStatic m_staticText;	//!< ダイアログで文字列を表示するコントロール

public:
	/** @brief	ダイアログのリソースID */
	enum {
		IDD = IDD_RECIPEAPPLICATION_DIALOG
	};

	/** @brief	コンストラクターです。 */
	CRecipeApplicationDlg(
		CWnd* pParent = NULL	//!< [in]	ダイアログの親ウィンドウ。NULLを指定した場合はスクリーンが親となります。
		);

protected:
	/* CDialogEx */
	virtual void DoDataExchange( CDataExchange* pDX ) override;
	virtual BOOL OnInitDialog() override;

	// MFCのメッセージハンドル
	afx_msg void OnSysCommand( UINT nID, LPARAM lParam );
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	DECLARE_MESSAGE_MAP()

};
