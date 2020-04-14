// Boost.Learn.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <boost/shared_ptr.hpp>

using namespace std;
#include "Serialization/TSerialization.h" // 序列化
#include "Test/TTest.h" // 测试框架


int main()
{
	boost::shared_ptr<int> pI(new int);
	*pI = 32;

	cout << pI <<" ,*pI:"<<*pI<< endl;

	{ // serialization

	}

	{ // test 

		 TTest();
		
	}

    return 0;
}

