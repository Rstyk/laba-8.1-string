#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1 string/lab 8.1 string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace laba81string
{
	TEST_CLASS(laba81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "aaaabbccccdd";
			int result = Count(str);
			Assert::AreEqual(2, result);

		}
	};
}
