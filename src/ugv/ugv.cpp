#include "ugv.h"

#include <string>

using namespace ugv;

const std::string& ugv::getString()
{
	static const std::string str("Hello, World!");
	return str;
}
