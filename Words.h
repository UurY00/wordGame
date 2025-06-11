#pragma once
#include <string>
using namespace System;

public class Words {
public:
	int ID;
	std::string engWord;
	std::string turWord;
	std::string example;
	bool learned;
	int repeated = 0;




};