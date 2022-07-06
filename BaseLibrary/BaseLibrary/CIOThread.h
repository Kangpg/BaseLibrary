#pragma once
#include "CThread.h"
#include <vector>

class CIOThread final : public CThread
{
public:
	CIOThread() = default;
	virtual ~CIOThread() = default;
	
	virtual void Run()
	{
		while (true)
		{
			this_thread::sleep_for(chrono::milliseconds(50));

			LPOVERLAPPED pOverLapped;
		}
	}

protected:
	
};

