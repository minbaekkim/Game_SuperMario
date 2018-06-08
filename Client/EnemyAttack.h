#pragma once
#include "Obj.h"
class CEnemyAttack :public CObj
{
public:
	CEnemyAttack();
	~CEnemyAttack();

public:
	virtual void Initialize() override;
	virtual void LateInit() override;
	virtual int Update() override;
	virtual void LateUpdate() override;
	virtual void Render(HDC hDC) override;
	virtual void Release() override;
	virtual void OnCollisionEnter(DirID::DIRECTION _dir, ObjectID::OBJID _objectID, int _iState) override;
};

