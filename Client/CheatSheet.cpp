//int iScrollX = static_cast<int>(CScrollMgr::GetInstance()->GetScrollX());
//int iScrollY = static_cast<int>(CScrollMgr::GetInstance()->GetScrollY());

//m_tFrame.iFrameStart = 0; // ���� ������
//m_tFrame.iFrameEnd = 2; // ������ �� ������
//m_tFrame.iScene = 1; // ����
//m_pFrameKey�� CX CY�� �� ��������� �Ѵ�.

//HBRUSH	m_hBrush;
//HBRUSH	m_hPrev;
//m_hBrush = CreateSolidBrush(RGB(0, 200, 0));
//m_hPrev = (HBRUSH)SelectObject(hDC, m_hBrush);
//Rectangle(hDC, m_tRect.left, m_tRect.top - (int)fScrollY, m_tRect.right, m_tRect.bottom - (int)fScrollY);
//SelectObject(hDC, m_hPrev);


//// �Ѿ� ���� ���
//TCHAR szBuf[32] = L"";
//
//// swprintf_s: �ι�° �μ��� ����° �μ��� ���յǾ� �ϼ��� ���ڿ��� ù��° �μ��� ����Ѵ�.
//swprintf_s(szBuf, L"Bullet: %d", m_ObjLst[ObjectID::BULLET].size());
//TextOut(m_hDC, 50, 50, szBuf, lstrlen(szBuf));

//POINT pt = {};
//
//// GetCursorPos: ���� ��ü ��ũ�� ���� ���콺 Ŀ���� ��ġ ������ ������ �Լ�.
//GetCursorPos(&pt);
//
//// ScreenToClient: ��ũ�� ��ǥ�� Ŭ���̾�Ʈ ��ǥ�� ��ȯ�ϴ� �Լ�.
//ScreenToClient(g_hWnd, &pt);

//GdiTransparentBlt(hDC, 0, 0, WINCX, WINCY,
//	hMemDC, m_tFrame.iFrameStart * (int)m_tRenInfo.fCX, m_tFrame.iScene * (int)m_tRenInfo.fCY,
//	(int)m_tRenInfo.fCX, (int)m_tRenInfo.fCY, RGB(0, 255, 0));

//GdiTransparentBlt(hDC, m_tRenRect.left + fScrollX, m_tRenRect.top + fScrollY, (int)m_tRenInfo.fCX, (int)m_tRenInfo.fCY,
//	hMemDC, m_tFrame.iFrameStart * (int)m_tRenInfo.fCX, m_tFrame.iScene * (int)m_tRenInfo.fCY,
//	(int)m_tRenInfo.fCX, (int)m_tRenInfo.fCY, RGB(0, 255, 0));
// ȭ�鿡 ������ ũ��, �̹������� �ҷ��� ũ��


//m_hPrev = (HBRUSH)SelectObject(hDC, m_hBrush);
//Rectangle(hDC, 0, 496, 800, 600);
//SelectObject(hDC, m_hPrev);
//
//GdiTransparentBlt(hDC, (WINCX - 232 * 3) / 2, WINCY - 28 * 3 - 10, 232 * 3, 28 * 3,
//	hUIMemDC, 3, 3,
//	232, 28, RGB(51, 200, 150));

//CSoundMgr::GetInstance()->PlayBGM(L"Intro.wav");
//CSoundMgr::GetInstance()->PlaySound(L"Shot.wav", CSoundMgr::EFFECT);
//CSoundMgr::GetInstance()->StopAll();
//CSoundMgr::GetInstance()->StopSound(CSoundMgr::EFFECT);

