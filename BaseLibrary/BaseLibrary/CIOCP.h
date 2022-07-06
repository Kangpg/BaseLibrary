#pragma once

#include "CIOThread.h"
#include <vector>

class CIOCP final
{
public:
	CIOCP() = default;
	virtual ~CIOCP() = default;
	
protected:
	std::vector<shared_ptr<CIOThread>> _vecIOThreads;
};