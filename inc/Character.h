#pragma once

#include <iostream>
#include <string>
#include "Dungeoon.h"

class Character
{
    public:
        // Constructors and Destructor
        // ---------------------------
        // Constructor 
        Character();
        Character( const char& userInput );
        Character( const int& monsterClass );
        
        // Deconstructor
        ~Character();

        // Getter and setter functions
        // ---------------------------
        std::string GetType();
        std::string GetClass();
        int         GetStrength();
        int         GetMagic();
        int         GetHealth();
        int         GetXPosition();
        int         GetYPosition();
        void        SetPlayerAtStart( const int& xPosition, const int& yPosition );
        void        SetAction( const char& action, Dungeoon& dungeoon );

    private:
        // Character type
        // ---------------------------
        enum CHARACTER_TYPE
        {
            // Player character
            PC,

            //Non-player character
            NPC
        };

        // Character class
        // ---------------------------
        enum CHARACTER_CLASS
        {
            // PCs (0-3)
            KNIGHT,
            MAGE,
            ORC,
            ELF,

            // NPCs (4-6)
            ZOMBIE,
            GIANT,
            DRAGOON
        };

        // Character attributes:
        // ---------------------------
        int type_;
        int class_;
        int strength_;
        int magic_;
        int health_;
        int xPosition_;
        int yPosition_;
        
        // Character action functions
        // ---------------------------
        void        MoveForward( const unsigned int& dungeoonSize, const char& nextSpace );
        void        MoveBackward( const unsigned int& dungeoonSize, const char& nextSpace );
        void        MoveLeft( const unsigned int& dungeoonSize, const char& nextSpace );
        void        MoveRight( const unsigned int& dungeoonSize, const char& nextSpace );
        //void        PickupItem();
        //void        DropItem();
        //void        EngageMonster();
        //void        RunAway();

};