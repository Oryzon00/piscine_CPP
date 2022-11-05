#pragma once
#include <stdint.h>
#include <string>
#include <iostream>

typedef	struct s_Data
{
	int a;
	int b;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
