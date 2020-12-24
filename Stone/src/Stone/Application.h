#pragma once
#include "Core.h"
#include <stdio.h>

namespace Stone
{
	class STONE_API Application
	{
	public:
		Application();
		~Application();
		void Run();
	};

	Application* CreateApplication();
}

