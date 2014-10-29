/*
 * MainClass.cpp
 *  Created on: Oct 29, 2014
 *  Author: Mohamad Asadolahi
 *	CrazyMachine 2014;
 */

#include "MainClass.h"
#include <iostream>
using namespace std;
namespace CrazyMachine
	{

	} /* namespace CrazyMachine */

template<typename Ob> void print (const Ob& object)
	{
		cout << object << endl;
	}
template<typename Ob,typename... Objects> void print (
		const Ob& obj ,const Objects&... objects)
	{
		cout <<obj << endl;
		print<int >(objects...);
	}
//template<typename T>
//void print (const T& arg)
//	{
//		std::cout << arg << std::endl;
//	}
//template<typename T, typename ... Types>
//void print (const T& firstArg ,const Types&... args)
//	{
//		std::cout << firstArg << std::endl; // print first argument
//		print(args...);
//// call print() for remaining arguments
//	}
auto main ( )->int
	{
		print<int,int>(1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9);
		cout << endl << "program ended";
		return 0;
	}
