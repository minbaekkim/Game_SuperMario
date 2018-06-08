#pragma once

typedef struct tagInfo
{
	float fX;
	float fY;
	float fCX;
	float fCY;
}INFO;

typedef struct tagStat
{
	float fAttack;
	float fHp;
	float fMaxHp;
}STAT;

typedef struct tagLinePos
{
	tagLinePos()
		: fX(0.f), fY(0.f) {}

	tagLinePos(float x, float y)
		: fX(x), fY(y) {}

	float fX;
	float fY;
}LINEPOS;


typedef struct tagLineInfo
{
	tagLineInfo()
		: tLPoint({}), tRPoint({}) {}

	tagLineInfo(const LINEPOS& tLeft, const LINEPOS& tRight)
		: tLPoint(tLeft), tRPoint(tRight) {}

	LINEPOS tLPoint;
	LINEPOS tRPoint;
}LINEINFO;

typedef struct tagFrame
{
	int iFrameStart;	// ��������Ʈ �̹����� x���� ������
	int iFrameEnd;		// ��������Ʈ �̹����� x���� ����
	int iScene;			// ��������Ʈ �̹����� y���� ������

	DWORD dwFrameOld;	// �ִϸ��̼� ����� ���۵Ǹ� �帣�� �ð�.
	DWORD dwFrameSpd;	// ��� �ӵ�
}FRAME;

typedef struct tagAdjust
{
	int iAxisMoveX;
	int iAxisMoveY;
	int iMarginX;
	int iMarginY;


}ADJUST;