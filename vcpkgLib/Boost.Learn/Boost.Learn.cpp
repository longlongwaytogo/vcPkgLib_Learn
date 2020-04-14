// Boost.Learn.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

#include <boost/shared_ptr.hpp>

using namespace std;
#include "Serialization/TSerialization.h" // ���л�
#include "Test/TTest.h" // ���Կ��


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

