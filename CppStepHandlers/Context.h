#pragma once

#include "../CodeLibrary/TestFunction.h"

using namespace TechTalk::SpecFlow;

namespace CppStepHandlers {

	[Binding()]
	public ref class Context
	{
	public:
		static TestXYZ *item;

		[BeforeScenario()]
		void ScenarioBegin()
		{
			item = new TestXYZ();
		}

		[AfterScenario()]
		void ScenarioEnd()
		{
			delete item;
		}

	};
}