using System;
using TechTalk.SpecFlow;

namespace Specification
{
    [Binding]
    public class CalculateSteps
    {
        [Given(@"xyz")]
        public void GivenXyz()
        {
            ScenarioContext.Current.Add("Hello", "World");
        }
    }
}
