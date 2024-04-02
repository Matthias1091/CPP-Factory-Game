// Window.h
#ifndef WINDOW_H
#define WINDOW_H


#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <memory>
#include "Class.h"
#include "ColorPalette.h"




class Window {
private:
    
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    unsigned int windowWidth = desktopMode.width;
    unsigned int windowHeight = desktopMode.height;

    sf::Font font;
    sf::RenderWindow window;
    //window.create(sf::VideoMode(desktopMode.width, desktopMode.height), "My First Game :)", sf::Style::Fullscreen);


    int windowcloseX = windowWidth - 25;

    int joyLeftX = 0;
    int joyLeftY = windowHeight - 100;

    int joyRightX = 100;
    int joyRightY = windowHeight - 100;

    int joyUpX = 50;
    int joyUpY = windowHeight - 150;

    int joyDownX = 50;
    int joyDownY = windowHeight - 50;

    int joyMenuX = 50;
    int joyMenuY = windowHeight - 100;

    // Button Name, OnClick Name, PositionX, PositionY, SizeX, SizeY, Button Text, Font size, Is Visible, Background Color

    // Game Main Btns:
    Button Game = Button("Game", "Game", 0, 0, 100, 25, "Game", 15, true, GameColor); // save, load, creates a new game
    Button Settings = Button("Settings", "Settings", 100, 0, 100, 25, "Settings", 15, true, SettingsColor); // sound, color settings, screenmode, keybindings
    Button Menu = Button("Menu", "Menu", 200, 0, 100, 25, "Menu", 15, true, MenuColor); // build, science, inventory, crafting, recipes, terminal
    Button Data = Button("Data", "Data", 300, 0, 100, 25, "Data", 15, true, DataColor); // Analystics data: Power window, mashine infos (mashine1, mashine2, ...), Map infos, 
    Button SocialMedia = Button("SocialMedia", "SocialMedia", 400, 0, 100, 25, "Social Media", 15, true, SocialMediaColor);
    Button Help = Button("Help", "Help", 500, 0, 100, 25, "Help", 15, true, HelpColor);
    Button WindowClose = Button("WindowClose", "WindowClose", windowcloseX, 0, 25, 25, "X", 15, true, WindowCloseColor); // schliest das game



    //Game
    Button NewGame = Button("NewGame", "NewGame", 0, 25, 120, 25, "New Game", 15, false, newGameColor);                  // öffnet ein neues spiel
    Button LoadGame = Button("LoadGame", "LoadGame", 0, 50, 120, 25, "Load Game", 15, false, loadGameColor);             // ladet einen spielstand
    Button SaveGame = Button("SaveGame", "SaveGame", 0, 75, 120, 25, "Save Game", 15, false, saveGameColor);             // speichert das spiel
    Button Gamefiles = Button("Gamefiles", "Gamefiles", 0, 100, 120, 25, "Show Gamefiles", 15, false, gamefilesColor);   // zeigt die gamefiles an

    // Settings
    Button Sound = Button("Sound", "Sound", 100, 25, 120, 25, "Sound", 15, false, soundColor);       // zeigt die soundeinstellung an
    Button Colors = Button("Colors", "Colors", 100, 50, 120, 25, "Colors", 15, false, colorColor);   // zeigt die color palletes an
    Button Keybindings = Button("Keybindings", "Keybindings", 100, 75, 120, 25, "Keybindings", 15, false, keyColor);
    Button Graphic = Button("Graphic", "Graphic", 100, 100, 120, 25, "Graphic Settings", 15, false, graphicColor);
    Button Language = Button("Language", "Language", 100, 125, 120, 25, "Language", 15, false, languageColor);
    Button Gui = Button("Gui", "Gui", 100, 150, 120, 25, "Gui Settings", 15, false, guiColor);

    // Menu
    Button Build = Button("Build", "Build", 200, 25, 120, 25, "Build", 15, false, buildColor);
    Button Science = Button("Science", "Science", 200, 50, 120, 25, "Science", 15, false, scienceColor);
    Button Inventory = Button("Inventory", "Inventory", 200, 75, 120, 25, "Inventory", 15, false, invColor);
    Button Crafting = Button("Crafting", "Crafting", 200, 100, 120, 25, "Crafting", 15, false, craftingColor);
    Button Recipes = Button("Recipes", "Recipes", 200, 125, 120, 25, "Recipes", 15, false, recpColor);
    Button Terminal = Button("Terminal", "Terminal", 200, 150, 120, 25, "Terminal", 15, false, terminalColor);
    Button Quests = Button("Quests", "Quests", 200, 175, 120, 25, "Quests", 15, false, questColor);
    Button Archivments = Button("Archivments", "Archivments", 200, 200, 120, 25, "Archivments", 15, false, archivmentsColor);

    // Data
    Button PowerData = Button("PowerData", "PowerData", 300, 25, 120, 25, "Power", 15, false, powerdataColor);
    Button MashineData = Button("MashineInfo", "MashineInfo", 300, 50, 120, 25, "Mashine Infos", 15, false, mashineinfoColor);
    Button Performance = Button("Performance", "Performance", 300, 75, 120, 25, "Performance", 15, false, performanceColor);
    Button Enviroment = Button("Enviroment", "Enviroment", 300, 100, 120, 25, "Enviroment", 15, false, enviromentColor);

    // Scocial Media
    Button Discord = Button("Discord", "Discord", 400, 25, 120, 25, "Discord", 15, false, discordColor);

    // ============================================================================================================================
    // Sound system
    Button SoundMaster = Button("SoundMaster", "SoundMaster", 220, 25, 120, 25, "Master", 15, false, soundmasterColor);
    Button SoundMusic = Button("SoundMusic", "SoundMusic", 220, 50, 120, 25, "Music", 15, false, soundmusicColor);
    Button SoundFx = Button("SoundFx", "SoundFx", 220, 75, 120, 25, "Fx", 15, false, soundfxColor);
    Button SoundPlayer = Button("SoundPlayer", "SoundPlayer", 220, 100, 120, 25, "Player", 15, false, soundplayerColor);
    Button SoundEnemies = Button("SoundEnemeies", "SoundEnemies", 220, 125, 120, 25, "Enemies", 15, false, soundenemiesColor);
    Button SoundMashines = Button("SoundMashines", "SoundMashines", 220, 150, 120, 25, "Mashines", 15, false, soundmashinesColor);
    // ============================================================================================================================
    // Colors
    Button ColorPalette1 = Button("ColorPalette1", "ColorPalette1", 220, 25, 120, 25, "Palette 1", 15, false, colorpalette1Color);
    Button ColorPalette2 = Button("ColorPalette2", "ColorPalette2", 220, 50, 120, 25, "Palette 2", 15, false, colorpalette2Color);
    Button ColorPalette3 = Button("ColorPalette3", "COlorPalette3", 220, 75, 120, 25, "Palette 3", 15, false, colorpalette3Color);
    Button ColorPalette4 = Button("ColorPalette4", "ColorPalette4", 220, 100, 120, 25, "Palette 4", 15, false, colorpalette4Color);
    Button ColorPalette5 = Button("ColorPalette5", "ColorPalette5", 220, 100, 120, 25, "Palette 5", 15, false, colorpalette5Color);
    Button ColorPalette6 = Button("ColorPalette6", "ColorPalette6", 220, 125, 120, 25, "Palette 6", 15, false, colorpalette6Color);
    // ============================================================================================================================
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // Build
    Button Defense = Button("Defense", "Defense", 320, 25, 120, 25, "Defense", 15, false, defenseColor);
    Button Farming = Button("Farming", "Farming", 320, 50, 120, 25, "Farming", 15, false, farmingColor);
    Button Fluids = Button("Fluids", "Fluids", 320, 75, 120, 25, "Fluids", 15, false, fluidsColor);
    Button Logic = Button("Logic", "Logic", 320, 100, 120, 25, "Logic", 15, false, logicColor);
    Button Logistics = Button("Logistics", "logistics", 320, 125, 120, 25, "Logistics", 15, false, logisticsColor);
    Button Mashines = Button("Mashines", "Mashines", 320, 150, 120, 25, "Mashines", 15, false, mashinesColor);
    Button MeSystem = Button("MeSystem", "MeSystem", 320, 175, 120, 25, "Me System", 15, false, mesystemColor);
    Button Power = Button("Power", "Power", 320, 200, 120, 25, "Power", 15, false, powerColor);
    Button Robotics = Button("Rootics", "Robotics", 320, 225, 120, 25, "Robotics", 15, false, roboticsColor);
    Button Steel = Button("Steel", "Steel", 320, 250, 120, 25, "Steel", 15, false, steelColor);
    Button Vehicles = Button("Vehicles", "Vehicles", 320, 275, 120, 25, "Vehicles", 15, false, vehiclesColor);
    Button AirSystem = Button("AirSystem", "AirSystem", 320, 300, 120, 25, "Air System", 15, false, airsystemColor);
    // ============================================================================================================================
    // Build Defense
    // 
    //std::vector<Button> buildDefense;
    //std::vector<std::unique_ptr<Button>> buildDefense;
    /*
    buildDefense.emplace_back(std::make_unique<Button>("WallSmallMk1", "WallSmallMk1", 440, 25, 120, 25, "Wall Small Mk1", 15, false));
    buildDefense.emplace_back(std::make_unique<Button>("WallSmallMk2", "WallSmallMk2", 440, 50, 120, 25, "Wall Small Mk2", 15, false));
    buildDefense.emplace_back(std::make_unique<Button>("WallSmallMk3", "WallSmallMk3", 440, 75, 120, 25, "Wall Small Mk3", 15, false));
    buildDefense.emplace_back(std::make_unique<Button>("WallSmallMk4", "WallSmallMk4", 440, 100, 120, 25, "Wall Small Mk4", 15, false));
    buildDefense.emplace_back(std::make_unique<Button>("WallSmallMk5", "WallSmallMk5", 440, 125, 120, 25, "Wall Small MK5", 15, false));
    */
    


    Button WallSmallMk1 = Button("WallSmallMk1", "WallSmallMk1", 440, 25, 120, 25, "Wall Small Mk1", 15, false, wallsmallmk1Color);
    Button WallSmallMk2 = Button("WallSmallMk2", "WallSmallMk2", 440, 50, 120, 25, "Wall Small Mk2", 15, false, wallsmallmk2Color);
    Button WallSmallMk3 = Button("WallSmallMk3", "WallSmallMk3", 440, 75, 120, 25, "Wall Small Mk3", 15, false, wallsmallmk3Color);
    Button WallSmallMk4 = Button("WallSmallMk4", "WallSmallMk4", 440, 100, 120, 25, "Wall Small Mk4", 15, false, wallsmallmk4Color);
    Button WallSmallMk5 = Button("WallSmallMk5", "WallSmallMk5", 440, 125, 120, 25, "Wall Small MK5", 15, false, wallsmallmk5Color);

    Button WallBigMk1 = Button("WallBigMk1", "WallBigMk1", 440, 150, 120, 25, "Wall Big Mk1", 15, false, wallbigmk1Color);
    Button WallBigMk2 = Button("WallBigMk2", "WallBigMk2", 440, 175, 120, 25, "Wall Big Mk2", 15, false, wallbigmk2Color);
    Button WallBigMk3 = Button("WallBigMk3", "WallBigMk3", 440, 200, 120, 25, "Wall Big Mk3", 15, false, wallbigmk3Color);
    Button WallBigMk4 = Button("WallBigMk4", "WallBigMk4", 440, 225, 120, 25, "Wall Big Mk4", 15, false, wallbigmk4Color);
    Button WallBigMk5 = Button("WallBigMk5", "WallBigMk5", 440, 250, 120, 25, "Wall Big Mk5", 15, false, wallbigmk5Color);

    Button GateSmallMk1 = Button("GateSmallMk1", "GateSmallMk1", 440, 275, 120, 25, "Gate Small Mk1", 15, false, gatesmallmk1Color);
    Button GateSmallMk2 = Button("GateSmallMk2", "GateSmallMk2", 440, 300, 120, 25, "Gate Small MK2", 15, false, gatesmallmk2Color);
    Button GateSmallMk3 = Button("GateSmallMk3", "GateSmallMk3", 440, 325, 120, 25, "Gate Small Mk3", 15, false, gatesmallmk3Color);
    Button GateSmallMk4 = Button("GateSmallMk4", "GateSmallMk4", 440, 375, 120, 25, "Gate Small Mk4", 15, false, gatesmallmk4Color);
    Button GateSmallMk5 = Button("GateSmallMk5", "GateSmallMk5", 440, 400, 120, 25, "Gate Small Mk5", 15, false, gatesmallmk5Color);

    Button GateBigMk1 = Button("GateBigMk1", "GateBigMk1", 440, 425, 120, 25, "Gate Big Mk1", 15, false, gatebigmk1Color);
    Button GateBigMk2 = Button("GateBigMk2", "GateBigMk2", 440, 450, 120, 25, "Gate Big Mk2", 15, false, gatebigmk2Color);
    Button GateBigMk3 = Button("GateBigMk3", "GateBigMk3", 440, 475, 120, 25, "Gate Big Mk3", 15, false, gatebigmk3Color);
    Button GateBigMk4 = Button("GateBigMk4", "GateBigMk4", 440, 500, 120, 25, "Gate Big Mk4", 15, false, gatebigmk4Color);
    Button GateBigMk5 = Button("GateBigMk5", "GateBigMk5", 440, 525, 120, 25, "Gate Big Mk5", 15, false, gatebigmk5Color);

    Button TurretSingleMk1 = Button("TurretSingleMk1", "TurretSingleMk1", 560, 25, 120, 25, "Turret Single Mk1", 15, false, turretsinglemk1Color);
    Button TurretSingleMk2 = Button("TurretSingleMk2", "TurretSingleMk2", 560, 50, 120, 25, "Turret Single Mk2", 15, false, turretsinglemk2Color);
    Button TurretSingleMk3 = Button("TurretSingleMk3", "TurretSingleMk3", 560, 75, 120, 25, "Turret Single Mk3", 15, false, turretsinglemk3Color);
    Button TurretSingleMk4 = Button("TurretSingleMk4", "TurretSingleMk4", 560, 100, 120, 25, "Turret Single Mk4", 15, false, turretsinglemk4Color);
    Button TurretSingleMk5 = Button("TurretSingleMk5", "TurretSingleMk5", 560, 125, 120, 25, "Turret Single Mk5", 15, false, turretsinglemk5Color);

    Button TurretDoubleMk1 = Button("TurretDoubleMk1", "TurretDoubleMk1", 560, 150, 120, 25, "Turret Double Mk1", 15, false, turretdoublemk1Color);
    Button TurretDoubleMk2 = Button("TurretDoubleMk2", "TurretDoubleMk2", 560, 175, 120, 25, "Turret Double Mk2", 15, false, turretdoublemk2Color);
    Button TurretDoubleMk3 = Button("TurretDoubleMk3", "TurretDoubleMk3", 560, 200, 120, 25, "Turret Double Mk3", 15, false, turretdoublemk3Color);
    Button TurretDoubleMk4 = Button("TurretDoubleMk4", "TurretDoubleMk4", 560, 225, 120, 25, "Turret Double Mk4", 15, false, turretdoublemk4Color);
    Button TurretDoubleMk5 = Button("TurretDoubleMk5", "TurretDoubleMk5", 560, 250, 120, 25, "Turret Double Mk5", 15, false, turretdoublemk5Color);

    Button ElectricSingleTurret = Button("ElectricSingleTurret", "ElectricSingleTurret", 680, 25, 120, 25, "Electric Single Turret", 15, false, electricsingleturretColor);
    Button ElectricDoubleTurret = Button("ElectricDoubleTurret", "ElectricDoubleTurret", 680, 50, 120, 25, "Electric Double Turret", 15, false, electricdoubleturretColor);
    Button ElectricMirrorL = Button("ElectricMirrorL", "ElectricMirrorL", 680, 75, 120, 25, "Electric Mirror L", 15, false, electricmirrorlColor);
    Button ElectricMirrorT = Button("ElectricMirrorT", "ElectricMirrorT", 680, 100, 120, 25, "Electric Mirror T", 15, false, electricmirrortColor);
    Button ElectricTunnel = Button("ElectricTunnel", "ElectricTunnel", 680, 125, 120, 25, "Electric Tunnel", 15, false, electrictunnelColor);
    Button ElectricRepeater = Button("ElectricRepeater", "ElectricRepeater", 680, 150, 120, 25, "Electric Repeater", 15, false, electricrepeaterColor);

    Button ElectricCoalGeneratorMk1 = Button("ElectricCoalGeneratorMk1", "ElectricCoalGeneratorMk1", 680, 175, 120, 25, "Coal Generator Mk1", 15, false, electriccoalgeneratormk1Color);
    Button ElectricCoalGeneratorMk2 = Button("ElectricCoalGeneratorMk2", "ElectricCoalGeneratorMk2", 680, 200, 120, 25, "Coal Generator Mk2", 15, false, electriccoalgeneratormk2Color);
    Button ElectricCoalGeneratorMk3 = Button("ElectricCoalGeneratorMk3", "ElectricCoalGeneratorMk3", 680, 225, 120, 25, "Coal Generator Mk3", 15, false, electriccoalgeneratormk3Color);
    Button ElectricCoalGeneratorMk4 = Button("ElectricCoalGeneratorMk4", "ElectricCoalGeneratorMk4", 680, 250, 120, 25, "Coal Generator Mk4", 15, false, electriccoalgeneratormk4Color);
    Button ElectricCoalGeneratorMk5 = Button("ElectricCoalGeneratorMk5", "ElectricCoalGeneratorMk5", 680, 275, 120, 25, "Coal Generator Mk5", 15, false, electriccoalgeneratormk5Color);

    Button ElectricLavaGeneratorMk1 = Button("ElectricLavaGeneratorMk1", "ElectricLavaGeneratorMk1", 680, 300, 120, 25, "Lava Generator Mk1", 15, false, electriclavageneratormk1Color);
    Button ElectricLavaGeneratorMk2 = Button("ElectricLavaGeneratorMk2", "ElectricLavaGeneratorMk2", 680, 325, 120, 25, "Lava Generator Mk2", 15, false, electriclavageneratormk2Color);
    Button ElectricLavaGeneratorMk3 = Button("ElectricLavaGeneratorMk3", "ElectricLavaGeneratorMk3", 680, 350, 120, 25, "Lava Generator Mk3", 15, false, electriclavageneratormk3Color);
    Button ElectricLavaGeneratorMk4 = Button("ElectricLavaGeneratorMk4", "ElectricLavaGeneratorMk4", 680, 375, 120, 25, "Lava Generator Mk4", 15, false, electriclavageneratormk4Color);
    Button ElectricLavaGeneratorMk5 = Button("ElectricLavaGeneratorMk5", "ElectricLavaGeneratorMk5", 680, 400, 120, 25, "Lava Generator Mk5", 15, false, electriclavageneratormk5Color);

    /*
    *   Note: dont forget to include Mirror L Left and Mirror L Right
    * 
        Attelerie Station
        Attelerie Vehicle
        Minefield
        Energy shield
        Stealth Field generator
        manuel flame thrower
        automatic Flame thrower 
        Anti missle System
        Security System (kameras, movement sensors, pwd locked gates)
        Laser defense Tower
        Fog generator
    */


    // ============================================================================================================================
    // Build Farming

    Button FarmingStation = Button("FarmingStation", "FarmingStation", 440, 25, 120, 25, "Farming Station", 15, false, farmingstationColor);
    Button FarmingHarvester = Button("FamringHarvester", "FarmingHarvester", 440, 50, 120, 25, "Farming Harvester", 15, false, farmingharvesterColor);
    Button FarmingTerminal = Button("FarmingTerminal", "FarmingTerminal", 440, 75, 120, 25, "Farming Terminal", 15, false, farmingterminalColor);
    Button FarmingField = Button("FarmingField", "FarmingField", 440, 100, 120, 25, "Farming Field", 15, false, farmingfieldColor);
    Button FarmingGenerator = Button("FarmingGenerator", "FarmingGenerator", 440, 125, 120, 25, "Farming Generator", 15, false, farminggeneratorColor);
    Button FarmingSeeder = Button("FarmingSeeder", "FarmingSeeder", 440, 150, 120, 25, "Farming Seeder", 15, false, farmingseederColor);
    Button FarmingComposter = Button("FarmingComposter", "FarmingComposter", 440, 175, 120, 25, "Composter", 15, false, farmingcomposterColor);

    Button FarmingPipeStraight = Button("FarmingPipeStraight", "FarmingPipeStraight", 560, 25, 120, 25, "Pipe Straight", 15, false, farmingpipestraightColor);
    Button FarmingPipeLeft = Button("FarmingPipeLeft", "FarmingPipeLeft", 560, 50, 120, 25, "Pipe Left", 15, false, farmingpipeleftColor);
    Button FarmingPipeRight = Button("FarmingPipeRight", "FarmingPipeRight", 560, 75, 120, 25, "Pipe Right", 15, false, farmingpiperightColor);
    Button FarmingPipeTunnel = Button("FarmingPipeTunnel", "FarmingPipeTunnel", 560, 100, 120, 25, "Pipe Tunnel", 15, false, farmingpipetunnelColor);
    Button FarmingPipeSplitter = Button("FarmingPipeSlitter", "FarmingPipeSplitter", 560, 125, 120, 25, "Pipe Splitter", 15, false, farmingpipesplitterColor);
    Button FarmingPipeMerger = Button("FarmingPipeMerger", "FarmingPipeMerger", 560, 150, 120, 25, "Pipe Merger", 15, false, farmingpipemergerColor);
    
    Button FarmingFluidPump = Button("FarmingFluidPump", "FarmingFluidPump", 680, 25, 120, 25, "Fluid Pump", 15, false, farmingfluidpumpColor);
    Button FarmingFluidTank = Button("FarmingFluidTank", "FarmingFluidTank", 680, 50, 120, 25, "Fluid Tank", 15, false, farmingfluidtankColor);
    Button FarmingFluidIrrigator = Button("FarmingFluidIrrigator", "FarmingFluidIrrigator", 680, 75, 120, 25, "Water Irrigator", 15, false, farmingfluidirrigatorColor);
    Button FarmingFluidMixer = Button("FarmingFluidMixer", "FarmingFluidFluidMixer", 680, 100, 120, 25, "FluidMixer", 15, false, farmingfluidmixerColor);

    /*
        Automatic Green House
        Air Analysator
        Ground Analysator
        Fertilizer spreader
        Seed Bank
    
    */

    // ============================================================================================================================
    // Build Fluids
    /*
        Fluid Pump
        Fluid Tank
        Fluid Mixer
        Fluid Generator
        Fluid Filter
        Fluid Heater
        Fluid Cooler

        Fluid Preasure Regulator
        Fluid Heat Exchanger
        Fluid dedector
        Dosing Pump


        Pipe straight
        Pipe left
        Pipe Right
        Pipe Tunnel
        Pipe Splitter
        Pipe Merger
        
    
    
    */

    // ============================================================================================================================
    // Build Logic
    /*
        Single Switch
        Double Switch
        Safety Switch
        Potentiometer
        Range Slider
        Button

        And Gate
        Or Gate
        Not Gate
        Exclusive Gate

        Item Counter
        Item Analyser
        Multiplaxer
        Demultiplaxer
        Timer
        Counter
        AC/DC Converter
        Signal Repeater

        Wireless Transmitter
        Wireless Receiver
        Wireless Repeater

        Frequency Splitter
        Frequency Merger

        Light Sensor
        Temperature Sensor
        Preasure Sensor
        Humidity Sensor

        Building Analyser
        Building Reader
        Building Writer

        CPU Mk1
        CPU Mk2 
        CPU Mk3
        CPU Mk3
        CPU Mk4
        CPU Mk5

        RAM Mk1
        RAM Mk2
        RAM Mk3
        RAM Mk4 
        RAM Mk5

        SSD Mk1
        SSD Mk2
        SSD Mk3
        SSD Mk4
        SSD Mk5

        Graphic Card Mk1
        Graphic Card Mk2
        Graphic Card Mk3
        Graphic Card Mk4
        Graphic Card Mk5

        Network Controller
        Network Modul
        Network Antenne

        Motherboard Mk1
        Motherboard Mk2
        Motherboard Mk3
        Motherboard Mk4
        Motherboard Mk5
        
        Power Module Mk1
        Power Module Mk2
        Power Module Mk3
        Power Module Mk4
        Power Module Mk5

        Network Cable 
        Network Pole

    
    */

    // ============================================================================================================================
    // Build Logistics
    /*
        Conv Belt Mk1
        Conv Belt Mk2
        Conv Belt Mk3
        Conv Belt Mk4
        Conv Belt Mk5

        Conv Belt Splitter Mk1
        Conv Belt Splitter Mk2
        Conv Belt Splitter Mk3
        Conv Belt Splitter Mk4
        Conv Belt Splitter Mk5

        Conv Belt Electric Splitter Mk1
        Conv Belt Electric Splitter Mk2
        Conv Belt Electric Splitter Mk3
        Conv Belt Electric Splitter Mk4
        Conv Belt Electric Splitter Mk5

        Conv Belt Programmable Splitter Mk1
        Conv Belt Programmable Splitter Mk2
        Conv Belt Programmable Splitter Mk3
        Conv Belt Programmable Splitter Mk4
        Conv Belt Programmable Splitter Mk5

        Conv Belt Merger Mk1
        Conv Belt Merger Mk2
        Conv Belt Merger Mk3
        Conv Belt Merger Mk4
        Conv Belt Merger Mk5

        Conv Belt Tunnel Mk1
        Conv Belt Tunnel Mk2
        Conv Belt Tunnel Mk3
        Conv Belt Tunnel Mk4
        Conv Belt Tunnel Mk5

        Container Mk1
        Container Mk2
        Container Mk3
        Container Mk4
        Container Mk5
    
    
    */

    // ============================================================================================================================
    // Build Mashines
    /*
        Miner
        Crusher
        Ore Washer
        Ore Press
        Smelter
        Wiring Mashine
        Mashine Part Assembler
        Crafter
        Assembler
        Manufacturer
        Foundry
        Raffenerie
        Packager
        Recicling Mashine
        Quality Controller
        Cooling House
        Recourse Scanner
        Wind Tunnel
        Concrete Mixer
        Disassembler
        Trash Can

    
    
    */

    // ============================================================================================================================
    // Build Me System
    /*
        Netzwerksonde
        Me Drive
        Me Konsole
        Export Bus
        Import Bus

        P2P Me Tunnel
        P2P Fluid Tunnel
        P2P Power Tunnel
        P2P Light Tunnel

        Storage Card Mk1
        Storage Card Mk2
        Storage Card Mk3
        Storage Card Mk4
        Storage Card Mk5

        Me Controller

        Me Cable
        Me Controller Cable
        Me Multi Controller Cable
        Me Energy Cable

        Power/Me Energy Converter
        Wireless Data Transmitter
        Wireless Data Receiver
        
    */
    
    // ============================================================================================================================
    // Build Power
    /*
        Cable
        Powerpole
        Light

        Biomassburnaer
        Coal Generator
        Lava Generator
        Fuel Generator

        Steam Engine
        Wind Turbine
        Water Turbine
        Solar Pandel
        Geothermal power plant
        Wave power plant
        Pumped storage power plant
        
        Mikro-Grid Controller
        

        Simple Transformer
        Normal Transformer

        Accumulator
        Flywheel accumulator
        Compressed air storage systems
        
        Heat Pump
    
    
    
    */

    // ============================================================================================================================
    // Build Robotics
    /*
        Electric Charger
        Fuel Charger
        Roboter Assembler // hülle + roboter
        Ammo Assembler
        Mikro Chip Assembler
        Press // ammo hüllen
        Defense Station
        Radar Station
        Robotic Rep Station
        Robotic Upgrade Station
        Logistic Drone Hub
        Roboter Command Center // automatic, manuel, programmable
        Roboter Reconfiguration Center

        Robotic Builder
        Science Roboter
        Security Roboter
        Enviroment Roboter
        Carry Roboter
    
    
    
    */

    // ============================================================================================================================
    // Build Vehicles
    /*
        Steam Lok
        E-Lok 

        Container Wagon
        Fluid Wagon
        Defense Wagon
        Attelerie Wagon
        Vehicle Wagon

        Fuel Truck
        Electric Truck

        Automatic Cargo transporter // cargo & fluid tank
        Reperature Vehicle
        Mobile Command Center
        Enviroment Vehicle
    
    
    
    */

    // ============================================================================================================================
    // Build Air System
    /*
        Compressor
        Air Tank
        2 / 3 Valve
        5 / 3 Valve
        Splitter
        Merger
        Preasure Regulator
        Air Filter
        Energy Recovery System

        Single Cylinder
        double Cylinder
        Spring Loaded Cylinder

        Short Range Grab Arm
        Long Range Grab Arm
        Short Range Filter Grab Amr
        Long Range Filter Grab Arm

        Air Motor
        Air Turbine
    */



    // Joystick
    Button BtnLeft = Button("ButtonLeft", "MoveLeft", joyLeftX, joyLeftY, 50, 50, "Left", 15, true, LeftColor);
    Button BtnRight = Button("ButtonRight", "MoveRight", joyRightX, joyRightY, 50, 50, "Right", 15, true, RightColor);
    Button BtnUp = Button("ButtonUp", "MoveUp", joyUpX, joyUpY, 50, 50, "Up", 15, true, UpColor);
    Button BtnDown = Button("ButtonDown", "MoveDown", joyDownX, joyDownY, 50, 50, "Down", 15, true, DownColor);
    Button BtnJoyMenu = Button("ButtonJoyMenu", "JoyMenu", joyMenuX, joyMenuY, 50, 50, "Menu", 15, true, JoyMenuColor);

    // player
    Button BtnPlayer = Button("Player", "Player", 300, 300, 50, 50, "", 10, true, PlayerColor);

public:
    Window();
    void create_objects();
    void onclick(sf::RenderWindow& window);

    // Deklarationen weiterer Methoden und Member
};

#endif // WINDOW_H


