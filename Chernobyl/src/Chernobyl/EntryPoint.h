#pragma once

#ifdef CH_PLATFORM_WINDOWS
	Chernobyl::Application* CreateApplication();

	int main(int argc, char** argv) 
	{
		auto app = CreateApplication();
		app->Run();
		delete app;
	}

#endif
