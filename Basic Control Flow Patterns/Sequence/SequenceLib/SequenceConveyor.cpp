#include "stdafx.h"
#include "SequenceConveyor.h"


void FPN::SequenceConveyor::pushBack(std::function<StageResult()> func)
{
	m_tasks.push_back(func);
}

void FPN::SequenceConveyor::pop()
{
	m_tasks.pop_back();
}

void FPN::SequenceConveyor::run()
{
	for (auto& func : m_tasks)
	{
		func();
	}
}
