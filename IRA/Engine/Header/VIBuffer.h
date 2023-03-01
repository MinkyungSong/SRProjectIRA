#pragma once

#include "Component.h"
#include "Include.h"

BEGIN(Engine)

class ENGINE_DLL CVIBuffer : public CComponent
{
protected:
	explicit CVIBuffer(void);
	explicit CVIBuffer(LPDIRECT3DDEVICE9 pGraphicDev);
	explicit CVIBuffer(const CVIBuffer& rhs);
	virtual ~CVIBuffer();

public:
	HRESULT		Ready_Buffer(void);
	void		Render_Buffer(void);

protected:
	LPDIRECT3DVERTEXBUFFER9			m_pVB;
	LPDIRECT3DINDEXBUFFER9			m_pIB;

	_ulong			m_dwVtxSize;
	_ulong			m_dwVtxCnt;
	_ulong			m_dwTriCnt;
	_ulong			m_dwFVF;

	_ulong			m_dwIdxSize;
	D3DFORMAT		m_IdxFmt;

public:
	virtual void Free(void) override;
};

END