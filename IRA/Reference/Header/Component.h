#pragma once

#include "Base.h"
#include "Include.h"

BEGIN(Engine)

class ENGINE_DLL CComponent : public CBase
{
protected:
	explicit CComponent();
	explicit CComponent(LPDIRECT3DDEVICE9 pGraphicDev);
	explicit CComponent(const CComponent& rhs);
	virtual ~CComponent();

public:
	virtual		_int		Update_Component(const _float& fTimeDelta) { return 0; }
	virtual		void		LateUpdate_Component() {}
		 
protected:
	LPDIRECT3DDEVICE9			m_pGraphicDev;
	_bool						m_bClone;

public:
	virtual CComponent*		Clone(void) = 0;
	virtual void			Free(void)override;
};

END
