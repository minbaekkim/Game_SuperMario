#pragma once
#include "Scene.h"
class CFinalStageScene :
	public CScene
{
public:
	CFinalStageScene();
	virtual ~CFinalStageScene();

public:
	// CScene��(��) ���� ��ӵ�
	virtual void Initialize() override;
	virtual void Update() override;
	virtual void LateUpdate() override;
	virtual void Render(HDC hDC) override;
	virtual void Release() override;

public:
	bool m_bFinalBossOn;
};

