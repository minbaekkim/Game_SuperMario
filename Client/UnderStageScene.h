#pragma once
#include "Scene.h"
class CUnderStageScene :public CScene
{
public:
	CUnderStageScene();
	virtual ~CUnderStageScene();

public:
	// CScene��(��) ���� ��ӵ�
	virtual void Initialize() override;
	virtual void Update() override;
	virtual void LateUpdate() override;
	virtual void Render(HDC hDC) override;
	virtual void Release() override;
};

