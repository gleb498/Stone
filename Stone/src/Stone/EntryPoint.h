#pragma once
#ifdef ST_PLATFORM_WINDOWS
	extern Stone::Application* Stone::CreateApplication();
	int main(int argc, char** argv)
	{
		auto app = Stone::CreateApplication();
		app->Run();
		delete app;
	}
#endif