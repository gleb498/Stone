#pragma once

#ifdef ST_PLATFORM_WINDOWS
	extern Stone::Application* Stone::CreateApplication();
	int main(int argc, char** argv)
	{
		Stone::Log::Init();
		ST_CORE_WARN("Init!");
		auto app = Stone::CreateApplication();
		app->Run();
		ST_INFO("Text was written!");
		delete app;
	}
#endif