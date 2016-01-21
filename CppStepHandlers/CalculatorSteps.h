// CalculatorSteps.h
#include "../CodeLibrary/TestFunction.h"

#pragma once

using namespace System;
using namespace TechTalk::SpecFlow;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace CppStepHandlers {

	[Binding()]
	public ref class CalculatorSteps
	{
	private:
		TestXYZ *item;
	public:
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

		[Given("I have entered (.*) into the calculator")]
		void GivenIHaveEnteredIntoTheCalculator(System::String ^p0)
		{
			item->Store(System::Int32::Parse(p0));
		}

		[When("I press add")]
		void WhenIPressAdd()
		{
			Assert::AreEqual(70, item->x);
		}

		[Then("the result should be (.*) on the screen")]
		void ThenTheResultShouldBeOnTheScreen(int p0)
		{
		}

	};
}
