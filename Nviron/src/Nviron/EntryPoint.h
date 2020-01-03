#pragma once

// Move main to engine creator rather than Sandbox

#ifdef NV_PLATFORM_WINDOWS

extern Nviron::Application* Nviron::CreateApplication(); // found externally in SandboxApp.cpp

int main(int argc, char **argv) {
	printf("Welcome to Nviron: Game Ngine for the future");
	auto app = Nviron::CreateApplication();
	app->Run();
	delete app;
}

#endif
