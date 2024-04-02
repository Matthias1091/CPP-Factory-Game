// 3.cpp
#include "Window.h"
#include <SFML/Graphics.hpp>


void Window::create_objects() {
    


 
        //sf::RenderWindow window(sf::VideoMode(1000, 600), "SFML Window");

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) window.close();

                if (event.type == sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        onclick(window);
                    }
                }
            }

            window.clear(sf::Color::White);
            // Joystick and player
            BtnLeft.draw(window, font);
            BtnRight.draw(window, font);
            BtnUp.draw(window, font);
            BtnDown.draw(window, font);
            BtnJoyMenu.draw(window, font);

            BtnPlayer.draw(window, font);
            Game.draw(window, font);
            Settings.draw(window, font);
            Menu.draw(window, font);
            Data.draw(window, font);
            SocialMedia.draw(window, font);
            WindowClose.draw(window, font);

            NewGame.draw(window, font);
            LoadGame.draw(window, font);
            SaveGame.draw(window, font);
            Gamefiles.draw(window, font);

            Sound.draw(window, font);
            Colors.draw(window, font);
            Keybindings.draw(window, font);
            Graphic.draw(window, font);
            Language.draw(window, font);
            Gui.draw(window, font);

            Build.draw(window, font);
            Science.draw(window, font);
            Inventory.draw(window, font);
            Crafting.draw(window, font);
            Recipes.draw(window, font);
            Terminal.draw(window, font);
            Quests.draw(window, font);
            Archivments.draw(window, font);

            PowerData.draw(window, font);
            MashineData.draw(window, font);
            Performance.draw(window, font);
            Enviroment.draw(window, font);

            Discord.draw(window, font);

            SoundMaster.draw(window, font);
            SoundMusic.draw(window, font);
            SoundFx.draw(window, font);
            SoundPlayer.draw(window, font);
            SoundEnemies.draw(window, font);
            SoundMashines.draw(window, font);

            ColorPalette1.draw(window, font);
            ColorPalette2.draw(window, font);
            ColorPalette3.draw(window, font);
            ColorPalette4.draw(window, font);
            ColorPalette5.draw(window, font);
            ColorPalette6.draw(window, font);

            // Build Menu
            Defense.draw(window, font);
            Farming.draw(window, font);
            Fluids.draw(window, font);
            Logic.draw(window, font);
            Logistics.draw(window, font);
            Mashines.draw(window, font);
            MeSystem.draw(window, font);
            Power.draw(window, font);
            Robotics.draw(window, font);
            Steel.draw(window, font);
            Vehicles.draw(window, font);
            AirSystem.draw(window, font);

            // Buid: Defense
            WallSmallMk1.draw(window, font);
            WallSmallMk2.draw(window, font);
            WallSmallMk3.draw(window, font);
            WallSmallMk4.draw(window, font);
            WallSmallMk5.draw(window, font);

            WallBigMk1.draw(window, font);
            WallBigMk2.draw(window, font);
            WallBigMk3.draw(window, font);
            WallBigMk4.draw(window, font);
            WallBigMk5.draw(window, font);

            GateSmallMk1.draw(window, font);
            GateSmallMk2.draw(window, font);
            GateSmallMk3.draw(window, font);
            GateSmallMk4.draw(window, font);
            GateSmallMk5.draw(window, font);

            GateBigMk1.draw(window, font);
            GateBigMk2.draw(window, font);
            GateBigMk3.draw(window, font);
            GateBigMk4.draw(window, font);
            GateBigMk5.draw(window, font);

            TurretSingleMk1.draw(window, font);
            TurretSingleMk2.draw(window, font);
            TurretSingleMk3.draw(window, font);
            TurretSingleMk4.draw(window, font);
            TurretSingleMk5.draw(window, font);

            TurretDoubleMk1.draw(window, font);
            TurretDoubleMk2.draw(window, font);
            TurretDoubleMk3.draw(window, font);
            TurretDoubleMk4.draw(window, font);
            TurretDoubleMk5.draw(window, font);

            ElectricSingleTurret.draw(window, font);
            ElectricDoubleTurret.draw(window, font);
            ElectricMirrorL.draw(window, font);
            ElectricMirrorT.draw(window, font);
            ElectricTunnel.draw(window, font);
            ElectricRepeater.draw(window, font);
            
            ElectricCoalGeneratorMk1.draw(window, font);
            ElectricCoalGeneratorMk2.draw(window, font);
            ElectricCoalGeneratorMk3.draw(window, font);
            ElectricCoalGeneratorMk4.draw(window, font);
            ElectricCoalGeneratorMk5.draw(window, font);

            ElectricLavaGeneratorMk1.draw(window, font);
            ElectricLavaGeneratorMk2.draw(window, font);
            ElectricLavaGeneratorMk3.draw(window, font);
            ElectricLavaGeneratorMk4.draw(window, font);
            ElectricLavaGeneratorMk5.draw(window, font);


            // Build Farming
            FarmingStation.draw(window, font);
            FarmingHarvester.draw(window, font);
            FarmingTerminal.draw(window, font);
            FarmingField.draw(window, font);
            FarmingGenerator.draw(window, font);
            FarmingSeeder.draw(window, font);
            FarmingComposter.draw(window, font);

            FarmingPipeStraight.draw(window, font);
            FarmingPipeLeft.draw(window, font);
            FarmingPipeRight.draw(window, font);
            FarmingPipeTunnel.draw(window, font);
            FarmingPipeSplitter.draw(window, font);
            FarmingPipeMerger.draw(window, font);

            FarmingFluidPump.draw(window, font);
            FarmingFluidTank.draw(window, font);
            FarmingFluidIrrigator.draw(window, font);
            FarmingFluidMixer.draw(window, font);


            window.display();

        }




}
