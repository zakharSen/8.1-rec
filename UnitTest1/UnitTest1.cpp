#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1 rec/8.1 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "abcabcabc";
			int res;
			res = Count(str);
			Assert::AreEqual(res, 3);
		}
	};
}
