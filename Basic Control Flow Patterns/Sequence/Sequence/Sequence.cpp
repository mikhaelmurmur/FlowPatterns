// Sequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SequenceConveyor.h"
#include <iostream>

int main()
{
	FPN::SequenceConveyor conveyor;

	conveyor.pushBack([]()->FPN::StageResult
	{
		std::cout << "First!\n";
		return FPN::StageResult::Success;
	});
	
	conveyor.pushBack([]()->FPN::StageResult
	{
		std::cout << "Second!\n";
		return FPN::StageResult::Success;
	});
	
	conveyor.pushBack([]()->FPN::StageResult
	{
		std::cout << "Third!\n";
		std::cin.get();
		return FPN::StageResult::Success;
	});

	conveyor.run();

    return 0;
}

