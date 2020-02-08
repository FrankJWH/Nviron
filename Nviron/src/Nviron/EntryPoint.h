#pragma once

// Move main to engine creator rather than Sandbox

#ifdef NV_PLATFORM_WINDOWS

extern Nviron::Application* Nviron::CreateApplication(); // found externally in SandboxApp.cpp

int main(int argc, char **argv) {
	Nviron::Log::Init();
	NV_CORE_WARN("Initialized log!");
	int a = 5;
	NV_CLIENT_INFO("Hello! Var={0}", a);

	auto app = Nviron::CreateApplication();
	app->Run();
	delete app;
}

#endif
