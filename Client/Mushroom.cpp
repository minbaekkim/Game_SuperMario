#include "stdafx.h"
#include "Mushroom.h"

CMushroom::CMushroom()
{
	m_eLayer = LayerID::ITEM;
}

CMushroom::~CMushroom()
{
}

void CMushroom::Initialize()
{
	m_bIsJump = false;
	m_bIsFall = false;
	m_fDir = 1.0f;
}

void CMushroom::LateInit()
{
	SetRangeValue(48, 48, 16, 16);

	m_hBrush = CreateSolidBrush(RGB(30, 200, 70));

}

int CMushroom::Update()
{
	CObj::LateInit();

	if (m_bIsDead)
		return DEAD_OBJ;
	if (0 == m_iState) {
		m_tInfo.fX += 3*m_fDir;
		isJumping();
	}

	return NO_EVENT;
}

void CMushroom::LateUpdate()
{
	if (m_tInfo.fX < 0 || m_tInfo.fX > MAINSTAGE_REAL_X)
		m_fDir *= -1.f;
}

void CMushroom::Render(HDC hDC)
{
	CObj::UpdateRect();

	int fScrollX = static_cast<int>(CScrollMgr::GetInstance()->GetScrollX());
	int fScrollY = static_cast<int>(CScrollMgr::GetInstance()->GetScrollY());

	HDC hMemDC = nullptr;
	CHECK_NULL(hMemDC = CBmpMgr::GetInstance()->FindImage(L"Item"));

	if (1 == IsShowCollider) {
		m_hPrev = (HBRUSH)SelectObject(hDC, m_hBrush);
		Rectangle(hDC, m_tRect.left + fScrollX, m_tRect.top + fScrollY, m_tRect.right + fScrollX, m_tRect.bottom + fScrollY);
		SelectObject(hDC, m_hPrev);
	}

	GdiTransparentBlt(hDC, m_tInfo.fX - RENDER_MULTIPLE / 2 * m_tRenInfo.fCX + fScrollX,
		m_tInfo.fY - RENDER_MULTIPLE / 2 * m_tRenInfo.fCY + fScrollY,
		(int)m_tRenInfo.fCX*RENDER_MULTIPLE, (int)m_tRenInfo.fCY*RENDER_MULTIPLE,
		hMemDC,
		0,
		0,
		(int)m_tRenInfo.fCX, (int)m_tRenInfo.fCY, EXCEPT_COLOR);
}

void CMushroom::isJumping()
{
	float fMoveY = m_tInfo.fY;
	bool bColl = CLineMgr::GetInstance()->LineCollision(m_tInfo.fX, &fMoveY, this);

	if (m_fPrevMoveY + 10.f < fMoveY) m_bIsFall = true;

	if (m_bIsJump)
	{
		m_tInfo.fY -= m_fJumpPow * m_fJumpAcc - GRAVITY * m_fJumpAcc * m_fJumpAcc * 0.5f;

		if (m_fJumpAcc < PLAYER_ACCEL_LIMIT) m_fJumpAcc += PLAYER_ACCEL_INC;

		if (bColl && m_tInfo.fY > fMoveY - m_tInfo.fCY * 0.5f) // 점프 도중 지면에 닿았을 때
		{
			if (m_fJumpPow * m_fJumpAcc - GRAVITY * m_fJumpAcc * m_fJumpAcc * 0.5f < 0) {
				m_bIsDead = true;
			}
		}
	}
	else if (m_bIsFall)
	{
		m_tInfo.fY += GRAVITY * m_fJumpAcc * m_fJumpAcc * 0.5f;
		if (m_fJumpAcc < PLAYER_ACCEL_LIMIT) m_fJumpAcc += PLAYER_ACCEL_INC;

		if (bColl && m_tInfo.fY > fMoveY - m_tInfo.fCY * 0.5f)
		{
			m_bIsFall = false;
			m_fJumpAcc = PLAYER_JUMP_INIT;
			m_tInfo.fY = fMoveY - m_tInfo.fCY * 0.5f;
		}
	}
	else if (bColl)
		m_tInfo.fY = fMoveY - m_tInfo.fCY * 0.5f;

	m_fPrevMoveY = fMoveY;
}

void CMushroom::Release()
{
}

void CMushroom::OnCollisionEnter(DirID::DIRECTION _dir, ObjectID::OBJID _objectID, int _iState)
{
	if (_objectID == ObjectID::PLAYER) {
		m_bIsDead = true;
	}
	else if (_objectID == ObjectID::OBSTACLE || _objectID == ObjectID::QUESTION_BOX) {
		if (_dir == DirID::LEFT) {
			m_fDir = 1.f;
		}
		else if (_dir == DirID::RIGHT) {
			m_fDir = -1.f;
		}
	}
	else if (_objectID == ObjectID::NOTE_BOX) {
		if (_dir == DirID::LEFT) {
			m_fDir = 1.f;
		}
		else if (_dir == DirID::RIGHT) {
			m_fDir = -1.f;
		}
	}
}
