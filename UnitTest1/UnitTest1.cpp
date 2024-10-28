#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(CStandardTests)
	{
	public:

		TEST_METHOD(TestCountStars_CStandard)
		{
			Assert::AreEqual(1, CountStarsUsingC("abc***def"));
			Assert::AreEqual(1, CountStarsUsingC("abc**def***gh"));
			Assert::AreEqual(2, CountStarsUsingC("***abc***"));
			Assert::AreEqual(0, CountStarsUsingC("abc"));
		}

		TEST_METHOD(TestReplaceStars_CStandard)
		{
			char str1[] = "abc***def";
			Assert::AreEqual("abc!!def", ReplaceStarsUsingC(str1));

			char str2[] = "abc**def***gh";
			Assert::AreEqual("abc**def!!gh", ReplaceStarsUsingC(str2));

			char str3[] = "***abc***";
			Assert::AreEqual("!!abc!!", ReplaceStarsUsingC(str3));
		}
	};
}
