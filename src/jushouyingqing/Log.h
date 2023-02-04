#pragma once

#include <memory>

#include "Core.h"

#include "spdlog/spdlog.h"

namespace jushouyingqing {

    class JUSHOUYINGQING_API Log
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

// Core的日志
#define HZ_CORE_ERROR(...) ::jushouyingqing::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_WARN(...)  ::jushouyingqing::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_INFO(...)  ::jushouyingqing::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_TRACE(...) ::jushouyingqing::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_FATAL(...) ::jushouyingqing::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client的日志
#define HZ_ERROR(...)	   ::jushouyingqing::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_WARN(...)       ::jushouyingqing::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_INFO(...)       ::jushouyingqing::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_TRACE(...)      ::jushouyingqing::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_FATAL(...)      ::jushouyingqing::Log::GetClientLogger()->fatal(__VA_ARGS__)