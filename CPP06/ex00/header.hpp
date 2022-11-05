#pragma once

#include <iostream>
#include <stdbool.h>
#include <string>
#include <ctype.h>
#include <string>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void	printSpecialFloat(std::string str);
void	printSpecialDouble(std::string str);
void	printInt(std::string str);
void	printChar(std::string str);
void	printFloat(std::string str);
void	printDouble(std::string str);
void	printSpecialInvalid(void);

bool	detectChar(std::string str);
bool	detectInt(std::string str);
bool	detectFloat(std::string str);
bool	detectDouble(std::string str);
bool	detectSpecialFloat(std::string str);
bool	detectSpecialDouble(std::string str);
