# Hon

Project

    Academic game project by 4 sophomore students team.
    Developed with custom c++ engine.
  
  
Introduction

    HON is 2D action platformer game. Players will fight against moving things during exploring a mansion.
    The story is about a ghost wants to be a human again. Players need to find 3 flowers to reborn.


Installation

    You can simply install Hon with downloading and running hon_setup.exe. It will automatically install tje entire game. After the installation, run HON.exe. The default location of the file is C:\Program Files\Digipen\hon.
  

Sources

    You can view the entire source in hon_source folder.
    These are files that I mainly coded.

    AI
    - State.h, StateMachine, GlobalState_Normal, State_Defense, State_Rush, State_Attack_Flying, State_Wandering_Flying, State_Chasing, State_KnockDown, State_Wandering
    - Goal.h, Goal_Composite Goal_Think, Goal_Attack, Goal_Dash, Goal_Flee, Goal_Stomp, Goal_Uppercut, Boss
    - Goal_Evaluator, AttackGoal_Evaluator, FleeGoal_Evaluator
   
   Gameplay - Door, DoorUI, FragileWall, MoveCharacter
  
   System - C_AI, S_AI, C_Audio, S_Audio, C_GameObject, S_GameObject, Font, Text, Mathematics, FontManager, StateManager

   Files without an extension has both .h and .cpp files.
