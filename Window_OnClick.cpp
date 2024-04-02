// 4.cpp
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "Window.h"



void Window::onclick(sf::RenderWindow& window) {
    

    // Menü leiste
    if (WindowClose.isMouseOver(window) && WindowClose.onclick_name == "WindowClose") {
        window.close();
    }

    if (Game.isMouseOver(window) && Game.onclick_name == "Game") {
        LoadGame.setVisibility(!LoadGame.visibility);
        SaveGame.setVisibility(!SaveGame.visibility);
        NewGame.setVisibility(!NewGame.visibility);
        Gamefiles.setVisibility(!Gamefiles.visibility);
    }

    if (Settings.isMouseOver(window) && Settings.onclick_name == "Settings") {
        Sound.setVisibility(!Sound.visibility);
        Colors.setVisibility(!Colors.visibility);
        Keybindings.setVisibility(!Keybindings.visibility);
        Graphic.setVisibility(!Graphic.visibility);
        Language.setVisibility(!Language.visibility);
        Gui.setVisibility(!Gui.visibility);
    }

    if (Menu.isMouseOver(window) && Menu.onclick_name == "Menu") {
        Build.setVisibility(!Build.visibility);
        Science.setVisibility(!Science.visibility);
        Inventory.setVisibility(!Inventory.visibility);
        Crafting.setVisibility(!Crafting.visibility);
        Recipes.setVisibility(!Recipes.visibility);
        Terminal.setVisibility(!Terminal.visibility);
        Quests.setVisibility(!Quests.visibility);
        Archivments.setVisibility(!Archivments.visibility);
    }

    if (Data.isMouseOver(window) && Data.onclick_name == "Data") {
        PowerData.setVisibility(!PowerData.visibility);
        MashineData.setVisibility(!MashineData.visibility);
        Performance.setVisibility(!Performance.visibility);
        Enviroment.setVisibility(!Enviroment.visibility);
    }

    if (SocialMedia.isMouseOver(window) && SocialMedia.onclick_name == "SocialMedia") {
        Discord.setVisibility(!Discord.visibility);
    }

    // ============================================================================================================================
    // Sound System
    if (Sound.isMouseOver(window) && Sound.onclick_name == "Sound") {
        SoundMaster.setVisibility(!SoundMaster.visibility);
        SoundMusic.setVisibility(!SoundMusic.visibility);
        SoundFx.setVisibility(!SoundFx.visibility);
        SoundPlayer.setVisibility(!SoundPlayer.visibility);
        SoundEnemies.setVisibility(!SoundEnemies.visibility);
        SoundMashines.setVisibility(!SoundMashines.visibility);
    }
    // ============================================================================================================================
    // Color System
    if (Colors.isMouseOver(window) && Colors.onclick_name == "Colors") {
        ColorPalette1.setVisibility(!ColorPalette1.visibility);
        ColorPalette2.setVisibility(!ColorPalette2.visibility);
        ColorPalette3.setVisibility(!ColorPalette3.visibility);
        ColorPalette4.setVisibility(!ColorPalette4.visibility);
        ColorPalette5.setVisibility(!ColorPalette5.visibility);
        ColorPalette6.setVisibility(!ColorPalette6.visibility);
    }

    // ============================================================================================================================
    // Build Menu
    if (Build.isMouseOver(window) && Build.onclick_name == "Build") {
        Defense.setVisibility(!Defense.visibility);
        Farming.setVisibility(!Farming.visibility);
        Fluids.setVisibility(!Fluids.visibility);
        Logic.setVisibility(!Logic.visibility);
        Logistics.setVisibility(!Logistics.visibility);
        Mashines.setVisibility(!Mashines.visibility);
        MeSystem.setVisibility(!MeSystem.visibility);
        Power.setVisibility(!Power.visibility);
        Robotics.setVisibility(!Robotics.visibility);
        Steel.setVisibility(!Steel.visibility);
        Vehicles.setVisibility(!Vehicles.visibility);
        AirSystem.setVisibility(!AirSystem.visibility);
    }

    // Build defense
    if (Defense.isMouseOver(window) && Defense.onclick_name == "Defense") {

        //for (auto& item : buildDefense) {
        //    item.setVisibility(!item);
        //}

        
        WallSmallMk1.setVisibility(!WallSmallMk1.visibility);
        WallSmallMk2.setVisibility(!WallSmallMk2.visibility);
        WallSmallMk3.setVisibility(!WallSmallMk3.visibility);
        WallSmallMk4.setVisibility(!WallSmallMk4.visibility);
        WallSmallMk5.setVisibility(!WallSmallMk5.visibility);

        WallBigMk1.setVisibility(!WallBigMk1.visibility);
        WallBigMk2.setVisibility(!WallBigMk2.visibility);
        WallBigMk3.setVisibility(!WallBigMk3.visibility);
        WallBigMk4.setVisibility(!WallBigMk4.visibility);
        WallBigMk5.setVisibility(!WallBigMk5.visibility);

        GateSmallMk1.setVisibility(!GateSmallMk1.visibility);
        GateSmallMk2.setVisibility(!GateSmallMk2.visibility);
        GateSmallMk3.setVisibility(!GateSmallMk3.visibility);
        GateSmallMk4.setVisibility(!GateSmallMk4.visibility);
        GateSmallMk5.setVisibility(!GateSmallMk5.visibility);

        GateBigMk1.setVisibility(!GateBigMk1.visibility);
        GateBigMk2.setVisibility(!GateBigMk2.visibility);
        GateBigMk3.setVisibility(!GateBigMk3.visibility);
        GateBigMk4.setVisibility(!GateBigMk4.visibility);
        GateBigMk5.setVisibility(!GateBigMk5.visibility);

        TurretSingleMk1.setVisibility(!TurretSingleMk1.visibility);
        TurretSingleMk2.setVisibility(!TurretSingleMk2.visibility);
        TurretSingleMk3.setVisibility(!TurretSingleMk3.visibility);
        TurretSingleMk4.setVisibility(!TurretSingleMk4.visibility);
        TurretSingleMk5.setVisibility(!TurretSingleMk5.visibility);

        TurretDoubleMk1.setVisibility(!TurretDoubleMk1.visibility);
        TurretDoubleMk2.setVisibility(!TurretDoubleMk2.visibility);
        TurretDoubleMk3.setVisibility(!TurretDoubleMk3.visibility);
        TurretDoubleMk4.setVisibility(!TurretDoubleMk4.visibility);
        TurretDoubleMk5.setVisibility(!TurretDoubleMk5.visibility);

        ElectricSingleTurret.setVisibility(!ElectricSingleTurret.visibility);
        ElectricDoubleTurret.setVisibility(!ElectricDoubleTurret.visibility);
        ElectricMirrorL.setVisibility(!ElectricMirrorL.visibility);
        ElectricMirrorT.setVisibility(!ElectricMirrorT.visibility);
        ElectricTunnel.setVisibility(!ElectricTunnel.visibility);
        ElectricRepeater.setVisibility(!ElectricRepeater.visibility);

        ElectricCoalGeneratorMk1.setVisibility(!ElectricCoalGeneratorMk1.visibility);
        ElectricCoalGeneratorMk2.setVisibility(!ElectricCoalGeneratorMk2.visibility);
        ElectricCoalGeneratorMk3.setVisibility(!ElectricCoalGeneratorMk3.visibility);
        ElectricCoalGeneratorMk4.setVisibility(!ElectricCoalGeneratorMk4.visibility);
        ElectricCoalGeneratorMk5.setVisibility(!ElectricCoalGeneratorMk5.visibility);

        ElectricLavaGeneratorMk1.setVisibility(!ElectricLavaGeneratorMk1.visibility);
        ElectricLavaGeneratorMk2.setVisibility(!ElectricLavaGeneratorMk2.visibility);
        ElectricLavaGeneratorMk3.setVisibility(!ElectricLavaGeneratorMk3.visibility);
        ElectricLavaGeneratorMk4.setVisibility(!ElectricLavaGeneratorMk4.visibility);
        ElectricLavaGeneratorMk5.setVisibility(!ElectricLavaGeneratorMk5.visibility);

        
    }



    // Build Farming
    if (Farming.isMouseOver(window) && Farming.onclick_name == "Farming") {
        FarmingStation.setVisibility(!FarmingStation.visibility);
        FarmingHarvester.setVisibility(!FarmingHarvester.visibility);
        FarmingTerminal.setVisibility(!FarmingTerminal.visibility);
        FarmingField.setVisibility(!FarmingField.visibility);
        FarmingGenerator.setVisibility(!FarmingGenerator.visibility);
        FarmingSeeder.setVisibility(!FarmingSeeder.visibility);
        FarmingComposter.setVisibility(!FarmingComposter.visibility);

        FarmingPipeStraight.setVisibility(!FarmingPipeStraight.visibility);
        FarmingPipeLeft.setVisibility(!FarmingPipeLeft.visibility);
        FarmingPipeRight.setVisibility(!FarmingPipeRight.visibility);
        FarmingPipeTunnel.setVisibility(!FarmingPipeTunnel.visibility);
        FarmingPipeSplitter.setVisibility(!FarmingPipeSplitter.visibility);
        FarmingPipeMerger.setVisibility(!FarmingPipeMerger.visibility);

        FarmingFluidPump.setVisibility(!FarmingFluidPump.visibility);
        FarmingFluidTank.setVisibility(!FarmingFluidTank.visibility);
        FarmingFluidIrrigator.setVisibility(!FarmingFluidIrrigator.visibility);
        FarmingFluidMixer.setVisibility(!FarmingFluidMixer.visibility);
    }






    // joystick Steuerung

    if (BtnLeft.isMouseOver(window) && BtnLeft.onclick_name == "MoveLeft") {
        sf::Vector2f PlayerPosition = BtnPlayer.getPosition();
        int positionX = PlayerPosition.x;
        int positionY = PlayerPosition.y;

        positionX -= 10;
        BtnPlayer.setPosition(positionX, positionY);
    }

    if (BtnRight.isMouseOver(window) && BtnRight.onclick_name == "MoveRight") {
        sf::Vector2f PlayerPosition = BtnPlayer.getPosition();
        int positionX = PlayerPosition.x;
        int positionY = PlayerPosition.y;

        positionX += 10;
        BtnPlayer.setPosition(positionX, positionY);

    }

    if (BtnUp.isMouseOver(window) && BtnUp.onclick_name == "MoveUp") {
        sf::Vector2f PlayerPosition = BtnPlayer.getPosition();
        int positionX = PlayerPosition.x;
        int positionY = PlayerPosition.y;

        positionY -= 10;
        BtnPlayer.setPosition(positionX, positionY);
    }

    if (BtnDown.isMouseOver(window) && BtnDown.onclick_name == "MoveDown") {
        sf::Vector2f PlayerPosition = BtnPlayer.getPosition();
        int positionX = PlayerPosition.x;
        int positionY = PlayerPosition.y;

        positionY += 10;
        BtnPlayer.setPosition(positionX, positionY);
    }


}
