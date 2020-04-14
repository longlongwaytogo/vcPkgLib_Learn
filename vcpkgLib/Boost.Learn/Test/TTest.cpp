#include "../stdafx.h"
#include "TTest.h"
#include <boost/test/included/unit_test.hpp>

class mystring {
	char* buffer;
	int length;
public:
	void setbuffer(char* s) { buffer = s; length = strlen(s); }
	char& operator[ ] (const int index) { return buffer[index]; }
	int size() { return length; }
};


TTest::TTest()
{
	cout << "start TTest" << endl;
	Test1();
}


TTest::~TTest()
{
	cout << "end TTest" << endl;
}

//BOOST_AUTO_TEST_SUITE(stringtest) // name of the test suite is stringtest
//
//BOOST_AUTO_TEST_CASE(test1)
//{
//	mystring s;
//	BOOST_CHECK(s.size() == 0);
//}
//
//BOOST_AUTO_TEST_CASE(test2)
//{
//	mystring s;
//	s.setbuffer("hello world");
//	BOOST_REQUIRE_EQUAL('h', s[0]); // basic test 
//}

//BOOST_AUTO_TEST_SUITE_END()

void TTest::Test1()
{
		//mystring s;
		//s.setbuffer("hello world");
		//BOOST_REQUIRE_EQUAL('h', s[0]); // basic test 
}

