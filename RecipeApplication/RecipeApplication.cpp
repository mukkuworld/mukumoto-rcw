#include "stdafx.h"
#include "RecipeApplication.h"

#include "RecipeApplicationDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CRecipeApplicationApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

CRecipeApplicationApp::CRecipeApplicationApp()
: CWinApp()
{
	// 再起動マネージャーをサポートするためのおまじないです。
	this->m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;
}

// 唯一の CRecipeApplicationApp オブジェクトです。
CRecipeApplicationApp theApp;

BOOL CRecipeApplicationApp::InitInstance()
{
	// アプリケーション マニフェストが visual スタイルを有効にするために、
	// ComCtl32.dll Version 6 以降の使用を指定する場合は、
	// Windows XP に InitCommonControlsEx() が必要です。さもなければ、ウィンドウ作成はすべて失敗します。
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// アプリケーションで使用するすべてのコモン コントロール クラスを含めるには、
	// これを設定します。
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx( &InitCtrls );

	CWinApp::InitInstance();
	AfxEnableControlContainer();

	// ダイアログにシェル ツリー ビューまたはシェル リスト ビュー コントロールが
	// 含まれている場合にシェル マネージャーを作成します。
	CShellManager *pShellManager = new CShellManager;

	// MFC コントロールでテーマを有効にするために、"Windows ネイティブ" のビジュアル マネージャーをアクティブ化
	CMFCVisualManager::SetDefaultManager( RUNTIME_CLASS( CMFCVisualManagerWindows ) );

	// 標準初期化
	// これらの機能を使わずに最終的な実行可能ファイルの
	// サイズを縮小したい場合は、以下から不要な初期化
	// ルーチンを削除してください。
	// 設定が格納されているレジストリ キーを変更します。
	// TODO: 会社名または組織名などの適切な文字列に
	// この文字列を変更してください。
	//SetRegistryKey(_T("アプリケーション ウィザードで生成されたローカル アプリケーション"));

	CRecipeApplicationDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if( IDOK == nResponse ){
		// ダイアログが「終了」ボタンで消された時のコードを記述してください。
	}else if( IDCANCEL == nResponse ){
		// ダイアログが「キャンセル」ボタンで消された時のコードを記述してください。
	}else if(nResponse == -1){
		// ダイアログの生成時にエラーが起きた場合のコードを記述してください。
		TRACE(traceAppMsg, 0, "警告: ダイアログの作成に失敗しました。アプリケーションは予期せずに終了します。\n");
		TRACE(traceAppMsg, 0, "警告: ダイアログで MFC コントロールを使用している場合、#define _AFX_NO_MFC_CONTROLS_IN_DIALOGS を指定できません。\n");
	}

	// 上で作成されたシェル マネージャーを削除します。
	if( nullptr != pShellManager ){
		delete pShellManager;
	}
	// アプリケーションのメッセージ ポンプを開始しないでアプリケーションを終了するために FALSE を返してください。
	return FALSE;
}

