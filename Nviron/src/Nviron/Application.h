#pragma once

#include "Core.h"

namespace Nviron {

	class NVIRON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

