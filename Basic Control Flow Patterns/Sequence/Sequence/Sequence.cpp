// Sequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SequenceConveyor.h"
#include <iostream>

int main()
{
	FlowPatterns::SequenceConveyor conveyor;
	conveyor.pushBack([]()->FlowPatterns::StageResult
	{
		std::cout << "First!\n";
		return FlowPatterns::StageResult::Success;
	});
	
	conveyor.pushBack([]()->FlowPatterns::StageResult
	{
		std::cout << "Second!\n";
		return FlowPatterns::StageResult::Success;
	});
	
	conveyor.pushBack([]()->FlowPatterns::StageResult
	{
		std::cout << "Third!\n";
		std::cin.get();
		return FlowPatterns::StageResult::Success;
	});

	conveyor.run();

    return 0;
}

