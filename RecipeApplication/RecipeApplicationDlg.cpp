#include "stdafx.h"

#include "RecipeApplication.h"
#include "RecipeApplicationDlg.h"
#include "afxdialogex.h"
#include "Resource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CRecipeApplicationDlg::CRecipeApplicationDlg( CWnd* pParent )
: CDialogEx( CRecipeApplicationDlg::IDD, pParent )
{
	this->m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRecipeApplicationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control( pDX, IDC_STATIC_RECIPE, this->m_staticText );
}

BEGIN_MESSAGE_MAP(CRecipeApplicationDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()

BOOL CRecipeApplicationDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// このダイアログのアイコンを設定します。
	SetIcon( this->m_hIcon, TRUE );		// 大きいアイコンの設定
	SetIcon( this->m_hIcon, FALSE );	// 小さいアイコンの設定

	this->m_staticText.SetWindowText( _T("オムライス") );

	return TRUE;
}

void CRecipeApplicationDlg::OnSysCommand( UINT nID, LPARAM lParam )
{
	// メニューコマンドを追加した場合はここで下記のようにフックして実行します。
	//if( IDM_ABOUTBOX == ( nID & 0xFFF0 ) ){
	//	CAboutDlg dlgAbout;
	//	dlgAbout.DoModal();
	//}
	__super::OnSysCommand( nID, lParam );
}

void CRecipeApplicationDlg::OnPaint()
{
	if( IsIconic() ){
		// アイコンを描画します。

		// 描画デバイスコンテキストを作成する
		// WM_ICONERASEBKGNDを呼び出すことでデバイスコンテキストの初期化が行われます。
		CPaintDC dc( this );
		SendMessage( WM_ICONERASEBKGND, reinterpret_cast<WPARAM>( dc.GetSafeHdc() ), 0 );

		// クライアントの四角形領域内の中央を算出します。
		int cxIcon = GetSystemMetrics( SM_CXICON );
		int cyIcon = GetSystemMetrics( SM_CYICON );
		CRect rect;
		GetClientRect( &rect );
		int x = ( rect.Width() - cxIcon + 1 ) / 2;
		int y = ( rect.Height() - cyIcon + 1 ) / 2;
		dc.DrawIcon( x, y, this->m_hIcon );
	}else{
		__super::OnPaint();
	}
}

HCURSOR CRecipeApplicationDlg::OnQueryDragIcon()
{
	// ユーザーが最小化したウィンドウをドラッグしているときに表示するカーソルを取得するために、
	// システムがこの関数を呼び出します。
	return static_cast<HCURSOR>( this->m_hIcon );
}

