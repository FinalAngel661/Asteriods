#pragma once

#include "Base.h"
#include "sfwdraw.h"

class StartButton
{
public:
	void update(size_t * yeah)
	{
		if (sfw::getKey(KEY_ENTER))
			*yeah = 1;
	}
};
