#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
#endif

#include "targetver.h"

// �ꕔ�� CString �R���X�g���N�^�[�͖����I�ł��B
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

// ��ʓI�Ŗ������Ă����S�� MFC �̌x�����b�Z�[�W�̈ꕔ�̔�\�����������܂��B
#define _AFX_ALL_WARNINGS

#include <afxwin.h>		// MFC �̃R�A����ѕW���R���|�[�l���g
#include <afxext.h>		// MFC �̊g������
#include <afxdisp.h>	// MFC �I�[�g���[�V���� �N���X

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>	// MFC �� Internet Explorer 4 �R���� �R���g���[�� �T�|�[�g
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>		// MFC �� Windows �R���� �R���g���[�� �T�|�[�g
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>	// MFC �ɂ����郊�{���ƃR���g���[�� �o�[�̃T�|�[�g









#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif

