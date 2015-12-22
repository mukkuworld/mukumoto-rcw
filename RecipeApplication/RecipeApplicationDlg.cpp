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

	// ���̃_�C�A���O�̃A�C�R����ݒ肵�܂��B
	SetIcon( this->m_hIcon, TRUE );		// �傫���A�C�R���̐ݒ�
	SetIcon( this->m_hIcon, FALSE );	// �������A�C�R���̐ݒ�

	this->m_staticText.SetWindowText( _T("�I�����C�X") );

	return TRUE;
}

void CRecipeApplicationDlg::OnSysCommand( UINT nID, LPARAM lParam )
{
	// ���j���[�R�}���h��ǉ������ꍇ�͂����ŉ��L�̂悤�Ƀt�b�N���Ď��s���܂��B
	//if( IDM_ABOUTBOX == ( nID & 0xFFF0 ) ){
	//	CAboutDlg dlgAbout;
	//	dlgAbout.DoModal();
	//}
	__super::OnSysCommand( nID, lParam );
}

void CRecipeApplicationDlg::OnPaint()
{
	if( IsIconic() ){
		// �A�C�R����`�悵�܂��B

		// �`��f�o�C�X�R���e�L�X�g���쐬����
		// WM_ICONERASEBKGND���Ăяo�����ƂŃf�o�C�X�R���e�L�X�g�̏��������s���܂��B
		CPaintDC dc( this );
		SendMessage( WM_ICONERASEBKGND, reinterpret_cast<WPARAM>( dc.GetSafeHdc() ), 0 );

		// �N���C�A���g�̎l�p�`�̈���̒������Z�o���܂��B
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
	// ���[�U�[���ŏ��������E�B���h�E���h���b�O���Ă���Ƃ��ɕ\������J�[�\�����擾���邽�߂ɁA
	// �V�X�e�������̊֐����Ăяo���܂��B
	return static_cast<HCURSOR>( this->m_hIcon );
}

