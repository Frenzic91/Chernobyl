#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Chernobyl {

	class CHERNOBYL_API Log
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

// Core logger macros
#define CH_CORE_CRITICAL(...) Chernobyl::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define CH_CORE_ERROR(...)    Chernobyl::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CH_CORE_WARN(...)     Chernobyl::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CH_CORE_INFO(...)     Chernobyl::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CH_CORE_TRACE(...)    Chernobyl::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client logger macros
#define CH_CRITICAL(...)    Chernobyl::Log::GetClientLogger()->critical(__VA_ARGS__)
#define CH_ERROR(...)       Chernobyl::Log::GetClientLogger()->error(__VA_ARGS__)
#define CH_WARN(...)        Chernobyl::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CH_INFO(...)        Chernobyl::Log::GetClientLogger()->info(__VA_ARGS__)
#define CH_TRACE(...)       Chernobyl::Log::GetClientLogger()->trace(__VA_ARGS__)

