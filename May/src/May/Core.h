#pragma once

#ifdef MAY_PLATFORM_WINDOWS
	#ifdef MAY_BUILD_DLL
		#define MAY_API __declspec(dllexport)
	#else
		#define MAY_API __declspec(dllimport)
	#endif // MAY_BUILD_DLL
#else
	#error May only supports Windows!
#endif // MAY_PLATFORM_WINDOWS
