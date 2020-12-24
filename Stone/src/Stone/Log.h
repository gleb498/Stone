#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Stone
{
	class STONE_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;  }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core logger
#define ST_CORE_ERROR(...)	::Stone::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ST_CORE_WARN(...)	::Stone::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ST_CORE_INFO(...)	::Stone::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ST_CORE_TRACE(...)	::Stone::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ST_CORE_FATAL(...)	::Stone::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logger
#define ST_ERROR(...)	::Stone::Log::GetClientLogger()->error(__VA_ARGS__)
#define ST_WARN(...)	::Stone::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ST_INFO(...)	::Stone::Log::GetClientLogger()->info(__VA_ARGS__)
#define ST_TRACE(...)	::Stone::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ST_FATAL(...)	::Stone::Log::GetClientLogger()->fatal(__VA_ARGS__)

