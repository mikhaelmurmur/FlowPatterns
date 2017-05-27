#pragma once
#include <list>
#include <functional>

class SequenceConveyor
{
public:
	SequenceConveyor() = default;
	SequenceConveyor(SequenceConveyor&&) = delete;
	SequenceConveyor(const SequenceConveyor&) = delete;
	~SequenceConveyor() = default;

	void pushBack(std::function<void()>);
	void pop();

	void run();

private:
	std::list<std::function<void()>> m_tasks;
};

