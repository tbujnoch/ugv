#pragma once

#include <string>

#if defined UGV
	#define UGV_EXPORT __declspec(dllexport)
#else
	#define UGV_EXPORT __declspec(dllimport)
#endif

namespace ugv {
	
	UGV_EXPORT const std::string& getString();

}

#undef UGV_EXPORT