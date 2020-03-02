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

#ifdef NV_ENABLE_ASSERTS
	#define NV_ASSERT(x, ...) { if(!(x)) { NV_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define	NV_CORE_ASSERT(x, ...) { if(!(x)) { NV_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define NV_ASSERT(x, ...)
	#define NV_CORE_ASSERT(x, ...)
#endif

#define BIT(x)	 (1 << x)
