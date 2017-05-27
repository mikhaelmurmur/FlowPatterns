#pragma once
#include <list>
#include <functional>
#include "FlowTypes.h"

namespace FlowPatterns
{
	class SequenceConveyor
	{
	public:
		SequenceConveyor() = default;
		SequenceConveyor(SequenceConveyor&&) = delete;
		SequenceConveyor(const SequenceConveyor&) = delete;
		~SequenceConveyor() = default;

		void pushBack(std::function<StageResult()>);
		void pop();

		void run();

	private:
		std::list<std::function<StageResult()>> m_tasks;
	};
}