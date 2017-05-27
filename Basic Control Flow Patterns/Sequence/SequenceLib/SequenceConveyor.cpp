#include "stdafx.h"
#include "SequenceConveyor.h"


void FlowPatterns::SequenceConveyor::pushBack(std::function<StageResult()> func)
{
	m_tasks.push_back(func);
}

void FlowPatterns::SequenceConveyor::pop()
{
	m_tasks.pop_back();
}

void FlowPatterns::SequenceConveyor::run()
{
	for (auto& func : m_tasks)
	{
		func();
	}
}
