#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define	JUSHOUYINGQING_API __declspec(dllexport)
	#else
		#define	JUSHOUYINGQING_API __declspec(dllimport)
	#endif
#else
	#error jushouyingqing only support Windows!
#endif
