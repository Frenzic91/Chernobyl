#pragma once

#ifdef CH_PLATFORM_WINDOWS
	Chernobyl::Application* CreateApplication();

	int main(int argc, char** argv) 
	{
		Chernobyl::Log::Init();
		CH_CORE_WARN("Log initialized");
		int v = 2;
		CH_INFO("var = {0}", v);
		auto app = CreateApplication();
		app->Run();
		delete app;
	}

#endif
