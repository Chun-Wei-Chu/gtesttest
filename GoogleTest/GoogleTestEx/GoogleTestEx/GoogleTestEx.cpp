// GoogleTestEx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "gtest/gtest.h"
#include <string>

int Foo(int a, int b)
{
	if (a == 0 || b == 0)
	{
		throw "don't do that";
	}
	int c = a % b;
	if (c == 0)
		return b;
	return Foo(b, c);
}

TEST(FooTest1, HandleNoneZeroInput)
{
	EXPECT_EQ(2, Foo(4, 10));
	EXPECT_EQ(6, Foo(30, 18));
}

TEST(FooTest2, HandleNoneZeroInput)
{
	EXPECT_EQ(2, Foo(4, 10));
	EXPECT_EQ(6, Foo(30, 18));
}

TEST(FooTest3, HandleNoneZeroInput)
{
	EXPECT_EQ(2, Foo(4, 10));
	EXPECT_EQ(99, Foo(30, 18));
}

TEST(FooTest4, HandleNoneZeroInput)
{
	EXPECT_EQ(2, Foo(4, 10));
	EXPECT_EQ(5, Foo(30, 18));
}

TEST(FooTest5, HandleNoneZeroInput)
{
	EXPECT_EQ(2, Foo(4, 10));
	EXPECT_EQ(3, Foo(30, 18));
}

TEST(FooTest6, HandleNoneZeroInput)
{
	EXPECT_EQ(7, Foo(4, 10));
	EXPECT_EQ(6, Foo(30, 18));
}

TEST(FooTest7, HandleNoneZeroInput)
{
	EXPECT_EQ(2, Foo(4, 10));
	EXPECT_EQ(6, Foo(30, 18));
}

int main(int argc, _TCHAR* argv[])
{
	testing::GTEST_FLAG(output) = "xml:GTEST.xml";
	testing::InitGoogleTest(&argc, argv);
	auto a = RUN_ALL_TESTS();
	return a;
}

