#include "stdafx.h"
#include "TestRect.h"
#include "Rectangle.h"


TestRect::TestRect()
{
}


TestRect::~TestRect()
{
}

bool TestRect::tester(Rectangle &r)
{
	bool testResult = false;
	if (r.width > 0 && r.length > 0)
		testResult = true;

	return testResult;
}
