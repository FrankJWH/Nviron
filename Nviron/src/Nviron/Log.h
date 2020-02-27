#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Nviron {

	class NVIRON_API Log
	{

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

///******	if production, define below MACROS to empty	******

/// core log MACROS
#define NV_CORE_TRACE(...)	::Nviron::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NV_CORE_INFO(...)		::Nviron::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NV_CORE_WARN(...)		::Nviron::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NV_CORE_ERROR(...)	::Nviron::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NV_CORE_FATAL(...)	::Nviron::Log::GetCoreLogger()->fatal(__VA_ARGS__)

/// client log MACROS
#define NV_CLIENT_TRACE(...)	::Nviron::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NV_CLIENT_INFO(...)	::Nviron::Log::GetClientLogger()->info(__VA_ARGS__)
#define NV_CLIENT_WARN(...)	::Nviron::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NV_CLIENT_ERROR(...)	::Nviron::Log::GetClientLogger()->error(__VA_ARGS__)
#define NV_CLIENT_FATAL(...)	::Nviron::Log::GetClientLogger()->fatal(__VA_ARGS__)
