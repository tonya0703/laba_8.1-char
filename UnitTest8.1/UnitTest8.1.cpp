#include "pch.h"
#include "CppUnitTest.h"
#include "../ap_8.1 char/8.1 char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[] = "BASIC";
			const char find[] = "B";
			int result[1] = { 0 };

			Count(s, find, result);
			int expected_result = 1;
			Assert::AreEqual(result[0], expected_result);
		}
	};
}
