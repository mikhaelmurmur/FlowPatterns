#include "stdafx.h"
#include "SequenceConveyor.h"

void SequenceConveyor::pushBack(std::function<void()> func)
{
	m_tasks.push_back(func);
}

void SequenceConveyor::pop()
{
	m_tasks.pop_back();
}

void SequenceConveyor::run()
{
	for (auto& func : m_tasks)
	{
		func();
	}
}
