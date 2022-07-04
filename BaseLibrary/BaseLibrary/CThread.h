#pragma once
#include <thread>
#include <Windows.h>

class CThread
{
public:
	CThread() = default;
	virtual ~CThread() = default;

	virtual void Run() = 0;
	virtual void Stop() = 0;

protected:
	HANDLE m_hThread;
};

