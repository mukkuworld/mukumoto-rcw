#pragma once

#include "resource.h"		// メイン シンボル

/**
 * @brief	アプリケーションクラスです。<br />
 *			ダイアログを表示し、レシピを操作します。
 */
class CRecipeApplicationApp :
	public CWinApp
{
public:
	CRecipeApplicationApp();

	/* CWinApp */
	virtual BOOL InitInstance() override;

	DECLARE_MESSAGE_MAP()

};

extern CRecipeApplicationApp theApp;
