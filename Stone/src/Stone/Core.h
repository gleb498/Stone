#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define STONE_API __declspec(dllexport)
	#else
		#define STONE_API __declspec(dllimport)
	#endif // ST_BUILD_DLL
#else
	#error Stone only supports Windows!
#endif // ST_PLATFORM_WINDOWS
