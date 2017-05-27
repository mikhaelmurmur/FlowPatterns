// Sequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SequenceConveyor.h"
#include <iostream>

int main()
{
	SequenceConveyor conveyor;
	conveyor.pushBack([]()
	{
		std::cout << "First!\n";
	});
	
	conveyor.pushBack([]()
	{
		std::cout << "Second!\n";
	});
	
	conveyor.pushBack([]()
	{
		std::cout << "Third!\n";
		std::cin.get();
		std::cin.get();
	});

	conveyor.run();

    return 0;
}

