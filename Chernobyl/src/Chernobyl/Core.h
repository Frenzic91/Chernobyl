#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHERNOBYL_API __declspec(dllexport)
	#else
		#define CHERNOBYL_API __declspec(dllimport)
	#endif
#else
	#error Chernobyl only supports Windows!
#endif