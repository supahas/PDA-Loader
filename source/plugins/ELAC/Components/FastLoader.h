#pragma once
#include "EmulatorComponent.h"
#include "GameState.h"

namespace ELAC::Components
{
	class FastLoader : public EmulatorComponent
	{
	public:
		FastLoader();
		~FastLoader();

		virtual const char* GetDisplayName() override;

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void UpdateInput() override;

	private:
		const int updatesPerFrame = 39;
		
		GameState currentGameState;
		GameState previousGameState;
		bool dataInitialized = false;
	};
}
