#pragma once

#include "resource.h"		// ���C�� �V���{��

/**
 * @brief	�A�v���P�[�V�����N���X�ł��B<br />
 *			�_�C�A���O��\�����A���V�s�𑀍삵�܂��B
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
