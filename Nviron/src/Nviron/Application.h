#pragma once

#include "Core.h"
#include "Events/Event.h"

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
