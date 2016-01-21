#include "stdafx.h"

#include "Context.h"

using namespace System;
using namespace TechTalk::SpecFlow;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace CppStepHandlers {

	[Binding()]
	public ref class CalculatorSteps
	{
	public:

		[Given("I have entered (.*) into the calculator")]
		void GivenIHaveEnteredIntoTheCalculator(System::String ^p0)
		{
			Context::item->Store(System::Int32::Parse(p0));
		}

		[When("I press add")]
		void WhenIPressAdd()
		{
			Assert::AreEqual(70, Context::item->x);
		}

		[Then("the result should be (.*) on the screen")]
		void ThenTheResultShouldBeOnTheScreen(int p0)
		{
		}

	};
}