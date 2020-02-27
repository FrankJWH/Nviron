#pragma once

#ifdef NV_PLATFORM_WINDOWS
	#ifdef NV_BUILD_DLL
		#define NVIRON_API __declspec(dllexport)
	#else
		#define NVIRON_API __declspec(dllimport)
	#endif
#else
	#error Nviron only supports Windows
#endif

#define BIT(x)	 (1 << x)
